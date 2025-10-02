#include<iostream>
#include<string>
#include <vector>
class MyTask {
public:
	std::string date_="Date";
	std::string taskName_="Name";
	MyTask(){};		


};


int main() {
	std::vector<MyTask> tasks{};

	while (true) {
		std::string userChoise;

		std::cout << "1.Add a Task\n"; 
		std::cout << " 2.Remove a Task\n"; 
		std::cout << "  3.Show The Tasks\n"; 
		std::cout << "   *Choose an action : ";
		std::cin >> userChoise;

		if (userChoise == "1") {
			MyTask newTask;
			std::cout << "Enter New Task's Date : ";
			std::cin >> newTask.date_;
			std::cout << std::endl;
			std::cout << "Enter New Task's Name : ";
			std::cin >> newTask.taskName_;
			std::cout << std::endl;

			tasks.push_back(newTask);
		}

		if(userChoise == "2"){
			std::cout << "Which Task's Number Do You Wish to Remove? : ";

			int i;
			std::cin >>i;
			tasks.erase(tasks.begin()+(i-1));

		}

		if(userChoise == "3"){
			int i;
			for(i = 0; i < tasks.size(); i++){
				std::cout << tasks[i].date_ << tasks[i].taskName_ << "\n";
			}
		}
	}

}
