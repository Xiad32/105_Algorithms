struct CourseStudentScore {
	std::string course_name;
	float score;
	int max_score;

	void print() const
	{
		std::cout << course_name << ": ";
		std::cout << std::fixed << std::setprecision(2) << score << " / " << max_score << '\n';
	}
};

struct StudentGrades
{
	std::string first_name;
	std::string last_name;
	std::vector<CourseStudentScore> scores;

	void print() const
	{
		std::cout << first_name << " " << last_name << "\n";
		std::cout << "Student Grades: " << '\n';
		for (const auto& score : scores)
		{
			score.print();
		}
	}
};

struct GradesGenerator
{
	static std::vector<StudentGrades> getScores()
	{
		return {
			{
				"John", "Doe",
				{
					{"Math", 85.5f, 100},
					{"Physics", 90.0f, 100},
					{"Chemistry", 78.0f, 100},
					{"Biology", 88.0f, 100},
					{"English", 95.0f, 100}
				}
			},
			{
				"Jane", "Smith",
				{
					{"Math", 92.0f, 100},
					{"Physics", 88.5f, 100},
					{"Chemistry", 95.0f, 100},
					{"Biology", 90.0f, 100},
					{"English", 85.0f, 100}
				}
			},
			{
				"Emily", "Johnson",
				{
					{"Math", 76.0f, 100},
					{"Physics", 82.5f, 100},
					{"Chemistry", 89.0f, 100},
					{"Biology", 91.0f, 100},
					{"English", 80.0f, 100}
				}
			},
			{
				"Denzel", "Washington",
				{
					{"Math", 65.0f, 100},
					{"Physics", 70.0f, 100},
					{"Chemistry", 80.0f, 100},
					{"Biology", 75.0f, 100},
					{"English", 72.0f, 100}
				}
			},
			{
				"Fredrico", "Dimarco",
				{
					{"Math", 65.0f, 100},
					{"Physics", 70.0f, 100},
					{"Chemistry", 80.0f, 100},
					{"Biology", 75.0f, 100},
					{"English", 72.0f, 100}
				}
			},
			{
				"Christian", "Vieri",
				{
					{"Math", 65.0f, 100},
					{"Physics", 70.0f, 100},
					{"Chemistry", 80.0f, 100},
					{"Biology", 75.0f, 100},
					{"English", 72.0f, 100}
				}
			},			{
				"Michael", "Own",
				{
					{"Math", 65.0f, 100},
					{"Physics", 70.0f, 100},
					{"Chemistry", 80.0f, 100},
					{"Biology", 75.0f, 100},
					{"English", 72.0f, 100}
				}
			},			{
				"Arnold", "Schevienz",
				{
					{"Math", 65.0f, 100},
					{"Physics", 70.0f, 100},
					{"Chemistry", 80.0f, 100},
					{"Biology", 75.0f, 100},
					{"English", 72.0f, 100}
				}
			},			{
				"Steve", "Carel",
				{
					{"Math", 65.0f, 100},
					{"Physics", 70.0f, 100},
					{"Chemistry", 80.0f, 100},
					{"Biology", 75.0f, 100},
					{"English", 72.0f, 100}
				}
			},			{
				"Jackie", "Chan",
				{
					{"Math", 65.0f, 100},
					{"Physics", 70.0f, 100},
					{"Chemistry", 80.0f, 100},
					{"Biology", 75.0f, 100},
					{"English", 72.0f, 100}
				}
			},			{
				"John", "Austin",
				{
					{"Math", 65.0f, 100},
					{"Physics", 70.0f, 100},
					{"Chemistry", 80.0f, 100},
					{"Biology", 75.0f, 100},
					{"English", 72.0f, 100}
				}
			},
		};
	}
};