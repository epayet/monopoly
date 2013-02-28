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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/GameEngine/Billet/Billet.o \
	${OBJECTDIR}/GameEngine/Billet/BilletManager.o \
	${OBJECTDIR}/GameEngine/Case/Arrestation.o \
	${OBJECTDIR}/GameEngine/Case/Case.o \
	${OBJECTDIR}/GameEngine/Case/CaseCarte.o \
	${OBJECTDIR}/GameEngine/Case/Depart.o \
	${OBJECTDIR}/GameEngine/Case/Parc.o \
	${OBJECTDIR}/GameEngine/Case/Prison.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/Famille.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o \
	${OBJECTDIR}/GameEngine/Case/Taxe.o \
	${OBJECTDIR}/GameEngine/De.o \
	${OBJECTDIR}/GameEngine/Participant/Cagnotte.o \
	${OBJECTDIR}/GameEngine/Participant/Joueur.o \
	${OBJECTDIR}/GameEngine/Participant/Participant.o \
	${OBJECTDIR}/GameEngine/Plateau.o \
	${OBJECTDIR}/Graphic/GuiItems/Appartenance.o \
	${OBJECTDIR}/Graphic/GuiItems/Hotel.o \
	${OBJECTDIR}/Graphic/GuiItems/Maison.o \
	${OBJECTDIR}/Graphic/GuiItems/Pion.o \
	${OBJECTDIR}/Graphic/Jeu.o \
	${OBJECTDIR}/Graphic/JeuConstantes.o \
	${OBJECTDIR}/Graphic/Listeners/AppartenanceOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/BilletOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/ConstruireOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/FaireMonnaieOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/FinirTourKeyReleasedListener.o \
	${OBJECTDIR}/Graphic/Listeners/FinirTourOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/LancerLesDesOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/NonPayerOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/OuiPayerOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/ResetBilletsOnClickListener.o \
	${OBJECTDIR}/Graphic/Listeners/ValiderBilletsOnCLickListener.o \
	${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o \
	${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o \
	${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o \
	${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o \
	${OBJECTDIR}/GraphicEngine/Constant.o \
	${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o \
	${OBJECTDIR}/GraphicEngine/EventHandler/KeyReleasedHandler.o \
	${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o \
	${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o \
	${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o \
	${OBJECTDIR}/GraphicEngine/GraphicEngine.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o \
	${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o \
	${OBJECTDIR}/GraphicEngine/Police.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/util.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly \
	${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly

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
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/GameEngine/Billet/Billet.o: GameEngine/Billet/Billet.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Billet
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/Billet.o GameEngine/Billet/Billet.cpp

${OBJECTDIR}/GameEngine/Billet/BilletManager.o: GameEngine/Billet/BilletManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Billet
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/BilletManager.o GameEngine/Billet/BilletManager.cpp

${OBJECTDIR}/GameEngine/Case/Arrestation.o: GameEngine/Case/Arrestation.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Arrestation.o GameEngine/Case/Arrestation.cpp

${OBJECTDIR}/GameEngine/Case/Case.o: GameEngine/Case/Case.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Case.o GameEngine/Case/Case.cpp

${OBJECTDIR}/GameEngine/Case/CaseCarte.o: GameEngine/Case/CaseCarte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/CaseCarte.o GameEngine/Case/CaseCarte.cpp

${OBJECTDIR}/GameEngine/Case/Depart.o: GameEngine/Case/Depart.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Depart.o GameEngine/Case/Depart.cpp

${OBJECTDIR}/GameEngine/Case/Parc.o: GameEngine/Case/Parc.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Parc.o GameEngine/Case/Parc.cpp

${OBJECTDIR}/GameEngine/Case/Prison.o: GameEngine/Case/Prison.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Prison.o GameEngine/Case/Prison.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o: GameEngine/Case/Propriété/Domaine.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o GameEngine/Case/Propriété/Domaine.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/Famille.o: GameEngine/Case/Propriété/Famille.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Famille.o GameEngine/Case/Propriété/Famille.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o: GameEngine/Case/Propriété/Gare.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o GameEngine/Case/Propriété/Gare.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o: GameEngine/Case/Propriété/Propriete.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o GameEngine/Case/Propriété/Propriete.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o: GameEngine/Case/Propriété/ServicePublique.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o GameEngine/Case/Propriété/ServicePublique.cpp

${OBJECTDIR}/GameEngine/Case/Taxe.o: GameEngine/Case/Taxe.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Taxe.o GameEngine/Case/Taxe.cpp

${OBJECTDIR}/GameEngine/De.o: GameEngine/De.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/De.o GameEngine/De.cpp

${OBJECTDIR}/GameEngine/Participant/Cagnotte.o: GameEngine/Participant/Cagnotte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o GameEngine/Participant/Cagnotte.cpp

${OBJECTDIR}/GameEngine/Participant/Joueur.o: GameEngine/Participant/Joueur.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Joueur.o GameEngine/Participant/Joueur.cpp

${OBJECTDIR}/GameEngine/Participant/Participant.o: GameEngine/Participant/Participant.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Participant.o GameEngine/Participant/Participant.cpp

${OBJECTDIR}/GameEngine/Plateau.o: GameEngine/Plateau.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Plateau.o GameEngine/Plateau.cpp

${OBJECTDIR}/Graphic/GuiItems/Appartenance.o: Graphic/GuiItems/Appartenance.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/GuiItems
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/GuiItems/Appartenance.o Graphic/GuiItems/Appartenance.cpp

${OBJECTDIR}/Graphic/GuiItems/Hotel.o: Graphic/GuiItems/Hotel.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/GuiItems
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/GuiItems/Hotel.o Graphic/GuiItems/Hotel.cpp

${OBJECTDIR}/Graphic/GuiItems/Maison.o: Graphic/GuiItems/Maison.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/GuiItems
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/GuiItems/Maison.o Graphic/GuiItems/Maison.cpp

${OBJECTDIR}/Graphic/GuiItems/Pion.o: Graphic/GuiItems/Pion.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/GuiItems
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/GuiItems/Pion.o Graphic/GuiItems/Pion.cpp

${OBJECTDIR}/Graphic/Jeu.o: Graphic/Jeu.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Jeu.o Graphic/Jeu.cpp

${OBJECTDIR}/Graphic/JeuConstantes.o: Graphic/JeuConstantes.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/JeuConstantes.o Graphic/JeuConstantes.cpp

${OBJECTDIR}/Graphic/Listeners/AppartenanceOnClickListener.o: Graphic/Listeners/AppartenanceOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/AppartenanceOnClickListener.o Graphic/Listeners/AppartenanceOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/BilletOnClickListener.o: Graphic/Listeners/BilletOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/BilletOnClickListener.o Graphic/Listeners/BilletOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o: Graphic/Listeners/CommencerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o Graphic/Listeners/CommencerOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/ConstruireOnClickListener.o: Graphic/Listeners/ConstruireOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/ConstruireOnClickListener.o Graphic/Listeners/ConstruireOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/FaireMonnaieOnClickListener.o: Graphic/Listeners/FaireMonnaieOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/FaireMonnaieOnClickListener.o Graphic/Listeners/FaireMonnaieOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/FinirTourKeyReleasedListener.o: Graphic/Listeners/FinirTourKeyReleasedListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/FinirTourKeyReleasedListener.o Graphic/Listeners/FinirTourKeyReleasedListener.cpp

${OBJECTDIR}/Graphic/Listeners/FinirTourOnClickListener.o: Graphic/Listeners/FinirTourOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/FinirTourOnClickListener.o Graphic/Listeners/FinirTourOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o: Graphic/Listeners/JouerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o Graphic/Listeners/JouerOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/LancerLesDesOnClickListener.o: Graphic/Listeners/LancerLesDesOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/LancerLesDesOnClickListener.o Graphic/Listeners/LancerLesDesOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/NonPayerOnClickListener.o: Graphic/Listeners/NonPayerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/NonPayerOnClickListener.o Graphic/Listeners/NonPayerOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/OuiPayerOnClickListener.o: Graphic/Listeners/OuiPayerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/OuiPayerOnClickListener.o Graphic/Listeners/OuiPayerOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o: Graphic/Listeners/QuitterOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o Graphic/Listeners/QuitterOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/ResetBilletsOnClickListener.o: Graphic/Listeners/ResetBilletsOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/ResetBilletsOnClickListener.o Graphic/Listeners/ResetBilletsOnClickListener.cpp

${OBJECTDIR}/Graphic/Listeners/ValiderBilletsOnCLickListener.o: Graphic/Listeners/ValiderBilletsOnCLickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/ValiderBilletsOnCLickListener.o Graphic/Listeners/ValiderBilletsOnCLickListener.cpp

${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o: GraphicEngine/ActionListeners/ActionListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o GraphicEngine/ActionListeners/ActionListener.cpp

${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o: GraphicEngine/ActionListeners/ButtonMouseOutListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o GraphicEngine/ActionListeners/ButtonMouseOutListener.cpp

${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o: GraphicEngine/ActionListeners/ButtonMouseOverListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o GraphicEngine/ActionListeners/ButtonMouseOverListener.cpp

${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o: GraphicEngine/ActionListeners/SpinnerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o GraphicEngine/ActionListeners/SpinnerOnClickListener.cpp

${OBJECTDIR}/GraphicEngine/Constant.o: GraphicEngine/Constant.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/Constant.o GraphicEngine/Constant.cpp

${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o: GraphicEngine/EventHandler/EventHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o GraphicEngine/EventHandler/EventHandler.cpp

${OBJECTDIR}/GraphicEngine/EventHandler/KeyReleasedHandler.o: GraphicEngine/EventHandler/KeyReleasedHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/KeyReleasedHandler.o GraphicEngine/EventHandler/KeyReleasedHandler.cpp

${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o: GraphicEngine/EventHandler/MouseOutHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o GraphicEngine/EventHandler/MouseOutHandler.cpp

${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o: GraphicEngine/EventHandler/MouseOverHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o GraphicEngine/EventHandler/MouseOverHandler.cpp

${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o: GraphicEngine/EventHandler/OnClickHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o GraphicEngine/EventHandler/OnClickHandler.cpp

${OBJECTDIR}/GraphicEngine/GraphicEngine.o: GraphicEngine/GraphicEngine.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GraphicEngine.o GraphicEngine/GraphicEngine.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o: GraphicEngine/GuiManager/GuiItem/Button.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o GraphicEngine/GuiManager/GuiItem/Button.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o: GraphicEngine/GuiManager/GuiItem/GuiItem.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o GraphicEngine/GuiManager/GuiItem/GuiItem.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o: GraphicEngine/GuiManager/GuiItem/Image.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o GraphicEngine/GuiManager/GuiItem/Image.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o: GraphicEngine/GuiManager/GuiItem/Spinner.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o GraphicEngine/GuiManager/GuiItem/Spinner.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o: GraphicEngine/GuiManager/GuiItem/TextBlock.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o GraphicEngine/GuiManager/GuiItem/TextBlock.cpp

${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o: GraphicEngine/GuiManager/GuiManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o GraphicEngine/GuiManager/GuiManager.cpp

${OBJECTDIR}/GraphicEngine/Police.o: GraphicEngine/Police.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/Police.o GraphicEngine/Police.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/util.o: util.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/util.o util.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly: ${TESTDIR}/tests/BilletManagerTest.o ${TESTDIR}/tests/BilletManagerTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc}   -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly $^ ${LDLIBSOPTIONS} 

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly: ${TESTDIR}/tests/JoueurTest.o ${TESTDIR}/tests/JoueurTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc}   -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly $^ ${LDLIBSOPTIONS} 


${TESTDIR}/tests/BilletManagerTest.o: tests/BilletManagerTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/BilletManagerTest.o tests/BilletManagerTest.cpp


${TESTDIR}/tests/BilletManagerTestRunner.o: tests/BilletManagerTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/BilletManagerTestRunner.o tests/BilletManagerTestRunner.cpp


${TESTDIR}/tests/JoueurTest.o: tests/JoueurTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/JoueurTest.o tests/JoueurTest.cpp


${TESTDIR}/tests/JoueurTestRunner.o: tests/JoueurTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/JoueurTestRunner.o tests/JoueurTestRunner.cpp


${OBJECTDIR}/GameEngine/Billet/Billet_nomain.o: ${OBJECTDIR}/GameEngine/Billet/Billet.o GameEngine/Billet/Billet.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Billet
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Billet/Billet.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/Billet_nomain.o GameEngine/Billet/Billet.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Billet/Billet.o ${OBJECTDIR}/GameEngine/Billet/Billet_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Billet/BilletManager_nomain.o: ${OBJECTDIR}/GameEngine/Billet/BilletManager.o GameEngine/Billet/BilletManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Billet
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Billet/BilletManager.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/BilletManager_nomain.o GameEngine/Billet/BilletManager.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Billet/BilletManager.o ${OBJECTDIR}/GameEngine/Billet/BilletManager_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Arrestation_nomain.o: ${OBJECTDIR}/GameEngine/Case/Arrestation.o GameEngine/Case/Arrestation.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Arrestation.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Arrestation_nomain.o GameEngine/Case/Arrestation.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Arrestation.o ${OBJECTDIR}/GameEngine/Case/Arrestation_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Case_nomain.o: ${OBJECTDIR}/GameEngine/Case/Case.o GameEngine/Case/Case.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Case.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Case_nomain.o GameEngine/Case/Case.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Case.o ${OBJECTDIR}/GameEngine/Case/Case_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/CaseCarte_nomain.o: ${OBJECTDIR}/GameEngine/Case/CaseCarte.o GameEngine/Case/CaseCarte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/CaseCarte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/CaseCarte_nomain.o GameEngine/Case/CaseCarte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/CaseCarte.o ${OBJECTDIR}/GameEngine/Case/CaseCarte_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Depart_nomain.o: ${OBJECTDIR}/GameEngine/Case/Depart.o GameEngine/Case/Depart.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Depart.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Depart_nomain.o GameEngine/Case/Depart.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Depart.o ${OBJECTDIR}/GameEngine/Case/Depart_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Parc_nomain.o: ${OBJECTDIR}/GameEngine/Case/Parc.o GameEngine/Case/Parc.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Parc.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Parc_nomain.o GameEngine/Case/Parc.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Parc.o ${OBJECTDIR}/GameEngine/Case/Parc_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Prison_nomain.o: ${OBJECTDIR}/GameEngine/Case/Prison.o GameEngine/Case/Prison.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Prison.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Prison_nomain.o GameEngine/Case/Prison.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Prison.o ${OBJECTDIR}/GameEngine/Case/Prison_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/Domaine_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o GameEngine/Case/Propriété/Domaine.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine_nomain.o GameEngine/Case/Propriété/Domaine.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/Famille_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/Famille.o GameEngine/Case/Propriété/Famille.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/Famille.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Famille_nomain.o GameEngine/Case/Propriété/Famille.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/Famille.o ${OBJECTDIR}/GameEngine/Case/Propriété/Famille_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/Gare_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o GameEngine/Case/Propriété/Gare.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Gare_nomain.o GameEngine/Case/Propriété/Gare.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o ${OBJECTDIR}/GameEngine/Case/Propriété/Gare_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/Propriete_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o GameEngine/Case/Propriété/Propriete.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete_nomain.o GameEngine/Case/Propriété/Propriete.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o GameEngine/Case/Propriété/ServicePublique.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique_nomain.o GameEngine/Case/Propriété/ServicePublique.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Taxe_nomain.o: ${OBJECTDIR}/GameEngine/Case/Taxe.o GameEngine/Case/Taxe.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Taxe.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Taxe_nomain.o GameEngine/Case/Taxe.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Taxe.o ${OBJECTDIR}/GameEngine/Case/Taxe_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/De_nomain.o: ${OBJECTDIR}/GameEngine/De.o GameEngine/De.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/De.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/De_nomain.o GameEngine/De.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/De.o ${OBJECTDIR}/GameEngine/De_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Participant/Cagnotte_nomain.o: ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o GameEngine/Participant/Cagnotte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Cagnotte_nomain.o GameEngine/Participant/Cagnotte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o ${OBJECTDIR}/GameEngine/Participant/Cagnotte_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Participant/Joueur_nomain.o: ${OBJECTDIR}/GameEngine/Participant/Joueur.o GameEngine/Participant/Joueur.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Participant/Joueur.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Joueur_nomain.o GameEngine/Participant/Joueur.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Participant/Joueur.o ${OBJECTDIR}/GameEngine/Participant/Joueur_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Participant/Participant_nomain.o: ${OBJECTDIR}/GameEngine/Participant/Participant.o GameEngine/Participant/Participant.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Participant/Participant.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Participant_nomain.o GameEngine/Participant/Participant.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Participant/Participant.o ${OBJECTDIR}/GameEngine/Participant/Participant_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Plateau_nomain.o: ${OBJECTDIR}/GameEngine/Plateau.o GameEngine/Plateau.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Plateau.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Plateau_nomain.o GameEngine/Plateau.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Plateau.o ${OBJECTDIR}/GameEngine/Plateau_nomain.o;\
	fi

${OBJECTDIR}/Graphic/GuiItems/Appartenance_nomain.o: ${OBJECTDIR}/Graphic/GuiItems/Appartenance.o Graphic/GuiItems/Appartenance.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/GuiItems
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/GuiItems/Appartenance.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/GuiItems/Appartenance_nomain.o Graphic/GuiItems/Appartenance.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/GuiItems/Appartenance.o ${OBJECTDIR}/Graphic/GuiItems/Appartenance_nomain.o;\
	fi

${OBJECTDIR}/Graphic/GuiItems/Hotel_nomain.o: ${OBJECTDIR}/Graphic/GuiItems/Hotel.o Graphic/GuiItems/Hotel.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/GuiItems
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/GuiItems/Hotel.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/GuiItems/Hotel_nomain.o Graphic/GuiItems/Hotel.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/GuiItems/Hotel.o ${OBJECTDIR}/Graphic/GuiItems/Hotel_nomain.o;\
	fi

${OBJECTDIR}/Graphic/GuiItems/Maison_nomain.o: ${OBJECTDIR}/Graphic/GuiItems/Maison.o Graphic/GuiItems/Maison.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/GuiItems
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/GuiItems/Maison.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/GuiItems/Maison_nomain.o Graphic/GuiItems/Maison.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/GuiItems/Maison.o ${OBJECTDIR}/Graphic/GuiItems/Maison_nomain.o;\
	fi

${OBJECTDIR}/Graphic/GuiItems/Pion_nomain.o: ${OBJECTDIR}/Graphic/GuiItems/Pion.o Graphic/GuiItems/Pion.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/GuiItems
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/GuiItems/Pion.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/GuiItems/Pion_nomain.o Graphic/GuiItems/Pion.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/GuiItems/Pion.o ${OBJECTDIR}/Graphic/GuiItems/Pion_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Jeu_nomain.o: ${OBJECTDIR}/Graphic/Jeu.o Graphic/Jeu.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Jeu.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Jeu_nomain.o Graphic/Jeu.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Jeu.o ${OBJECTDIR}/Graphic/Jeu_nomain.o;\
	fi

${OBJECTDIR}/Graphic/JeuConstantes_nomain.o: ${OBJECTDIR}/Graphic/JeuConstantes.o Graphic/JeuConstantes.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/JeuConstantes.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/JeuConstantes_nomain.o Graphic/JeuConstantes.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/JeuConstantes.o ${OBJECTDIR}/Graphic/JeuConstantes_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/AppartenanceOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/AppartenanceOnClickListener.o Graphic/Listeners/AppartenanceOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/AppartenanceOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/AppartenanceOnClickListener_nomain.o Graphic/Listeners/AppartenanceOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/AppartenanceOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/AppartenanceOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/BilletOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/BilletOnClickListener.o Graphic/Listeners/BilletOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/BilletOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/BilletOnClickListener_nomain.o Graphic/Listeners/BilletOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/BilletOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/BilletOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o Graphic/Listeners/CommencerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener_nomain.o Graphic/Listeners/CommencerOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/CommencerOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/ConstruireOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/ConstruireOnClickListener.o Graphic/Listeners/ConstruireOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/ConstruireOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/ConstruireOnClickListener_nomain.o Graphic/Listeners/ConstruireOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/ConstruireOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/ConstruireOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/FaireMonnaieOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/FaireMonnaieOnClickListener.o Graphic/Listeners/FaireMonnaieOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/FaireMonnaieOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/FaireMonnaieOnClickListener_nomain.o Graphic/Listeners/FaireMonnaieOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/FaireMonnaieOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/FaireMonnaieOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/FinirTourKeyReleasedListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/FinirTourKeyReleasedListener.o Graphic/Listeners/FinirTourKeyReleasedListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/FinirTourKeyReleasedListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/FinirTourKeyReleasedListener_nomain.o Graphic/Listeners/FinirTourKeyReleasedListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/FinirTourKeyReleasedListener.o ${OBJECTDIR}/Graphic/Listeners/FinirTourKeyReleasedListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/FinirTourOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/FinirTourOnClickListener.o Graphic/Listeners/FinirTourOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/FinirTourOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/FinirTourOnClickListener_nomain.o Graphic/Listeners/FinirTourOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/FinirTourOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/FinirTourOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o Graphic/Listeners/JouerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener_nomain.o Graphic/Listeners/JouerOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/JouerOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/LancerLesDesOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/LancerLesDesOnClickListener.o Graphic/Listeners/LancerLesDesOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/LancerLesDesOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/LancerLesDesOnClickListener_nomain.o Graphic/Listeners/LancerLesDesOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/LancerLesDesOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/LancerLesDesOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/NonPayerOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/NonPayerOnClickListener.o Graphic/Listeners/NonPayerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/NonPayerOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/NonPayerOnClickListener_nomain.o Graphic/Listeners/NonPayerOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/NonPayerOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/NonPayerOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/OuiPayerOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/OuiPayerOnClickListener.o Graphic/Listeners/OuiPayerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/OuiPayerOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/OuiPayerOnClickListener_nomain.o Graphic/Listeners/OuiPayerOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/OuiPayerOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/OuiPayerOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o Graphic/Listeners/QuitterOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener_nomain.o Graphic/Listeners/QuitterOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/QuitterOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/ResetBilletsOnClickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/ResetBilletsOnClickListener.o Graphic/Listeners/ResetBilletsOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/ResetBilletsOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/ResetBilletsOnClickListener_nomain.o Graphic/Listeners/ResetBilletsOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/ResetBilletsOnClickListener.o ${OBJECTDIR}/Graphic/Listeners/ResetBilletsOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/Graphic/Listeners/ValiderBilletsOnCLickListener_nomain.o: ${OBJECTDIR}/Graphic/Listeners/ValiderBilletsOnCLickListener.o Graphic/Listeners/ValiderBilletsOnCLickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/Graphic/Listeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Graphic/Listeners/ValiderBilletsOnCLickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Graphic/Listeners/ValiderBilletsOnCLickListener_nomain.o Graphic/Listeners/ValiderBilletsOnCLickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Graphic/Listeners/ValiderBilletsOnCLickListener.o ${OBJECTDIR}/Graphic/Listeners/ValiderBilletsOnCLickListener_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener_nomain.o: ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o GraphicEngine/ActionListeners/ActionListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener_nomain.o GraphicEngine/ActionListeners/ActionListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener.o ${OBJECTDIR}/GraphicEngine/ActionListeners/ActionListener_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener_nomain.o: ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o GraphicEngine/ActionListeners/ButtonMouseOutListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener_nomain.o GraphicEngine/ActionListeners/ButtonMouseOutListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener.o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOutListener_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener_nomain.o: ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o GraphicEngine/ActionListeners/ButtonMouseOverListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener_nomain.o GraphicEngine/ActionListeners/ButtonMouseOverListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener.o ${OBJECTDIR}/GraphicEngine/ActionListeners/ButtonMouseOverListener_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener_nomain.o: ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o GraphicEngine/ActionListeners/SpinnerOnClickListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/ActionListeners
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener_nomain.o GraphicEngine/ActionListeners/SpinnerOnClickListener.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener.o ${OBJECTDIR}/GraphicEngine/ActionListeners/SpinnerOnClickListener_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/Constant_nomain.o: ${OBJECTDIR}/GraphicEngine/Constant.o GraphicEngine/Constant.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/Constant.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/Constant_nomain.o GraphicEngine/Constant.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/Constant.o ${OBJECTDIR}/GraphicEngine/Constant_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler_nomain.o: ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o GraphicEngine/EventHandler/EventHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler_nomain.o GraphicEngine/EventHandler/EventHandler.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler.o ${OBJECTDIR}/GraphicEngine/EventHandler/EventHandler_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/EventHandler/KeyReleasedHandler_nomain.o: ${OBJECTDIR}/GraphicEngine/EventHandler/KeyReleasedHandler.o GraphicEngine/EventHandler/KeyReleasedHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/EventHandler/KeyReleasedHandler.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/KeyReleasedHandler_nomain.o GraphicEngine/EventHandler/KeyReleasedHandler.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/EventHandler/KeyReleasedHandler.o ${OBJECTDIR}/GraphicEngine/EventHandler/KeyReleasedHandler_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler_nomain.o: ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o GraphicEngine/EventHandler/MouseOutHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler_nomain.o GraphicEngine/EventHandler/MouseOutHandler.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler.o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOutHandler_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler_nomain.o: ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o GraphicEngine/EventHandler/MouseOverHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler_nomain.o GraphicEngine/EventHandler/MouseOverHandler.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler.o ${OBJECTDIR}/GraphicEngine/EventHandler/MouseOverHandler_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler_nomain.o: ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o GraphicEngine/EventHandler/OnClickHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/EventHandler
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler_nomain.o GraphicEngine/EventHandler/OnClickHandler.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler.o ${OBJECTDIR}/GraphicEngine/EventHandler/OnClickHandler_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GraphicEngine_nomain.o: ${OBJECTDIR}/GraphicEngine/GraphicEngine.o GraphicEngine/GraphicEngine.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GraphicEngine.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GraphicEngine_nomain.o GraphicEngine/GraphicEngine.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GraphicEngine.o ${OBJECTDIR}/GraphicEngine/GraphicEngine_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o GraphicEngine/GuiManager/GuiItem/Button.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button_nomain.o GraphicEngine/GuiManager/GuiItem/Button.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Button_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o GraphicEngine/GuiManager/GuiItem/GuiItem.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem_nomain.o GraphicEngine/GuiManager/GuiItem/GuiItem.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/GuiItem_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o GraphicEngine/GuiManager/GuiItem/Image.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image_nomain.o GraphicEngine/GuiManager/GuiItem/Image.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Image_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o GraphicEngine/GuiManager/GuiItem/Spinner.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner_nomain.o GraphicEngine/GuiManager/GuiItem/Spinner.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/Spinner_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o GraphicEngine/GuiManager/GuiItem/TextBlock.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock_nomain.o GraphicEngine/GuiManager/GuiItem/TextBlock.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiItem/TextBlock_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager_nomain.o: ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o GraphicEngine/GuiManager/GuiManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine/GuiManager
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager_nomain.o GraphicEngine/GuiManager/GuiManager.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager.o ${OBJECTDIR}/GraphicEngine/GuiManager/GuiManager_nomain.o;\
	fi

${OBJECTDIR}/GraphicEngine/Police_nomain.o: ${OBJECTDIR}/GraphicEngine/Police.o GraphicEngine/Police.cpp 
	${MKDIR} -p ${OBJECTDIR}/GraphicEngine
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GraphicEngine/Police.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GraphicEngine/Police_nomain.o GraphicEngine/Police.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GraphicEngine/Police.o ${OBJECTDIR}/GraphicEngine/Police_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

${OBJECTDIR}/util_nomain.o: ${OBJECTDIR}/util.o util.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/util.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/util_nomain.o util.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/util.o ${OBJECTDIR}/util_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly || true; \
	    ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
