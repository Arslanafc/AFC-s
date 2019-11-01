struct afc
{
	double data;
	afc* next;
};
class major
{
private:
	afc* head;
	afc* tail;
public:
	major();
	void create_afc(double data);
	void display();
	void add_first(double data);
	void insert_last(double data);
	void delete_start();
	void delete_last();
	void delete_add(int pos, double data);
};