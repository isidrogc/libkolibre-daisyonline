#!/bin/bash -e

#usage: <test framework> <test case> <test data>
${srcdir:-.}/../soaptester.sh ${bindir:-.}/markannouncementsasread ${srcdir:-.}/markAnnouncementsAsRead
