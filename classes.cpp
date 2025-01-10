class A
{
public:
	explicit A(events_callback* eventsCallback); // avoid implicit conversion

	A(const A& copy) = delete; // copy constructor
	A& operator=(const A& copy) = delete; // copy assignment
	A(A&& move) noexcept = delete;  // move constructor
	A& operator=(A&&) = delete; // move assigment
};