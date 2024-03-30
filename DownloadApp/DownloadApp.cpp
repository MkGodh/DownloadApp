#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {

	setlocale(LC_ALL, "RUS");

	int internetSpeed;
	int patchSize;

	cout << "Укажите размер файла для скачивания: "; cin >> patchSize;
	cout << "Какова скорость вашего интернета?: "; cin >> internetSpeed;

	int downloadSize = 0;

	int percentDif = 0;
	for (int counter = 1; downloadSize < patchSize; counter++) {
		downloadSize += internetSpeed;
		int percent = (downloadSize * 100) / patchSize;
		if (downloadSize >= patchSize) {
			while (percent > 100) {
				percent--;
			}
			int difference = downloadSize - patchSize;
			downloadSize -= difference;
			cout << "Прошло " << counter << " сек.Скачанно " << downloadSize << " из " << patchSize << " МБ(" << percent << "%)\n";
			cout << "Загрузка завершена!";
			break;
		}

		cout << "Прошло " << counter << " сек.Скачанно " << downloadSize << " из " << patchSize << " МБ(" << percent << "%)\n";

	}




}