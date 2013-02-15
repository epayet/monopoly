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
	${OBJECTDIR}/Case/Depart.o \
	${OBJECTDIR}/Case/Propriété/ServicePublique.o \
	${OBJECTDIR}/Participant/Participant.o \
	${OBJECTDIR}/Billet.o \
	${OBJECTDIR}/Case/Taxe.o \
	${OBJECTDIR}/Participant/Banque.o \
	${OBJECTDIR}/Plateau.o \
	${OBJECTDIR}/De.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/Carte/Carte.o \
	${OBJECTDIR}/Case/Arrestation.o \
	${OBJECTDIR}/Case/Propriété/Gare.o \
	${OBJECTDIR}/Carte/TypeCarte.o \
	${OBJECTDIR}/Case/Propriété/Propriete.o \
	${OBJECTDIR}/Case/Carte.o \
	${OBJECTDIR}/Case/Prison.o \
	${OBJECTDIR}/Case/Case.o \
	${OBJECTDIR}/Case/Propriété/Domaine.o \
	${OBJECTDIR}/Billet/BilletManager.o \
	${OBJECTDIR}/Case/Parc.o \
	${OBJECTDIR}/Participant/Joueur.o \
	${OBJECTDIR}/Participant/Cagnotte.o

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

${OBJECTDIR}/Case/Depart.o: Case/Depart.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Depart.o Case/Depart.cpp

${OBJECTDIR}/Case/Propriété/ServicePublique.o: Case/Propriété/ServicePublique.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/ServicePublique.o Case/Propriété/ServicePublique.cpp

${OBJECTDIR}/Participant/Participant.o: Participant/Participant.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Participant.o Participant/Participant.cpp

${OBJECTDIR}/Billet.o: Billet.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Billet.o Billet.cpp

${OBJECTDIR}/Case/Taxe.o: Case/Taxe.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Taxe.o Case/Taxe.cpp

${OBJECTDIR}/Participant/Banque.o: Participant/Banque.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Banque.o Participant/Banque.cpp

${OBJECTDIR}/Plateau.o: Plateau.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Plateau.o Plateau.cpp

${OBJECTDIR}/De.o: De.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/De.o De.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/Carte/Carte.o: Carte/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Carte
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Carte/Carte.o Carte/Carte.cpp

${OBJECTDIR}/Case/Arrestation.o: Case/Arrestation.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Arrestation.o Case/Arrestation.cpp

${OBJECTDIR}/Case/Propriété/Gare.o: Case/Propriété/Gare.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/Gare.o Case/Propriété/Gare.cpp

${OBJECTDIR}/Carte/TypeCarte.o: Carte/TypeCarte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Carte
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Carte/TypeCarte.o Carte/TypeCarte.cpp

${OBJECTDIR}/Case/Propriété/Propriete.o: Case/Propriété/Propriete.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/Propriete.o Case/Propriété/Propriete.cpp

${OBJECTDIR}/Case/Carte.o: Case/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Carte.o Case/Carte.cpp

${OBJECTDIR}/Case/Prison.o: Case/Prison.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Prison.o Case/Prison.cpp

${OBJECTDIR}/Case/Case.o: Case/Case.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Case.o Case/Case.cpp

${OBJECTDIR}/Case/Propriété/Domaine.o: Case/Propriété/Domaine.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/Domaine.o Case/Propriété/Domaine.cpp

${OBJECTDIR}/Billet/BilletManager.o: Billet/BilletManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/Billet
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Billet/BilletManager.o Billet/BilletManager.cpp

${OBJECTDIR}/Case/Parc.o: Case/Parc.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Parc.o Case/Parc.cpp

${OBJECTDIR}/Participant/Joueur.o: Participant/Joueur.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Joueur.o Participant/Joueur.cpp

${OBJECTDIR}/Participant/Cagnotte.o: Participant/Cagnotte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Cagnotte.o Participant/Cagnotte.cpp

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


${OBJECTDIR}/Case/Depart_nomain.o: ${OBJECTDIR}/Case/Depart.o Case/Depart.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Case/Depart.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Depart_nomain.o Case/Depart.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Case/Depart.o ${OBJECTDIR}/Case/Depart_nomain.o;\
	fi

${OBJECTDIR}/Case/Propriété/ServicePublique_nomain.o: ${OBJECTDIR}/Case/Propriété/ServicePublique.o Case/Propriété/ServicePublique.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Case/Propriété/ServicePublique.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/ServicePublique_nomain.o Case/Propriété/ServicePublique.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Case/Propriété/ServicePublique.o ${OBJECTDIR}/Case/Propriété/ServicePublique_nomain.o;\
	fi

${OBJECTDIR}/Participant/Participant_nomain.o: ${OBJECTDIR}/Participant/Participant.o Participant/Participant.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Participant/Participant.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Participant_nomain.o Participant/Participant.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Participant/Participant.o ${OBJECTDIR}/Participant/Participant_nomain.o;\
	fi

${OBJECTDIR}/Billet_nomain.o: ${OBJECTDIR}/Billet.o Billet.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Billet.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Billet_nomain.o Billet.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Billet.o ${OBJECTDIR}/Billet_nomain.o;\
	fi

${OBJECTDIR}/Case/Taxe_nomain.o: ${OBJECTDIR}/Case/Taxe.o Case/Taxe.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Case/Taxe.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Taxe_nomain.o Case/Taxe.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Case/Taxe.o ${OBJECTDIR}/Case/Taxe_nomain.o;\
	fi

${OBJECTDIR}/Participant/Banque_nomain.o: ${OBJECTDIR}/Participant/Banque.o Participant/Banque.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Participant/Banque.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Banque_nomain.o Participant/Banque.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Participant/Banque.o ${OBJECTDIR}/Participant/Banque_nomain.o;\
	fi

${OBJECTDIR}/Plateau_nomain.o: ${OBJECTDIR}/Plateau.o Plateau.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Plateau.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Plateau_nomain.o Plateau.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Plateau.o ${OBJECTDIR}/Plateau_nomain.o;\
	fi

${OBJECTDIR}/De_nomain.o: ${OBJECTDIR}/De.o De.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/De.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/De_nomain.o De.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/De.o ${OBJECTDIR}/De_nomain.o;\
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

${OBJECTDIR}/Carte/Carte_nomain.o: ${OBJECTDIR}/Carte/Carte.o Carte/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Carte
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Carte/Carte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Carte/Carte_nomain.o Carte/Carte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Carte/Carte.o ${OBJECTDIR}/Carte/Carte_nomain.o;\
	fi

${OBJECTDIR}/Case/Arrestation_nomain.o: ${OBJECTDIR}/Case/Arrestation.o Case/Arrestation.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Case/Arrestation.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Arrestation_nomain.o Case/Arrestation.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Case/Arrestation.o ${OBJECTDIR}/Case/Arrestation_nomain.o;\
	fi

${OBJECTDIR}/Case/Propriété/Gare_nomain.o: ${OBJECTDIR}/Case/Propriété/Gare.o Case/Propriété/Gare.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Case/Propriété/Gare.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/Gare_nomain.o Case/Propriété/Gare.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Case/Propriété/Gare.o ${OBJECTDIR}/Case/Propriété/Gare_nomain.o;\
	fi

${OBJECTDIR}/Carte/TypeCarte_nomain.o: ${OBJECTDIR}/Carte/TypeCarte.o Carte/TypeCarte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Carte
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Carte/TypeCarte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Carte/TypeCarte_nomain.o Carte/TypeCarte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Carte/TypeCarte.o ${OBJECTDIR}/Carte/TypeCarte_nomain.o;\
	fi

${OBJECTDIR}/Case/Propriété/Propriete_nomain.o: ${OBJECTDIR}/Case/Propriété/Propriete.o Case/Propriété/Propriete.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Case/Propriété/Propriete.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/Propriete_nomain.o Case/Propriété/Propriete.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Case/Propriété/Propriete.o ${OBJECTDIR}/Case/Propriété/Propriete_nomain.o;\
	fi

${OBJECTDIR}/Case/Carte_nomain.o: ${OBJECTDIR}/Case/Carte.o Case/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Case/Carte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Carte_nomain.o Case/Carte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Case/Carte.o ${OBJECTDIR}/Case/Carte_nomain.o;\
	fi

${OBJECTDIR}/Case/Prison_nomain.o: ${OBJECTDIR}/Case/Prison.o Case/Prison.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Case/Prison.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Prison_nomain.o Case/Prison.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Case/Prison.o ${OBJECTDIR}/Case/Prison_nomain.o;\
	fi

${OBJECTDIR}/Case/Case_nomain.o: ${OBJECTDIR}/Case/Case.o Case/Case.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Case/Case.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Case_nomain.o Case/Case.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Case/Case.o ${OBJECTDIR}/Case/Case_nomain.o;\
	fi

${OBJECTDIR}/Case/Propriété/Domaine_nomain.o: ${OBJECTDIR}/Case/Propriété/Domaine.o Case/Propriété/Domaine.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Case/Propriété/Domaine.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/Domaine_nomain.o Case/Propriété/Domaine.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Case/Propriété/Domaine.o ${OBJECTDIR}/Case/Propriété/Domaine_nomain.o;\
	fi

${OBJECTDIR}/Billet/BilletManager_nomain.o: ${OBJECTDIR}/Billet/BilletManager.o Billet/BilletManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/Billet
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Billet/BilletManager.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Billet/BilletManager_nomain.o Billet/BilletManager.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Billet/BilletManager.o ${OBJECTDIR}/Billet/BilletManager_nomain.o;\
	fi

${OBJECTDIR}/Case/Parc_nomain.o: ${OBJECTDIR}/Case/Parc.o Case/Parc.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Case/Parc.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Parc_nomain.o Case/Parc.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Case/Parc.o ${OBJECTDIR}/Case/Parc_nomain.o;\
	fi

${OBJECTDIR}/Participant/Joueur_nomain.o: ${OBJECTDIR}/Participant/Joueur.o Participant/Joueur.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Participant/Joueur.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Joueur_nomain.o Participant/Joueur.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Participant/Joueur.o ${OBJECTDIR}/Participant/Joueur_nomain.o;\
	fi

${OBJECTDIR}/Participant/Cagnotte_nomain.o: ${OBJECTDIR}/Participant/Cagnotte.o Participant/Cagnotte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Participant/Cagnotte.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Cagnotte_nomain.o Participant/Cagnotte.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Participant/Cagnotte.o ${OBJECTDIR}/Participant/Cagnotte_nomain.o;\
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
