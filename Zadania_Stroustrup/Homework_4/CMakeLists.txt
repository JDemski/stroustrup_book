cmake_minimum_required(VERSION 3.10)

project(homework_4)

set(SOURCE_FILES askUser.cpp averageDistance.cpp calcGuessValue.cpp calculator.cpp calculatorOneDigit.cpp checkAnswer.cpp clearBufferIn.cpp
convertDigitToString.cpp convertStringToDigit.cpp dominant.cpp eratostenes.cpp find_primes.cpp maxDistance.cpp mediana.cpp minDistance.cpp
printVectorInt.cpp totalDistance.cpp)

add_executable(${PROJECT_NAME} homework_4.cpp ${SOURCE_FILES})