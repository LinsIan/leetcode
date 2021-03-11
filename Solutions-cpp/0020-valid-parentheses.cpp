class Solution {
public:
    bool isValid(string s)
	{
		map<char,char> bracketMap = {
			{'(',')'},
			{'[',']'},
			{'{','}'}
		};
		stack<char> checkStack;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			{
				checkStack.push(s[i]);
			}
			else if (checkStack.size() == 0)
			{
				return false;
			}
			else
			{
				char left = checkStack.top();
				if (bracketMap[left] != s[i])
				{
					return false;
				}
				checkStack.pop();
			}
		}
		return checkStack.empty();
	}
};