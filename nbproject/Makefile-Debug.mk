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
	${OBJECTDIR}/GameEngine/Case/Parc.o \
	${OBJECTDIR}/GameEngine/Participant/Participant.o \
	${OBJECTDIR}/GameEngine/Case/Prison.o \
	${OBJECTDIR}/GameEngine/De.o \
	${OBJECTDIR}/GameEngine/Participant/Banque.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/GameEngine/Participant/Joueur.o \
	${OBJECTDIR}/GameEngine/Carte/Carte.o \
	${OBJECTDIR}/GameEngine/Plateau.o \
	${OBJECTDIR}/GameEngine/Case/Taxe.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o \
	${OBJECTDIR}/GameEngine/Billet/BilletManager.o \
	${OBJECTDIR}/GameEngine/Case/Arrestation.o \
	${OBJECTDIR}/GameEngine/Billet/Billet.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o \
	${OBJECTDIR}/GameEngine/Case/Depart.o \
	${OBJECTDIR}/GameEngine/Case/Case.o \
	${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o \
	${OBJECTDIR}/GameEngine/Carte/TypeCarte.o \
	${OBJECTDIR}/GameEngine/Participant/Cagnotte.o

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
LDLIBSOPTIONS=-lcppunit -lcppunit -lcppunit -lcppunit

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${TESTDIR}/TestFiles/f1

${TESTDIR}/TestFiles/f1: ${OBJECTFILES}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f1 ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/GameEngine/Case/Carte.o: GameEngine/Case/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Carte.o GameEngine/Case/Carte.cpp

${OBJECTDIR}/GameEngine/Case/Parc.o: GameEngine/Case/Parc.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Parc.o GameEngine/Case/Parc.cpp

${OBJECTDIR}/GameEngine/Participant/Participant.o: GameEngine/Participant/Participant.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Participant.o GameEngine/Participant/Participant.cpp

${OBJECTDIR}/GameEngine/Case/Prison.o: GameEngine/Case/Prison.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Prison.o GameEngine/Case/Prison.cpp

${OBJECTDIR}/GameEngine/De.o: GameEngine/De.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/De.o GameEngine/De.cpp

${OBJECTDIR}/GameEngine/Participant/Banque.o: GameEngine/Participant/Banque.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Banque.o GameEngine/Participant/Banque.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o: GameEngine/Case/Propriété/Domaine.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o GameEngine/Case/Propriété/Domaine.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/GameEngine/Participant/Joueur.o: GameEngine/Participant/Joueur.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Joueur.o GameEngine/Participant/Joueur.cpp

${OBJECTDIR}/GameEngine/Carte/Carte.o: GameEngine/Carte/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Carte
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Carte/Carte.o GameEngine/Carte/Carte.cpp

${OBJECTDIR}/GameEngine/Plateau.o: GameEngine/Plateau.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Plateau.o GameEngine/Plateau.cpp

${OBJECTDIR}/GameEngine/Case/Taxe.o: GameEngine/Case/Taxe.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Taxe.o GameEngine/Case/Taxe.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o: GameEngine/Case/Propriété/Propriete.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o GameEngine/Case/Propriété/Propriete.cpp

${OBJECTDIR}/GameEngine/Billet/BilletManager.o: GameEngine/Billet/BilletManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Billet
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/BilletManager.o GameEngine/Billet/BilletManager.cpp

${OBJECTDIR}/GameEngine/Case/Arrestation.o: GameEngine/Case/Arrestation.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Arrestation.o GameEngine/Case/Arrestation.cpp

${OBJECTDIR}/GameEngine/Billet/Billet.o: GameEngine/Billet/Billet.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Billet
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/Billet.o GameEngine/Billet/Billet.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o: GameEngine/Case/Propriété/ServicePublique.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o GameEngine/Case/Propriété/ServicePublique.cpp

${OBJECTDIR}/GameEngine/Case/Depart.o: GameEngine/Case/Depart.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Depart.o GameEngine/Case/Depart.cpp

${OBJECTDIR}/GameEngine/Case/Case.o: GameEngine/Case/Case.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Case.o GameEngine/Case/Case.cpp

${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o: GameEngine/Case/Propriété/Gare.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o GameEngine/Case/Propriété/Gare.cpp

${OBJECTDIR}/GameEngine/Carte/TypeCarte.o: GameEngine/Carte/TypeCarte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Carte
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Carte/TypeCarte.o GameEngine/Carte/TypeCarte.cpp

${OBJECTDIR}/GameEngine/Participant/Cagnotte.o: GameEngine/Participant/Cagnotte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o GameEngine/Participant/Cagnotte.cpp

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
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${TESTDIR}/tests/BilletManagerTest.o tests/BilletManagerTest.cpp


${TESTDIR}/tests/BilletManagerTestRunner.o: tests/BilletManagerTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${TESTDIR}/tests/BilletManagerTestRunner.o tests/BilletManagerTestRunner.cpp


${TESTDIR}/tests/JoueurTest.o: tests/JoueurTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${TESTDIR}/tests/JoueurTest.o tests/JoueurTest.cpp


${TESTDIR}/tests/JoueurTestRunner.o: tests/JoueurTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -g -I. -I. -I. -I. -I. -I. -MMD -MP -MF $@.d -o ${TESTDIR}/tests/JoueurTestRunner.o tests/JoueurTestRunner.cpp


${OBJECTDIR}/GameEngine/Case/Carte_nomain.o: ${OBJECTDIR}/GameEngine/Case/Carte.o GameEngine/Case/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Carte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Carte_nomain.o GameEngine/Case/Carte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Carte.o ${OBJECTDIR}/GameEngine/Case/Carte_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Parc_nomain.o: ${OBJECTDIR}/GameEngine/Case/Parc.o GameEngine/Case/Parc.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Parc.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Parc_nomain.o GameEngine/Case/Parc.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Parc.o ${OBJECTDIR}/GameEngine/Case/Parc_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Participant/Participant_nomain.o: ${OBJECTDIR}/GameEngine/Participant/Participant.o GameEngine/Participant/Participant.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Participant/Participant.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Participant_nomain.o GameEngine/Participant/Participant.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Participant/Participant.o ${OBJECTDIR}/GameEngine/Participant/Participant_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Prison_nomain.o: ${OBJECTDIR}/GameEngine/Case/Prison.o GameEngine/Case/Prison.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Prison.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Prison_nomain.o GameEngine/Case/Prison.cpp;\
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
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/De_nomain.o GameEngine/De.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/De.o ${OBJECTDIR}/GameEngine/De_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Participant/Banque_nomain.o: ${OBJECTDIR}/GameEngine/Participant/Banque.o GameEngine/Participant/Banque.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Participant/Banque.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Banque_nomain.o GameEngine/Participant/Banque.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Participant/Banque.o ${OBJECTDIR}/GameEngine/Participant/Banque_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/Domaine_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o GameEngine/Case/Propriété/Domaine.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine_nomain.o GameEngine/Case/Propriété/Domaine.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine.o ${OBJECTDIR}/GameEngine/Case/Propriété/Domaine_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Participant/Joueur_nomain.o: ${OBJECTDIR}/GameEngine/Participant/Joueur.o GameEngine/Participant/Joueur.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Participant/Joueur.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Joueur_nomain.o GameEngine/Participant/Joueur.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Participant/Joueur.o ${OBJECTDIR}/GameEngine/Participant/Joueur_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Carte/Carte_nomain.o: ${OBJECTDIR}/GameEngine/Carte/Carte.o GameEngine/Carte/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Carte
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Carte/Carte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Carte/Carte_nomain.o GameEngine/Carte/Carte.cpp;\
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
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Plateau_nomain.o GameEngine/Plateau.cpp;\
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
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Taxe_nomain.o GameEngine/Case/Taxe.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Taxe.o ${OBJECTDIR}/GameEngine/Case/Taxe_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/Propriete_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o GameEngine/Case/Propriété/Propriete.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete_nomain.o GameEngine/Case/Propriété/Propriete.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete.o ${OBJECTDIR}/GameEngine/Case/Propriété/Propriete_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Billet/BilletManager_nomain.o: ${OBJECTDIR}/GameEngine/Billet/BilletManager.o GameEngine/Billet/BilletManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Billet
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Billet/BilletManager.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/BilletManager_nomain.o GameEngine/Billet/BilletManager.cpp;\
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
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Arrestation_nomain.o GameEngine/Case/Arrestation.cpp;\
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
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Billet/Billet_nomain.o GameEngine/Billet/Billet.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Billet/Billet.o ${OBJECTDIR}/GameEngine/Billet/Billet_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique_nomain.o: ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o GameEngine/Case/Propriété/ServicePublique.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/ServicePublique_nomain.o GameEngine/Case/Propriété/ServicePublique.cpp;\
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
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Depart_nomain.o GameEngine/Case/Depart.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Depart.o ${OBJECTDIR}/GameEngine/Case/Depart_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Case/Case_nomain.o: ${OBJECTDIR}/GameEngine/Case/Case.o GameEngine/Case/Case.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Case/Case.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Case_nomain.o GameEngine/Case/Case.cpp;\
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
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Case/Propriété/Gare_nomain.o GameEngine/Case/Propriété/Gare.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Case/Propriété/Gare.o ${OBJECTDIR}/GameEngine/Case/Propriété/Gare_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Carte/TypeCarte_nomain.o: ${OBJECTDIR}/GameEngine/Carte/TypeCarte.o GameEngine/Carte/TypeCarte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Carte
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Carte/TypeCarte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Carte/TypeCarte_nomain.o GameEngine/Carte/TypeCarte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Carte/TypeCarte.o ${OBJECTDIR}/GameEngine/Carte/TypeCarte_nomain.o;\
	fi

${OBJECTDIR}/GameEngine/Participant/Cagnotte_nomain.o: ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o GameEngine/Participant/Cagnotte.cpp 
	${MKDIR} -p ${OBJECTDIR}/GameEngine/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -g -I. -I. -I. -I. -I. -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/GameEngine/Participant/Cagnotte_nomain.o GameEngine/Participant/Cagnotte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GameEngine/Participant/Cagnotte.o ${OBJECTDIR}/GameEngine/Participant/Cagnotte_nomain.o;\
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
