#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion);

int main()
{
	vector<string> _participant;
	_participant.push_back("A");
	_participant.push_back("B");
	_participant.push_back("C");

	vector<string> _completion;

	_completion.push_back("A");

	solution(_participant,_completion);

	return 0;
}


string solution(vector<string> participant, vector<string> completion) 
{
	string answer = "";

	vector<string> answers;

	for (int i = 0; i < participant.size(); ++i)
	{
		for (int j = 0; j < completion.size(); ++i)
		{
			if (participant[i] == completion[j])
			{
				
			}
			else
			{
				answers.push_back(participant[i]);
;			}
		}

		

	}

	cout << answer << endl;

	return answer;
}