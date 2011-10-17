#############################################################################
# Makefile for building: TicTacToe.app/Contents/MacOS/TicTacToe
# Generated by qmake (2.01a) (Qt 4.7.4) on: Sun Oct 16 16:21:12 2011
# Project:  TicTacToe.pro
# Template: app
# Command: /Users/samuel/QtSDK/Desktop/Qt/474/gcc/bin/qmake -spec /Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/macx-g++ -o Makefile TicTacToe.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -g -gdwarf-2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -g -gdwarf-2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W $(DEFINES)
INCPATH       = -I/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/macx-g++ -I. -I/Users/samuel/QtSDK/Desktop/Qt/474/gcc/lib/QtCore.framework/Versions/4/Headers -I/Users/samuel/QtSDK/Desktop/Qt/474/gcc/include/QtCore -I/Users/samuel/QtSDK/Desktop/Qt/474/gcc/lib/QtGui.framework/Versions/4/Headers -I/Users/samuel/QtSDK/Desktop/Qt/474/gcc/include/QtGui -I/Users/samuel/QtSDK/Desktop/Qt/474/gcc/include -I. -I. -F/Users/samuel/QtSDK/Desktop/Qt/474/gcc/lib
LINK          = g++
LFLAGS        = -headerpad_max_install_names -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5
LIBS          = $(SUBLIBS) -F/Users/samuel/QtSDK/Desktop/Qt/474/gcc/lib -L/Users/samuel/QtSDK/Desktop/Qt/474/gcc/lib -framework QtGui -framework QtCore 
AR            = ar cq
RANLIB        = ranlib -s
QMAKE         = /Users/samuel/QtSDK/Desktop/Qt/474/gcc/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
STRIP         = 
INSTALL_FILE  = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = $(COPY_FILE)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
export MACOSX_DEPLOYMENT_TARGET = 10.4

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = mainwindow.cpp \
		main.cpp \
		gamegrid.cpp \
		customgridview.cpp \
		customgraphicsview.cpp \
		controller.cpp \
		aicontroller.cpp \
		rulesengine.cpp \
		playerbutton.cpp \
		player.cpp \
		neuralnetwork.cpp moc_mainwindow.cpp \
		moc_customgridview.cpp \
		moc_customgraphicsview.cpp \
		moc_playerbutton.cpp
OBJECTS       = mainwindow.o \
		main.o \
		gamegrid.o \
		customgridview.o \
		customgraphicsview.o \
		controller.o \
		aicontroller.o \
		rulesengine.o \
		playerbutton.o \
		player.o \
		neuralnetwork.o \
		moc_mainwindow.o \
		moc_customgridview.o \
		moc_customgraphicsview.o \
		moc_playerbutton.o
DIST          = /Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/common/unix.conf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/common/mac.conf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/common/mac-g++.conf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/qconfig.pri \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/modules/qt_webkit_version.pri \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/qt_functions.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/qt_config.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/exclusive_builds.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/default_pre.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/default_pre.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/dwarf2.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/debug.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/default_post.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/default_post.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/x86_64.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/objective_c.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/warn_on.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/qt.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/unix/thread.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/moc.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/rez.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/sdk.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/resources.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/uic.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/yacc.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/lex.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/include_source_dir.prf \
		TicTacToe.pro
QMAKE_TARGET  = TicTacToe
DESTDIR       = 
TARGET        = TicTacToe.app/Contents/MacOS/TicTacToe

####### Custom Compiler Variables
QMAKE_COMP_QMAKE_OBJECTIVE_CFLAGS = -pipe \
		-g \
		-gdwarf-2 \
		-arch \
		x86_64 \
		-Xarch_x86_64 \
		-mmacosx-version-min=10.5 \
		-Wall \
		-W


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile TicTacToe.app/Contents/PkgInfo TicTacToe.app/Contents/Resources/empty.lproj TicTacToe.app/Contents/Info.plist $(TARGET)

$(TARGET): ui_mainwindow.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) TicTacToe.app/Contents/MacOS/ || $(MKDIR) TicTacToe.app/Contents/MacOS/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: TicTacToe.pro  /Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/macx-g++/qmake.conf /Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/common/unix.conf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/common/mac.conf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/common/mac-g++.conf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/qconfig.pri \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/modules/qt_webkit_version.pri \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/qt_functions.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/qt_config.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/exclusive_builds.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/default_pre.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/default_pre.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/dwarf2.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/debug.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/default_post.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/default_post.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/x86_64.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/objective_c.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/warn_on.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/qt.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/unix/thread.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/moc.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/rez.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/sdk.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/resources.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/uic.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/yacc.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/lex.prf \
		/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/include_source_dir.prf
	$(QMAKE) -spec /Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/macx-g++ -o Makefile TicTacToe.pro
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/common/unix.conf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/common/mac.conf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/common/mac-g++.conf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/qconfig.pri:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/modules/qt_webkit_version.pri:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/qt_functions.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/qt_config.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/exclusive_builds.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/default_pre.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/default_pre.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/dwarf2.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/debug.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/default_post.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/default_post.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/x86_64.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/objective_c.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/warn_on.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/qt.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/unix/thread.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/moc.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/rez.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/mac/sdk.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/resources.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/uic.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/yacc.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/lex.prf:
/Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/features/include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) -spec /Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/macx-g++ -o Makefile TicTacToe.pro

TicTacToe.app/Contents/PkgInfo: 
	@$(CHK_DIR_EXISTS) TicTacToe.app/Contents || $(MKDIR) TicTacToe.app/Contents 
	@$(DEL_FILE) TicTacToe.app/Contents/PkgInfo
	@echo "APPL????" >TicTacToe.app/Contents/PkgInfo
TicTacToe.app/Contents/Resources/empty.lproj: 
	@$(CHK_DIR_EXISTS) TicTacToe.app/Contents/Resources || $(MKDIR) TicTacToe.app/Contents/Resources 
	@touch TicTacToe.app/Contents/Resources/empty.lproj
	
TicTacToe.app/Contents/Info.plist: 
	@$(CHK_DIR_EXISTS) TicTacToe.app/Contents || $(MKDIR) TicTacToe.app/Contents 
	@$(DEL_FILE) TicTacToe.app/Contents/Info.plist
	@sed -e "s,@ICON@,,g" -e "s,@EXECUTABLE@,TicTacToe,g" -e "s,@TYPEINFO@,????,g" /Users/samuel/QtSDK/Desktop/Qt/474/gcc/mkspecs/macx-g++/Info.plist.app >TicTacToe.app/Contents/Info.plist
dist: 
	@$(CHK_DIR_EXISTS) .tmp/TicTacToe1.0.0 || $(MKDIR) .tmp/TicTacToe1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/TicTacToe1.0.0/ && $(COPY_FILE) --parents mainwindow.h gamegrid.h datatypes.h customgridview.h customgraphicsview.h controller.h aicontroller.h rulesengine.h playerbutton.h player.h neuralnetwork.h Model.h .tmp/TicTacToe1.0.0/ && $(COPY_FILE) --parents mainwindow.cpp main.cpp gamegrid.cpp customgridview.cpp customgraphicsview.cpp controller.cpp aicontroller.cpp rulesengine.cpp playerbutton.cpp player.cpp neuralnetwork.cpp .tmp/TicTacToe1.0.0/ && $(COPY_FILE) --parents mainwindow.ui .tmp/TicTacToe1.0.0/ && (cd `dirname .tmp/TicTacToe1.0.0` && $(TAR) TicTacToe1.0.0.tar TicTacToe1.0.0 && $(COMPRESS) TicTacToe1.0.0.tar) && $(MOVE) `dirname .tmp/TicTacToe1.0.0`/TicTacToe1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/TicTacToe1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) -r TicTacToe.app
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_moc_header_make_all: moc_mainwindow.cpp moc_customgridview.cpp moc_customgraphicsview.cpp moc_playerbutton.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_customgridview.cpp moc_customgraphicsview.cpp moc_playerbutton.cpp
moc_mainwindow.cpp: controller.h \
		Model.h \
		gamegrid.h \
		datatypes.h \
		rulesengine.h \
		mainwindow.h
	/Users/samuel/QtSDK/Desktop/Qt/474/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ mainwindow.h -o moc_mainwindow.cpp

moc_customgridview.cpp: customgridview.h
	/Users/samuel/QtSDK/Desktop/Qt/474/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ customgridview.h -o moc_customgridview.cpp

moc_customgraphicsview.cpp: customgraphicsview.h
	/Users/samuel/QtSDK/Desktop/Qt/474/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ customgraphicsview.h -o moc_customgraphicsview.cpp

moc_playerbutton.cpp: datatypes.h \
		playerbutton.h
	/Users/samuel/QtSDK/Desktop/Qt/474/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ playerbutton.h -o moc_playerbutton.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_uic_make_all: ui_mainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h
ui_mainwindow.h: mainwindow.ui \
		playerbutton.h \
		datatypes.h
	/Users/samuel/QtSDK/Desktop/Qt/474/gcc/bin/uic mainwindow.ui -o ui_mainwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

mainwindow.o: mainwindow.cpp mainwindow.h \
		controller.h \
		Model.h \
		gamegrid.h \
		datatypes.h \
		rulesengine.h \
		ui_mainwindow.h \
		playerbutton.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

main.o: main.cpp mainwindow.h \
		controller.h \
		Model.h \
		gamegrid.h \
		datatypes.h \
		rulesengine.h \
		neuralnetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

gamegrid.o: gamegrid.cpp gamegrid.h \
		datatypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o gamegrid.o gamegrid.cpp

customgridview.o: customgridview.cpp customgridview.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o customgridview.o customgridview.cpp

customgraphicsview.o: customgraphicsview.cpp customgraphicsview.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o customgraphicsview.o customgraphicsview.cpp

controller.o: controller.cpp controller.h \
		Model.h \
		gamegrid.h \
		datatypes.h \
		rulesengine.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o controller.o controller.cpp

aicontroller.o: aicontroller.cpp aicontroller.h \
		player.h \
		datatypes.h \
		controller.h \
		Model.h \
		gamegrid.h \
		rulesengine.h \
		neuralnetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o aicontroller.o aicontroller.cpp

rulesengine.o: rulesengine.cpp rulesengine.h \
		gamegrid.h \
		datatypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o rulesengine.o rulesengine.cpp

playerbutton.o: playerbutton.cpp playerbutton.h \
		datatypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o playerbutton.o playerbutton.cpp

player.o: player.cpp player.h \
		datatypes.h \
		controller.h \
		Model.h \
		gamegrid.h \
		rulesengine.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o player.o player.cpp

neuralnetwork.o: neuralnetwork.cpp neuralnetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o neuralnetwork.o neuralnetwork.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_customgridview.o: moc_customgridview.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_customgridview.o moc_customgridview.cpp

moc_customgraphicsview.o: moc_customgraphicsview.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_customgraphicsview.o moc_customgraphicsview.cpp

moc_playerbutton.o: moc_playerbutton.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_playerbutton.o moc_playerbutton.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
