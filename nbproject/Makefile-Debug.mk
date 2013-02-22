#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/GameEngine/Case/Carte.o \
	${OBJECTDIR}/Graphic/JeuConstantes.o \
	${OBJECTDIR}/GameEngine/Case/Parc.o \
	${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o \
	${OBJECTDIR}/GraphicEngine/Police.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o \
	${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o \
	${OBJECTDIR}/GameEngine/Participant/Participant.o \
	${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o \
	${OBJECTDIR}/GameEngine/Case/Prison.o \
	${OBJECTDIR}/GameEngine/De.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o \
	${OBJECTDIR}/GameEngine/Participant/Joueur.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o \
	${OBJECTDIR}/GameEngine/Carte/Carte.o \
	${OBJECTDIR}/GameEngine/Plateau.o \
	${OBJECTDIR}/GameEngine/Case/Taxe.o \
	${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o \
	${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o \
	${OBJECTDIR}/GameEngine/Billet/BilletManager.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/CallBackManager.o \
	${OBJECTDIR}/GameEngine/Case/Arrestation.o \
	${OBJECTDIR}/GameEngine/Billet/Billet.o \
	${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o \
	${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o \
	${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o \
	${OBJECTDIR}/GraphicEngine/Constant.o \
	${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o \
	${OBJECTDIR}/GameEngine/Case/Depart.o \
	${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o \
	${OBJECTDIR}/GameEngine/Case/Case.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o \
	${OBJECTDIR}/GameEngine/Carte/TypeCarte.o \
	${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o \
	${OBJECTDIR}/GameEngine/Participant/Cagnotte.o \
	${OBJECTDIR}/GraphicEngine/GraphicEngine.o \
	${OBJECTDIR}/Graphic/Jeu.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f3 \
	${TESTDIR}/TestFiles/f2

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-lcppunit -lcppunit -lcppunit -lcppunit /usr/lib/libsfml-graphics.so /usr/lib/libsfml-system.so /usr/lib/libsfml-window.so

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${TESTDIR}/TestFiles/f1

${TESTDIR}/TestFiles/f1: /usr/lib/libsfml-graphics.so

${TESTDIR}/TestFiles/f1: /usr/lib/libsfml-system.so

${TESTDIR}/TestFiles/f1: /usr/lib/libsfml-window.so

${TESTDIR}/TestFiles/f1: ${OBJECTFILES}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -lsfml-system -lsfml-window -lsfml-graphics -o ${TESTDIR}/TestFiles/f1 ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/GameEngine/Case/Carte.o: GameEngine/Case/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Carte.o GameEngine/Case/Carte.cpp

${OBJECTDIR}/Graphic/JeuConstantes.o: Graphic/JeuConstantes.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/JeuConstantes.o Graphic/JeuConstantes.cpp

${OBJECTDIR}/GameEngine/Case/Parc.o: GameEngine/Case/Parc.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Parc.o GameEngine/Case/Parc.cpp

${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o: GraphicEngine/EventHandler/MouseOverHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o GraphicEngine/EventHandler/MouseOverHandler.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o: GraphicEngine/GuiManager/GuiItem/TextBlock.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o GraphicEngine/GuiManager/GuiItem/TextBlock.cpp

${OBJECTDIR}/GraphicEngine/Police.o: GraphicEngine/Police.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/Police.o GraphicEngine/Police.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o: GraphicEngine/GuiManager/GuiManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o GraphicEngine/GuiManager/GuiManager.cpp

${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o: GraphicEngine/ActionListeners/ActionListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o GraphicEngine/ActionListeners/ActionListener.cpp

${OBJECTDIR}/GameEngine/Participant/Participant.o: GameEngine/Participant/Participant.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Participant.o GameEngine/Participant/Participant.cpp

${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o: GraphicEngine/ActionListeners/ButtonMouseOverListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o GraphicEngine/ActionListeners/ButtonMouseOverListener.cpp

${OBJECTDIR}/GameEngine/Case/Prison.o: GameEngine/Case/Prison.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Prison.o GameEngine/Case/Prison.cpp

${OBJECTDIR}/GameEngine/De.o: GameEngine/De.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/De.o GameEngine/De.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o: GraphicEngine/GuiManager/GuiItem/Image.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o GraphicEngine/GuiManager/GuiItem/Image.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o: GameEngine/Case/Propriété/Domaine.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o GameEngine/Case/Propriété/Domaine.cpp

${OBJECTDIR}/GameEngine/Participant/Joueur.o: GameEngine/Participant/Joueur.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Joueur.o GameEngine/Participant/Joueur.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o: GraphicEngine/GuiManager/GuiItem/Button.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o GraphicEngine/GuiManager/GuiItem/Button.cpp

${OBJECTDIR}/GameEngine/Carte/Carte.o: GameEngine/Carte/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Carte
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Carte/Carte.o GameEngine/Carte/Carte.cpp

${OBJECTDIR}/GameEngine/Plateau.o: GameEngine/Plateau.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Plateau.o GameEngine/Plateau.cpp

${OBJECTDIR}/GameEngine/Case/Taxe.o: GameEngine/Case/Taxe.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Taxe.o GameEngine/Case/Taxe.cpp

${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o: GraphicEngine/EventHandler/MouseOutHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o GraphicEngine/EventHandler/MouseOutHandler.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o: GameEngine/Case/Propriété/Propriete.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o GameEngine/Case/Propriété/Propriete.cpp

${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o: Graphic/Listeners/JouerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o Graphic/Listeners/JouerOnClickListener.cpp

${OBJECTDIR}/GameEngine/Billet/BilletManager.o: GameEngine/Billet/BilletManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Billet
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/BilletManager.o GameEngine/Billet/BilletManager.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/CallBackManager.o: GraphicEngine/GuiManager/CallBackManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/CallBackManager.o GraphicEngine/GuiManager/CallBackManager.cpp

${OBJECTDIR}/GameEngine/Case/Arrestation.o: GameEngine/Case/Arrestation.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Arrestation.o GameEngine/Case/Arrestation.cpp

${OBJECTDIR}/GameEngine/Billet/Billet.o: GameEngine/Billet/Billet.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Billet
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/Billet.o GameEngine/Billet/Billet.cpp

${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o: GraphicEngine/EventHandler/OnClickHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o GraphicEngine/EventHandler/OnClickHandler.cpp

${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o: GraphicEngine/ActionListeners/ButtonMouseOutListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o GraphicEngine/ActionListeners/ButtonMouseOutListener.cpp

${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o: GraphicEngine/ActionListeners/SpinnerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o GraphicEngine/ActionListeners/SpinnerOnClickListener.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o: GraphicEngine/GuiManager/GuiItem/Spinner.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o GraphicEngine/GuiManager/GuiItem/Spinner.cpp

${OBJECTDIR}/GraphicEngine/Constant.o: GraphicEngine/Constant.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/Constant.o GraphicEngine/Constant.cpp

${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o: Graphic/Listeners/QuitterOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o Graphic/Listeners/QuitterOnClickListener.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o: GameEngine/Case/Propriété/ServicePublique.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o GameEngine/Case/Propriété/ServicePublique.cpp

${OBJECTDIR}/GameEngine/Case/Depart.o: GameEngine/Case/Depart.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Depart.o GameEngine/Case/Depart.cpp

${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o: GraphicEngine/EventHandler/EventHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o GraphicEngine/EventHandler/EventHandler.cpp

${OBJECTDIR}/GameEngine/Case/Case.o: GameEngine/Case/Case.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Case.o GameEngine/Case/Case.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o: GameEngine/Case/Propriété/Gare.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o GameEngine/Case/Propriété/Gare.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o: GraphicEngine/GuiManager/GuiItem/GuiItem.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o GraphicEngine/GuiManager/GuiItem/GuiItem.cpp

${OBJECTDIR}/GameEngine/Carte/TypeCarte.o: GameEngine/Carte/TypeCarte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Carte
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Carte/TypeCarte.o GameEngine/Carte/TypeCarte.cpp

${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o: Graphic/Listeners/CommencerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o Graphic/Listeners/CommencerOnClickListener.cpp

${OBJECTDIR}/GameEngine/Participant/Cagnotte.o: GameEngine/Participant/Cagnotte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o GameEngine/Participant/Cagnotte.cpp

${OBJECTDIR}/GraphicEngine/GraphicEngine.o: GraphicEngine/GraphicEngine.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GraphicEngine.o GraphicEngine/GraphicEngine.cpp

${OBJECTDIR}/Graphic/Jeu.o: Graphic/Jeu.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Jeu.o Graphic/Jeu.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f3: ${TESTDIR}/tests/BilletManagerTest.o ${TESTDIR}/tests/BilletManagerTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f3 $^ ${LDLIBSOPTIONS} -lcppunit 

${TESTDIR}/TestFiles/f2: ${TESTDIR}/tests/JoueurTest.o ${TESTDIR}/tests/JoueurTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f2 $^ ${LDLIBSOPTIONS} -lcppunit 


${TESTDIR}/tests/BilletManagerTest.o: tests/BilletManagerTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${TESTDIR}/tests/BilletManagerTest.o tests/BilletManagerTest.cpp


${TESTDIR}/tests/BilletManagerTestRunner.o: tests/BilletManagerTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${TESTDIR}/tests/BilletManagerTestRunner.o tests/BilletManagerTestRunner.cpp


${TESTDIR}/tests/JoueurTest.o: tests/JoueurTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${TESTDIR}/tests/JoueurTest.o tests/JoueurTest.cpp


${TESTDIR}/tests/JoueurTestRunner.o: tests/JoueurTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${TESTDIR}/tests/JoueurTestRunner.o tests/JoueurTestRunner.cpp


${OBJECTDIR}/GameEngine/Case/Carte_nomain.o: ${OBJECTDIR}/GameEngine/Case/Carte.o GameEngine/Case/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Carte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Carte_nomain.o GameEngine/Case/Carte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Carte.o ${OBJECTDIR}/GameEngine/Case/Carte_nomain.o;\
	fi

${OBJECTDIR}/Graphic/JeuConstantes_nomain.o: ${OBJECTDIR}/Graphic/JeuConstantes.o Graphic/JeuConstantes.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/JeuConstantes.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/JeuConstantes_nomain.o Graphic/JeuConstantes.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/JeuConstantes.o ${OBJECTDIR}/Graphic/JeuConstantes_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Parc_nomain.o: ${OBJECTDIR}/GameEngine/Case/Parc.o GameEngine/Case/Parc.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Parc.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Parc_nomain.o GameEngine/Case/Parc.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Parc.o ${OBJECTDIR}/GameEngine/Case/Parc_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler_nomain.o: ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o GraphicEngine/EventHandler/MouseOverHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler_nomain.o GraphicEngine/EventHandler/MouseOverHandler.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o GraphicEngine/GuiManager/GuiItem/TextBlock.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock_nomain.o GraphicEngine/GuiManager/GuiItem/TextBlock.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/Police_nomain.o: ${OBJECTDIR}/GraphicEngine/Police.o GraphicEngine/Police.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/Police.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/Police_nomain.o GraphicEngine/Police.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/Police.o ${OBJECTDIR}/GraphicEngine/Police_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o GraphicEngine/GuiManager/GuiManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager_nomain.o GraphicEngine/GuiManager/GuiManager.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener_nomain.o: ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o GraphicEngine/ActionListeners/ActionListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener_nomain.o GraphicEngine/ActionListeners/ActionListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Participant/Participant_nomain.o: ${OBJECTDIR}/GameEngine/Participant/Participant.o GameEngine/Participant/Participant.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Participant/Participant.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Participant_nomain.o GameEngine/Participant/Participant.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Participant/Participant.o ${OBJECTDIR}/GameEngine/Participant/Participant_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener_nomain.o: ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o GraphicEngine/ActionListeners/ButtonMouseOverListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener_nomain.o GraphicEngine/ActionListeners/ButtonMouseOverListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Prison_nomain.o: ${OBJECTDIR}/GameEngine/Case/Prison.o GameEngine/Case/Prison.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Prison.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Prison_nomain.o GameEngine/Case/Prison.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Prison.o ${OBJECTDIR}/GameEngine/Case/Prison_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/De_nomain.o: ${OBJECTDIR}/GameEngine/De.o GameEngine/De.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/De.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/De_nomain.o GameEngine/De.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/De.o ${OBJECTDIR}/GameEngine/De_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o GraphicEngine/GuiManager/GuiItem/Image.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image_nomain.o GraphicEngine/GuiManager/GuiItem/Image.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/Domaine_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o GameEngine/Case/Propriété/Domaine.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine_nomain.o GameEngine/Case/Propriété/Domaine.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Participant/Joueur_nomain.o: ${OBJECTDIR}/GameEngine/Participant/Joueur.o GameEngine/Participant/Joueur.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Participant/Joueur.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Joueur_nomain.o GameEngine/Participant/Joueur.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Participant/Joueur.o ${OBJECTDIR}/GameEngine/Participant/Joueur_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o GraphicEngine/GuiManager/GuiItem/Button.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button_nomain.o GraphicEngine/GuiManager/GuiItem/Button.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Carte/Carte_nomain.o: ${OBJECTDIR}/GameEngine/Carte/Carte.o GameEngine/Carte/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Carte
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Carte/Carte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Carte/Carte_nomain.o GameEngine/Carte/Carte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Carte/Carte.o ${OBJECTDIR}/GameEngine/Carte/Carte_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Plateau_nomain.o: ${OBJECTDIR}/GameEngine/Plateau.o GameEngine/Plateau.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Plateau.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Plateau_nomain.o GameEngine/Plateau.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Plateau.o ${OBJECTDIR}/GameEngine/Plateau_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Taxe_nomain.o: ${OBJECTDIR}/GameEngine/Case/Taxe.o GameEngine/Case/Taxe.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Taxe.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Taxe_nomain.o GameEngine/Case/Taxe.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Taxe.o ${OBJECTDIR}/GameEngine/Case/Taxe_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler_nomain.o: ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o GraphicEngine/EventHandler/MouseOutHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler_nomain.o GraphicEngine/EventHandler/MouseOutHandler.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/Propriete_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o GameEngine/Case/Propriété/Propriete.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete_nomain.o GameEngine/Case/Propriété/Propriete.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o Graphic/Listeners/JouerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener_nomain.o Graphic/Listeners/JouerOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Billet/BilletManager_nomain.o: ${OBJECTDIR}/GameEngine/Billet/BilletManager.o GameEngine/Billet/BilletManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Billet
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Billet/BilletManager.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/BilletManager_nomain.o GameEngine/Billet/BilletManager.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Billet/BilletManager.o ${OBJECTDIR}/GameEngine/Billet/BilletManager_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/CallBackManager_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/CallBackManager.o GraphicEngine/GuiManager/CallBackManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/CallBackManager.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/CallBackManager_nomain.o GraphicEngine/GuiManager/CallBackManager.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/CallBackManager.o ${OBJECTDIR}/GraphicEngine/GuiManager/CallBackManager_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Arrestation_nomain.o: ${OBJECTDIR}/GameEngine/Case/Arrestation.o GameEngine/Case/Arrestation.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Arrestation.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Arrestation_nomain.o GameEngine/Case/Arrestation.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Arrestation.o ${OBJECTDIR}/GameEngine/Case/Arrestation_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Billet/Billet_nomain.o: ${OBJECTDIR}/GameEngine/Billet/Billet.o GameEngine/Billet/Billet.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Billet
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Billet/Billet.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/Billet_nomain.o GameEngine/Billet/Billet.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Billet/Billet.o ${OBJECTDIR}/GameEngine/Billet/Billet_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler_nomain.o: ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o GraphicEngine/EventHandler/OnClickHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler_nomain.o GraphicEngine/EventHandler/OnClickHandler.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener_nomain.o: ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o GraphicEngine/ActionListeners/ButtonMouseOutListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener_nomain.o GraphicEngine/ActionListeners/ButtonMouseOutListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener_nomain.o: ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o GraphicEngine/ActionListeners/SpinnerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener_nomain.o GraphicEngine/ActionListeners/SpinnerOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o GraphicEngine/GuiManager/GuiItem/Spinner.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner_nomain.o GraphicEngine/GuiManager/GuiItem/Spinner.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/Constant_nomain.o: ${OBJECTDIR}/GraphicEngine/Constant.o GraphicEngine/Constant.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/Constant.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/Constant_nomain.o GraphicEngine/Constant.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/Constant.o ${OBJECTDIR}/GraphicEngine/Constant_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o Graphic/Listeners/QuitterOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener_nomain.o Graphic/Listeners/QuitterOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o GameEngine/Case/Propriété/ServicePublique.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique_nomain.o GameEngine/Case/Propriété/ServicePublique.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Depart_nomain.o: ${OBJECTDIR}/GameEngine/Case/Depart.o GameEngine/Case/Depart.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Depart.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Depart_nomain.o GameEngine/Case/Depart.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Depart.o ${OBJECTDIR}/GameEngine/Case/Depart_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler_nomain.o: ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o GraphicEngine/EventHandler/EventHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler_nomain.o GraphicEngine/EventHandler/EventHandler.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Case_nomain.o: ${OBJECTDIR}/GameEngine/Case/Case.o GameEngine/Case/Case.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Case.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Case_nomain.o GameEngine/Case/Case.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Case.o ${OBJECTDIR}/GameEngine/Case/Case_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/Gare_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o GameEngine/Case/Propriété/Gare.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Gare_nomain.o GameEngine/Case/Propriété/Gare.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o ${OBJECTDIR}/GameEngine/Case/Propriété/Gare_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o GraphicEngine/GuiManager/GuiItem/GuiItem.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem_nomain.o GraphicEngine/GuiManager/GuiItem/GuiItem.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Carte/TypeCarte_nomain.o: ${OBJECTDIR}/GameEngine/Carte/TypeCarte.o GameEngine/Carte/TypeCarte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Carte
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Carte/TypeCarte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Carte/TypeCarte_nomain.o GameEngine/Carte/TypeCarte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Carte/TypeCarte.o ${OBJECTDIR}/GameEngine/Carte/TypeCarte_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o Graphic/Listeners/CommencerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener_nomain.o Graphic/Listeners/CommencerOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Participant/Cagnotte_nomain.o: ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o GameEngine/Participant/Cagnotte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Cagnotte_nomain.o GameEngine/Participant/Cagnotte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o ${OBJECTDIR}/GameEngine/Participant/Cagnotte_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GraphicEngine_nomain.o: ${OBJECTDIR}/GraphicEngine/GraphicEngine.o GraphicEngine/GraphicEngine.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GraphicEngine.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GraphicEngine_nomain.o GraphicEngine/GraphicEngine.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GraphicEngine.o ${OBJECTDIR}/GraphicEngine/GraphicEngine_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Jeu_nomain.o: ${OBJECTDIR}/Graphic/Jeu.o Graphic/Jeu.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Jeu.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -DSFML_DYNAMIC -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Jeu_nomain.o Graphic/Jeu.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Jeu.o ${OBJECTDIR}/Graphic/Jeu_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f3 || true; \
	    ${TESTDIR}/TestFiles/f2 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${TESTDIR}/TestFiles/f1

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
