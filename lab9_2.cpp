#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(float score){
	char grade;
	if(score > 90){
    	grade = 'A';
  	}else if(score > 75 and score <= 90){
    	grade = 'B';
  	}else if(score > 60 and score <= 75){
    	grade = 'C';
  	}else if(score > 45 and score <= 60){
    	grade = 'D';
  	}else{
    	grade = 'F';
 	}
	return grade;
}

//[Missing Code 1] Write definition of the function findGrade() here.

int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
