#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void display_header(){
    cout << setw(18) << "Test results" << endl;
    cout << setw(24) << setfill('-') << "" << endl;
    cout << setfill(' ');
    cout << setw(15) << left << "Name"
        << setw(9) << right << "Score"
        << endl;
    cout << setw(24) << setfill('-') << "" << endl;
    cout << setfill(' ');
}

void display_student(string name, int score){
    cout << setw(15) << left << name
        << setw(9) << right << score
        << endl;
}

void display_footer(double average){
    cout << setw(24) << setfill('-') << "" << endl;
    cout << setfill(' ');
    cout << setw(15) << left << "Average score:"
        << setw(9) << setprecision(1) << fixed << right << average
        << endl;
}

int count_answers(string response, string key){
    int score{0};
    for (size_t i{0}; i < response.length(); ++i){
        if (response[i] == key[i])
            score++;
    }
    return score;
}



int main()
{
    ifstream infile;
    
    infile.open("responses.txt");
    if (!infile) {
        cerr << "Can't open file" << endl;
        return 1;
    }
    
    string key{};
    string name{};
    string response{};
    int sum{0};
    int num_students{0};
    double avg_score{0.0};
    
    infile >> key;
    
    display_header();
    
    while (infile >> name >> response) {
        int score = count_answers(response, key);
        sum += score;
        display_student(name,score);
        ++ num_students;
    }
    
    if (num_students != 0)
        avg_score = static_cast<double>(sum) / num_students;
    
    display_footer(avg_score);
    
    infile.close();
    
	cout <<  endl;
	return 0;
}
