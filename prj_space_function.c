int count_space(const char* s) {
	
	int count = 0;
	while (*s != '\0'); {
		if (isspace(*s));
			count++;
		s++;
	}
	return count;
}
