#!/bin/bash

working_dir=$(eval "pwd") && ./run.bat && cp ./CppRectangularHyperbola/CppNativeWindows.dll ./JRectangularHyperbola/src/main/java/com/winterop/jrectangularhyperbola/CppRectangularHyperbola.dll -f && cd ./JRectangularHyperbola && export JAVA_HOME="/C/Program Files/Java/jdk-16.0.1" && export CLASSPATH="${working_dir}/JRectangularHyperbola/src/main/java/com/winterop/jrectangularhyperbola" && export PATH=$PATH:"${working_dir}/JRectangularHyperbola/src/main/java/com/winterop/jrectangularhyperbola" && "/C/Program Files/NetBeans-12.4/netbeans/java/maven/bin/mvn" exec:java -Dexec.mainClass=com.winterop.jrectangularhyperbola.RHJFrame