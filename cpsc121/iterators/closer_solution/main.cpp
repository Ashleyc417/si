#include <iostream>
#include <string>
#include <map>


void printTargetScore(std::map<std::string, int> studentScores, std::string target) {

  std::map<std::string, int>::iterator it = studentScores.begin();
  bool found = false;

	for (it = studentScores.begin(); it != studentScores.end(); it++) {
    	if (it->first == target) {
		    // Remember to dereference then call the method 
        std::cout << it->first << "’s score: " << it->second << std::endl;
        found = true;
        break;
    	}
	}

	if (!found) {
    		std::cout << "Score not found in the map." << std::endl;
	}
}



int main() {
	// Given map of students and their scores
	std::map<std::string, int> studentScores = {
    	{"Alice", 85},
    	{"Bob", 92},
    	{"Charlie", 78},
    	{"David", 88}
	};
	
	// Find and print the target’s output
	printTargetScore(studentScores, "Charlie");
 	printTargetScore(studentScores, "Ashley");
	return 0;

}
