class Time{
public:
	// Constructors
	Time();
	Time(int aHour, int aMinute, int aSecond);

	// Getters
	int getHour() const;
	int getMinute() const;
	int getSecond() const;

	// Setters
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);

	// Member Functions
	void PrintAMPM() const;

private:
	// Member varibales
	int hour;
	int minute;
	int second;
};