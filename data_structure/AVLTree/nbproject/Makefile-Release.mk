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
CND_PLATFORM=GNU-Linux
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
	${OBJECTDIR}/_ext/9f3d0cd6/BSTree.o \
	${OBJECTDIR}/_ext/354c271e/NodeBase.o \
	${OBJECTDIR}/_ext/354c271e/TreeBase.o \
	${OBJECTDIR}/AVLNode.o \
	${OBJECTDIR}/AVLTree.o \
	${OBJECTDIR}/main.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/avltree

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/avltree: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/avltree ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/9f3d0cd6/BSTree.o: ../BinarySearchTree/BSTree.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/9f3d0cd6
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/9f3d0cd6/BSTree.o ../BinarySearchTree/BSTree.cpp

${OBJECTDIR}/_ext/354c271e/NodeBase.o: ../TreeBase/NodeBase.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/354c271e
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/354c271e/NodeBase.o ../TreeBase/NodeBase.cpp

${OBJECTDIR}/_ext/354c271e/TreeBase.o: ../TreeBase/TreeBase.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/354c271e
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/354c271e/TreeBase.o ../TreeBase/TreeBase.cpp

${OBJECTDIR}/AVLNode.o: AVLNode.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AVLNode.o AVLNode.cpp

${OBJECTDIR}/AVLTree.o: AVLTree.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AVLTree.o AVLTree.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
