#include<iostream>
#include<string>
#include <vector>
class MyTask {
public:
	std::string date_{};
	std::string taskName_{};
	class MyTask() {};


};


int main() {
	std::vector<MyTask> tasks{};

	while (true) {
		std::string userChoise;

		std::cout << "1.Add a Task\n Choose an action : ";
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
	}

}
