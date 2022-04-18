#include <stdlib.h>
#include <stdio.h>
#include "cl_application.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cl_application ob_cl_application(nullptr);
	ob_cl_application.bild_tree_objects(); //Построение древа объектов
	return ob_cl_application.exec_app(); //Запуск системы
}
