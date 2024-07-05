int _atoi(char *s)
{
	int idx, cntMinus, num, length, flag, digit;

	idx = 0;
	cntMinus = 0;
	num = 0;
	length = 0;
	flag = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (idx < length && flag == 0)
	{
		if (s[idx] == '-')
			++cntMinus;

		if (s[idx] >= '0' && s[idx] <= '9')
		{
			digit = s[idx] - '0';
			if (cntMinus % 2)
				digit = -digit;
			num = num * 10 + digit;
			flag = 1;
			if (s[idx + 1] < '0' || s[idx + 1] > '9')
				break;
			flag = 0;
		}
		idx++;
	}

	if (flag == 0)
		return (0);

	return (num);
}

