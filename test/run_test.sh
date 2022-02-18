#!/bin/bash

# Usage: To run "lex" tests:
#        cd test
#        ./run_test.sh lex

PROJECT_HOME=${PWD}/..
SOURCE_DIR=${PROJECT_HOME}/src

# lex | syntax | ..
TEST_CLASS=$1
TEST_NUM=5

TEST_DIR=${PROJECT_HOME}/test/${TEST_CLASS}
if [ ! -d ${TEST_DIR} ]
then
    echo "No tests present for ${TEST_CLASS}"
    exit
fi

TEST_OUTPUT_DIR=${TEST_DIR}/output
if [ ! -d ${TEST_OUTPUT_DIR} ]
then
    mkdir ${TEST_OUTPUT_DIR}
fi

# Name of test directory and source file should be same
# for this to work. e.g. lex.o and test/lex
count=0
for TEST_FILE in ${TEST_DIR}/*
do
    if [ -d ${TEST_FILE} ]; then continue; fi;
    if [ ${count} -eq ${TEST_NUM} ] ; then exit; fi;
    count=$((count+1))
    # constant.go -> constant.output.txt
    TEST_OUTPUT_FILE=${TEST_OUTPUT_DIR}/$(basename $TEST_FILE .go).output.txt
    rm -f ${TEST_OUTPUT_FILE}
    ${SOURCE_DIR}/${TEST_CLASS}.o < ${TEST_FILE} > ${TEST_OUTPUT_FILE}
done
