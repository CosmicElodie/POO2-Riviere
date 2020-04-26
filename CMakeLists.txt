cmake_minimum_required(VERSION 3.15)
project(POO2-Riviere)

set(CMAKE_CXX_STANDARD 20)

add_executable(POO2-Riviere main.cpp Containers/Boat.cpp Containers/Boat.h Containers/Bank.cpp Containers/Bank.h People/Person.cpp People/Person.h Controller.cpp Controller.h Containers/Container.cpp Containers/Container.h People/Family/Daughter.cpp People/Family/Daughter.h People/Family/Son.cpp People/Family/Son.h People/Family/Father.cpp People/Family/Father.h People/Family/Mother.cpp People/Family/Mother.h People/Family/Parent.cpp People/Family/Parent.h People/Family/Child.cpp People/Family/Child.h People/Robber.cpp People/Robber.h People/Policeman.cpp People/Policeman.h)