##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Challenge
ConfigurationName      :=Debug
WorkspacePath          :=/Users/jonona/Documents/Cpp/Course/Sec15
ProjectPath            :=/Users/jonona/Documents/Cpp/Course/Sec15/Challenge
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=J Ya
Date                   :=02/09/2020
CodeLitePath           :="/Users/jonona/Library/Application Support/CodeLite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Challenge.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -std=c++17 $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/AccountUtils.cpp$(ObjectSuffix) $(IntermediateDirectory)/TrustAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/SavingsAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix): CheckingAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CheckingAccount.cpp$(DependSuffix) -MM CheckingAccount.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jonona/Documents/Cpp/Course/Sec15/Challenge/CheckingAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CheckingAccount.cpp$(PreprocessSuffix): CheckingAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CheckingAccount.cpp$(PreprocessSuffix) CheckingAccount.cpp

$(IntermediateDirectory)/AccountUtils.cpp$(ObjectSuffix): AccountUtils.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/AccountUtils.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/AccountUtils.cpp$(DependSuffix) -MM AccountUtils.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jonona/Documents/Cpp/Course/Sec15/Challenge/AccountUtils.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AccountUtils.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/AccountUtils.cpp$(PreprocessSuffix): AccountUtils.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/AccountUtils.cpp$(PreprocessSuffix) AccountUtils.cpp

$(IntermediateDirectory)/TrustAccount.cpp$(ObjectSuffix): TrustAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TrustAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TrustAccount.cpp$(DependSuffix) -MM TrustAccount.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jonona/Documents/Cpp/Course/Sec15/Challenge/TrustAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TrustAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TrustAccount.cpp$(PreprocessSuffix): TrustAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TrustAccount.cpp$(PreprocessSuffix) TrustAccount.cpp

$(IntermediateDirectory)/SavingsAccount.cpp$(ObjectSuffix): SavingsAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SavingsAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SavingsAccount.cpp$(DependSuffix) -MM SavingsAccount.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jonona/Documents/Cpp/Course/Sec15/Challenge/SavingsAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SavingsAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SavingsAccount.cpp$(PreprocessSuffix): SavingsAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SavingsAccount.cpp$(PreprocessSuffix) SavingsAccount.cpp

$(IntermediateDirectory)/Account.cpp$(ObjectSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Account.cpp$(DependSuffix) -MM Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jonona/Documents/Cpp/Course/Sec15/Challenge/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Account.cpp$(PreprocessSuffix) Account.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jonona/Documents/Cpp/Course/Sec15/Challenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


