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
	${OBJECTDIR}/Case/Parc.o \
	${OBJECTDIR}/Participant/Joueur.o \
	${OBJECTDIR}/Participant/Cagnotte.o


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
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Depart.o Case/Depart.cpp

${OBJECTDIR}/Case/Propriété/ServicePublique.o: Case/Propriété/ServicePublique.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/ServicePublique.o Case/Propriété/ServicePublique.cpp

${OBJECTDIR}/Participant/Participant.o: Participant/Participant.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Participant.o Participant/Participant.cpp

${OBJECTDIR}/Billet.o: Billet.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Billet.o Billet.cpp

${OBJECTDIR}/Case/Taxe.o: Case/Taxe.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Taxe.o Case/Taxe.cpp

${OBJECTDIR}/Participant/Banque.o: Participant/Banque.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Banque.o Participant/Banque.cpp

${OBJECTDIR}/Plateau.o: Plateau.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Plateau.o Plateau.cpp

${OBJECTDIR}/De.o: De.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/De.o De.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/Carte/Carte.o: Carte/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Carte
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Carte/Carte.o Carte/Carte.cpp

${OBJECTDIR}/Case/Arrestation.o: Case/Arrestation.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Arrestation.o Case/Arrestation.cpp

${OBJECTDIR}/Case/Propriété/Gare.o: Case/Propriété/Gare.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/Gare.o Case/Propriété/Gare.cpp

${OBJECTDIR}/Carte/TypeCarte.o: Carte/TypeCarte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Carte
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Carte/TypeCarte.o Carte/TypeCarte.cpp

${OBJECTDIR}/Case/Propriété/Propriete.o: Case/Propriété/Propriete.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/Propriete.o Case/Propriété/Propriete.cpp

${OBJECTDIR}/Case/Carte.o: Case/Carte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Carte.o Case/Carte.cpp

${OBJECTDIR}/Case/Prison.o: Case/Prison.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Prison.o Case/Prison.cpp

${OBJECTDIR}/Case/Case.o: Case/Case.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Case.o Case/Case.cpp

${OBJECTDIR}/Case/Propriété/Domaine.o: Case/Propriété/Domaine.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case/Propriété
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Propriété/Domaine.o Case/Propriété/Domaine.cpp

${OBJECTDIR}/Case/Parc.o: Case/Parc.cpp 
	${MKDIR} -p ${OBJECTDIR}/Case
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Case/Parc.o Case/Parc.cpp

${OBJECTDIR}/Participant/Joueur.o: Participant/Joueur.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Joueur.o Participant/Joueur.cpp

${OBJECTDIR}/Participant/Cagnotte.o: Participant/Cagnotte.cpp 
	${MKDIR} -p ${OBJECTDIR}/Participant
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Participant/Cagnotte.o Participant/Cagnotte.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/monopoly

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
