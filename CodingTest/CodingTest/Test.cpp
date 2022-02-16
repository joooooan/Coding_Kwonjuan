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

	for (int i = 0; i < participant.size(); ++i)
	{
		for (int j = 0; j < completion.size(); ++j)
		{
			if (participant[i] == completion[j])
			{
				continue;
			}
			else
			{
				answer = completion[j];
			}
		}
	}

	cout << answer << endl;

	return answer;
}