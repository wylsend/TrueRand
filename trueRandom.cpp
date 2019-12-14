int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand()* fraction *(max - min + 1) + min);
}

int randome(int n){
	double a = n/RAND_MAX; 
	int z = a+1; // узнаем колличество частей рандома на всем диапазоне
	int b = getRandomNumber(1, z); // выбираем случаным образом часть рандома
	int c = ((RAND_MAX*(b-1))+rand())%(n+1); //рандомим число в той части
	return c;
}

int main() 
{
	srand(static_cast<unsigned int>(time(0)));
	//вызываем функцию randome(n), где n - верхняя граница рандома
