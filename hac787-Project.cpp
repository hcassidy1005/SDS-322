#include <iostream>
#include <string>
#include <vector>  
using std::cin;
using std::cout;
using std::endl;
using std::string; 
using std::to_string;
using std::vector; 

class Person {
	private:
		int status;
	public: 
	Person(){
		status = 0; 
	}//constructor
	string status_string(){
		if (status == 0) {
			return "susceptible";
		} //if
		if (status > 0) { 
			return "sick (" + to_string(status)  + " to go)";
		}//if
		if (status == -1) { 
			return "recovered";
		}//if
	}//status
	void infect(int n){
		status = n; 
	} //infect
	bool is_stable(){
		if (status == -1){
			return true; 
		}//if
		else 
			return false; 
	} //is stable
	void update(){
		if (status > 0 ){
			status = status - 1;
			if (status == 0) {
				status = -1; 
			}//if
		}//if
	}//update
	int get_status(){
		return status;
	}//get status
	void inoculate(){
		status = -1;
	} //inoculate
};//person

class Population { 
	private:
		float probability_of_transfer; 
		vector <Person> pop;  
		float random1; 

	public: 
	Population(int people){
		for (int i = 0; i < people; i++){
			pop.push_back(Person()); 
		} //for
	} //constructor
	void random_infection(){
		int random = rand() % pop.size(); 
		pop.at(random).infect(5); 
	}
	int count_infected(){
		int count = 0; 
		for (int i = 0; i < pop.size(); i++){
			if (pop.at(i).get_status() > 0) {
				count ++; 
			}//if
		}//for
		return count; 
	} //count
	void spread_disease(){ 
		for (int i = 0; i < pop.size(); i++){
			if (pop.at(i).get_status() > 0){
				if (i-1 >= 0){
					if (pop.at(i-1).get_status() == 0){
                                        	random1 =  (float) rand()/(float)RAND_MAX;
						if (random1 <= probability_of_transfer)
							pop.at(i-1).infect(5);
					}//if
				
                        	}//if
                        	if (i+1 < pop.size()){
                                	if (pop.at(i+1).get_status() == 0){
                        			random1 =  (float) rand()/(float)RAND_MAX;
                                                if (random1 <= probability_of_transfer)
                                                        pop.at(i+1).infect(5);
					}//if
				}//if
			}//if
		}//for
	} //spread disease 
	void update(){
		for (int i = 0; i < pop.size(); i++){
			pop.at(i).update();
		} //for
	}  //update
	string pop_display(){
		string display = "";  
		for(int i = 0; i< pop.size(); i++){
			if (pop.at(i).get_status() == 0) {
                        	display = display + "?";
                	}//if
                	if (pop.at(i).get_status() > 0) {
                        	display = display + "+";
                	}//if
                	if (pop.at(i).get_status() == -1) {
                        	display = display + "-";
                	}//if	
		}//for
		return display; 
	}//display
	void set_probability_of_transfer(float prob){
		probability_of_transfer = prob; 
	}//set probability
	void inoculate(float percent_vacc){
		int numvacc = pop.size() * (percent_vacc/100); 
		for (int i = 0; i < numvacc; i++){
			random1 = rand() % pop.size();
			pop.at(random1).inoculate(); 
		}//for
	}//inoculate
	int num_susceptible(){
		int num_susceptible = 0;
                        for(int i = 0; i < pop.size(); i++){
                                if(pop.at(i).get_status() == 0)
                                        num_susceptible += 1;
                        }//for
		return num_susceptible; 
	}//num susceptible 
}; //population

int main() {
	int pop_size = 500;
	int days;

	cout << "Probability of transfer, Percent vaccinated, Days that disease ran course, number of people still susceptible at the end" << endl; 
	for(float probability = 0;  probability < 1.0; probability + 0.01) {
		for(float percent_vaccinated = 0; percent_vaccinated < 100; percent_vaccinated++) {
			Population pop(pop_size);
			pop.set_probability_of_transfer(probability);
			pop.inoculate(percent_vaccinated); 
			pop.random_infection();
			for (int i = 1; i > 0; i++){
				pop.update();
				pop.spread_disease();  
				if (pop.count_infected() == 0){
					days = i; 
					break;
				}//if
			}//for i
			cout<< probability << ", " << percent_vaccinated << ", " << days << ", " << pop.num_susceptible() <<endl; 
			percent_vaccinated += 1;
		}//for percent vacinate
		probability += 0.01; 
	}// for probability 
} //main

