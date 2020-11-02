#include <iostream>

static int count=1;
class User{
	public:
		std::string name;
		int number;
		User(){
			std::cout<<"No info was provided.";
		}
		User(std::string name, int number){
			std::cout<<"Name: "<<name<<std::endl<<"Number: "<<number<<std::endl;
		}
		~User(){
			std::cout<<"Memory freed "<<count<<" times.\n";
			count++;
			//std::cout<<number<<std::endl;		//doesn't work, dk why
		}
};
int main(){
	User user1("Jinu", 123);
	User user2("Shubhankar", 456);
	if(true)
		User user3("Jinarma", 789);
	return 0;
}