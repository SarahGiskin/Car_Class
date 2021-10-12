//this file contains the definition of the Car class and an executible method
//for CSCI 112, CCP, Summer 2020
//last edited by Sarah Giskin 8/18/2020


#include <iostream>
#include <sstream>


using namespace std;


class Car {
   
   public: 
   
  //declare class member variables  
  int year;
  string make;
  string engine;
  int speed;
  
  //default constructor
  Car() {
  }
  
  //initializing constructor with parameters
  Car(int year1, string make1) {
      
      year = year1;
      make = make1;
      speed = 0;
  } //end constructor function
  
  //accessor functions
  int getYear() {
      return year;
  }
  
  string getMake(){
      return make;
  }
  
  string getEng(){
      return engine;
  }
    
  int getSpeed(){
      return speed;
  }
    
 //mutator functions
  void setYear(int year2){
      year = year2;
  }
  
  void setMake(string make2){
      make = make2;
  }
  
  void setEng(string engine2){
      engine = engine2;
  }
    
  void setSpeed(int speed2){
      speed = speed2;
  }      
    
 //other functions
  void accelorate(){
      speed = speed + 5;
  } 
    
  void brake(){
      speed = speed - 5;
  }    
  
  string toString(){
      
      //delcare variables
      string carState;
      string state1;
      string state2;
      string state3;
      string state4;
      
      //create string streams and connect to variables
      stringstream stream1;
      stream1 << year;
      stream1 >> state1;
      
      stringstream stream2;
      stream2 << make;
      stream2 >> state2;
      
      stringstream stream3;
      stream3 << engine;
      stream3 >> state3;
      
      stringstream stream4;
      stream4 << speed;
      stream4 >> state4;
      
      //combine everything into one message 
      carState = "Year: " + state1 + ", Make: " + state2 + 
      ", Engine Type: " + state3 + ", Current Speed: " + state4;  
      
      //print to user
      cout << "\n";
      cout << "The state of the car is..." << endl;
      cout << carState << endl;
      
      return carState;
  } 
  
}; //end class definition
    


int main() { 
    
    //print message to user
    cout << "Welcome to your car!" << endl;


    //create Car object
    Car firstCar(1992, "Mazda");
    
    int count = 0;
    int count2 = 0;
    
    while (count < 5) {
    firstCar.accelorate();
    firstCar.getSpeed();
    cout << "The car's speed is " << firstCar.speed << " miles per hour." << endl;
    count = count + 1;
    } //end while loop


    while (count2 < 5) {
    firstCar.brake();
    firstCar.getSpeed();
    cout << "The car's speed is " << firstCar.speed << " miles per hour." << endl;
    count2 = count2 + 1;
    } //end while loop


    //set engine type
    firstCar.setEng("vEngine");    


    firstCar.toString();
    
    return 0;
} //end main method