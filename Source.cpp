#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	setlocale(0, "");

	int choice;
	int test = 0;
	int test2 = 1;
	int draw = 0;
	int exam = 1;
	int exam1 = 0;
	int exam2 = 0;
	int exam3 = 0;
	int exam1s = 0;
	int exam2s = 0;
	int exam3s = 0;
	int exam1d = 0;
	int exam2d = 0;
	int gamecomp;
	int gamefirst;
	int game = 1;
	int g;
	int move;
	int color = 6;
	int usercolor1 = 1;
	int usercolor2 = 4;
	int pccolor = 5;
	int setting = 1;
	int pcsetting = 1;
	int usersetting = 1;
	int usersetting1 = 1;
	int usersetting2 = 1;
	int gamesetting = 1;
	int pcwin = 0;
	int userwin1 = 0;
	int userwin2 = 0;
	int pclose = 0;
	int userlose1 = 0;
	int userlose2 = 0;
	int pcdraw = 0;
	int userdraw1 = 0;
	int userdraw2 = 0;
	float pcpoint;
	float userpoint1;
	float userpoint2;
	char pcitem = 'X';
	char useritem1 = '0';
	char useritem2 = '*';
	string username1 = "Игрок 1";
	string username2 = "Игрок 2";
	string pccolorname = "фиолетовый";
	string usercolorname1 = "красный";
	string usercolorname2 = "синий";
	char arrgame[3][3] =
	{
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	};

	while (true)
	{
		system("cls");
		cout << "\x1b[9" << color << "m\"Крестики-Нолики \"\x1b[0m\n\n";
		cout << "[\x1b[9" << color << "m1\x1b[0m] Начать игру\n";
		cout << "[\x1b[9" << color << "m2\x1b[0m] Статистика\n";
		cout << "[\x1b[9" << color << "m3\x1b[0m] Настройки\n";
		cout << "[\x1b[9" << color << "m0\x1b[0m] Выйти\n";
		cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			gamesetting = 1;
			while (gamesetting)
			{
				system("cls");
				cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
				cout << "[\x1b[9" << color << "m1\x1b[0m] Одиночная игра\n";
				cout << "[\x1b[9" << color << "m2\x1b[0m] Два игрока\n\n";
				cout << "[\x1b[9" << color << "m0\x1b[0m] Вернуться назад\n";
				cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
				cin >> choice;
				switch (choice)
				{
				case 1:
					gamecomp = 1;
					while (gamecomp)
					{
						system("cls");
						cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
						cout << "[\x1b[9" << color << "m+\x1b[0m]Выберите игрока\n";
						cout << "[\x1b[9" << color << "m1\x1b[0m] " << username1 << endl;
						cout << "[\x1b[9" << color << "m2\x1b[0m] " << username2 << endl << endl;
						cout << "[\x1b[9" << color << "m0\x1b[0m] Вернуться назад\n";
						cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
						cin >> choice;
						switch (choice)
						{
						case 1:
							gamefirst = 1;
							while (gamefirst)
							{
								system("cls");
								cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m+\x1b[0m]Выберите кто ходит первым\n";
								cout << "[\x1b[9" << color << "m1\x1b[0m] " << username1 << endl;
								cout << "[\x1b[9" << color << "m2\x1b[0m] Компьютер" << endl << endl;
								cout << "[\x1b[9" << color << "m0\x1b[0m] Вернуться назад\n";
								cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
								cin >> choice;
								switch (choice)
								{
								case 1:
									game = 1;
									g = 0;
									draw = 0;
									arrgame[0][0] = '1';
									arrgame[0][1] = '2';
									arrgame[0][2] = '3';
									arrgame[1][0] = '4';
									arrgame[1][1] = '5';
									arrgame[1][2] = '6';
									arrgame[2][0] = '7';
									arrgame[2][1] = '8';
									arrgame[2][2] = '9';
									while (game && g < 9)
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem1)
												{
													cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == pcitem)
												{
													cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										if (g % 2 == 0)
										{
											cout << "Ходит \x1b[9" << usercolor1 << "m" << username1 << "\x1b[0m: ";
											cin >> move;
										}
										else
										{
											cout << "Ходит \x1b[9" << pccolor << "mКомпьютер\x1b[0m: ";
											Sleep(1000);
											move = 0;
										}
										switch (move)
										{
										case 1:
											if (arrgame[0][0] == useritem1 || arrgame[0][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][0] = useritem1;
											break;
										case 2:
											if (arrgame[0][1] == useritem1 || arrgame[0][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][1] = useritem1;
											break;
										case 3:
											if (arrgame[0][2] == useritem1 || arrgame[0][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][2] = useritem1;
											break;
										case 4:
											if (arrgame[1][0] == useritem1 || arrgame[1][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][0] = useritem1;
											break;
										case 5:
											if (arrgame[1][1] == useritem1 || arrgame[1][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][1] = useritem1;
											break;
										case 6:
											if (arrgame[1][2] == useritem1 || arrgame[1][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][2] = useritem1;
											break;
										case 7:
											if (arrgame[2][0] == useritem1 || arrgame[2][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][0] = useritem1;
											break;
										case 8:
											if (arrgame[2][1] == useritem1 || arrgame[2][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][1] = useritem1;
											break;
										case 9:
											if (arrgame[2][2] == useritem1 || arrgame[2][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][2] = useritem1;
											break;
										case 0:
											test = 0;
											test2 = 1;
											exam = 1;
											exam1 = 0;
											exam2 = 0;
											exam3 = 0;
											exam1s = 0;
											exam2s = 0;
											exam3s = 0;
											exam1d = 0;
											exam2d = 0;

											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][0] == pcitem)
												{
													exam1++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][1] == pcitem)
												{
													exam2++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][2] == pcitem)
												{
													exam3++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[0][i] == pcitem)
												{
													exam1s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[1][i] == pcitem)
												{
													exam2s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[2][i] == pcitem)
												{
													exam3s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][i] == pcitem)
												{
													exam1d++;
												}
											}
											if (arrgame[0][2] == pcitem)
											{
												exam2d++;
											}
											if (arrgame[1][1] == pcitem)
											{
												exam2d++;
											}
											if (arrgame[2][0] == pcitem)
											{
												exam2d++;
											}
											while (exam)
											{
												if (exam1 == 2)
												{
													move = 1;
												}
												else if (exam2 == 2)
												{
													move = 2;
												}
												else if (exam3 == 2)
												{
													move = 3;
												}
												else if (exam1s == 2)
												{
													move = 4;
												}
												else if (exam2s == 2)
												{
													move = 5;
												}
												else if (exam3s == 2)
												{
													move = 6;
												}
												else if (exam1d == 2)
												{
													move = 7;
												}
												else if (exam2d == 2)
												{
													move = 8;
												}
												else
												{
													move = 0;
												}
												switch (move)
												{
												case 1:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][0] != useritem1 && arrgame[i][0] != pcitem)
														{
															arrgame[i][0] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1++;
														}
													}
													break;
												case 2:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][1] != useritem1 && arrgame[i][1] != pcitem)
														{
															arrgame[i][1] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam2++;
														}
													}
													break;
												case 3:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][2] != useritem1 && arrgame[i][2] != pcitem)
														{
															arrgame[i][2] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam3++;
														}
													}
													break;
												case 4:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[0][i] != useritem1 && arrgame[0][i] != pcitem)
														{
															arrgame[0][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1s++;
														}
													}
													break;
												case 5:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[1][i] != useritem1 && arrgame[1][i] != pcitem)
														{
															arrgame[1][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam2s++;
														}
													}
													break;
												case 6:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[2][i] != useritem1 && arrgame[2][i] != pcitem)
														{
															arrgame[2][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam3s++;
														}
													}
													break;
												case 7:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][i] != useritem1 && arrgame[i][i] != pcitem)
														{
															arrgame[i][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1d++;
														}
													}
													break;
												case 8:
													if (arrgame[0][2] != useritem1 && arrgame[0][2] != pcitem)
													{
														arrgame[0][2] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else if (arrgame[1][1] != useritem1 && arrgame[1][1] != pcitem)
													{
														arrgame[1][1] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else if (arrgame[2][0] != useritem1 && arrgame[2][0] != pcitem)
													{
														arrgame[2][0] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else
													{
														exam2d++;
													}
													break;
												case 0:
													test = 0;
													exam = 0;
													break;
												}
											}

											test = 0;
											exam = 1;
											exam1 = 0;
											exam2 = 0;
											exam3 = 0;
											exam1s = 0;
											exam2s = 0;
											exam3s = 0;
											exam1d = 0;
											exam2d = 0;

											if (test2 != 0)
											{
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][0] == useritem1)
													{
														exam1++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][1] == useritem1)
													{
														exam2++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][2] == useritem1)
													{
														exam3++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[0][i] == useritem1)
													{
														exam1s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[1][i] == useritem1)
													{
														exam2s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[2][i] == useritem1)
													{
														exam3s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][i] == useritem1)
													{
														exam1d++;
													}
												}
												if (arrgame[0][2] == useritem1)
												{
													exam2d++;
												}
												if (arrgame[1][1] == useritem1)
												{
													exam2d++;
												}
												if (arrgame[2][0] == useritem1)
												{
													exam2d++;
												}
												while (exam)
												{
													if (exam1 == 2)
													{
														move = 1;
													}
													else if (exam2 == 2)
													{
														move = 2;
													}
													else if (exam3 == 2)
													{
														move = 3;
													}
													else if (exam1s == 2)
													{
														move = 4;
													}
													else if (exam2s == 2)
													{
														move = 5;
													}
													else if (exam3s == 2)
													{
														move = 6;
													}
													else if (exam1d == 2)
													{
														move = 7;
													}
													else if (exam2d == 2)
													{
														move = 8;
													}
													else
													{
														move = 0;
													}
													switch (move)
													{
													case 1:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][0] != useritem1 && arrgame[i][0] != pcitem)
															{
																arrgame[i][0] = pcitem;
																exam = 0;
															}
															else
															{
																exam1++;
															}
														}
														break;
													case 2:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][1] != useritem1 && arrgame[i][1] != pcitem)
															{
																arrgame[i][1] = pcitem;
																exam = 0;
															}
															else
															{
																exam2++;
															}
														}
														break;
													case 3:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][2] != useritem1 && arrgame[i][2] != pcitem)
															{
																arrgame[i][2] = pcitem;
																exam = 0;
															}
															else
															{
																exam3++;
															}
														}
														break;
													case 4:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[0][i] != useritem1 && arrgame[0][i] != pcitem)
															{
																arrgame[0][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam1s++;
															}
														}
														break;
													case 5:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[1][i] != useritem1 && arrgame[1][i] != pcitem)
															{
																arrgame[1][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam2s++;
															}
														}
														break;
													case 6:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[2][i] != useritem1 && arrgame[2][i] != pcitem)
															{
																arrgame[2][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam3s++;
															}
														}
														break;
													case 7:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][i] != useritem1 && arrgame[i][i] != pcitem)
															{
																arrgame[i][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam1d++;
															}
														}
														break;
													case 8:
														if (arrgame[0][2] != useritem1 && arrgame[0][2] != pcitem)
														{
															arrgame[0][2] = pcitem;
															exam = 0;
														}
														else if (arrgame[1][1] != useritem1 && arrgame[1][1] != pcitem)
														{
															arrgame[1][1] = pcitem;
															exam = 0;
														}
														else if (arrgame[2][0] != useritem1 && arrgame[2][0] != pcitem)
														{
															arrgame[2][0] = pcitem;
															exam = 0;
														}
														else
														{
															exam2d++;
														}
														break;
													case 0:
														test = 0;
														if (arrgame[1][1] != useritem1 && arrgame[1][1] != pcitem)
														{
															arrgame[1][1] = pcitem;
														}
														else
														{
															for (int i = 0; i < 3; i++)
															{
																for (int j = 0; j < 3; j++)
																{
																	if (arrgame[i][j] != useritem1 && arrgame[i][j] != pcitem)
																	{
																		arrgame[i][j] = pcitem;
																		test++;
																		break;
																	}
																}
																if (test != 0)
																{
																	break;
																}
															}
														}
														exam = 0;
														break;
													}
												}
											}
											break;
										default:
											system("cls");
											cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
											Sleep(2000);
											g--;
											break;
										}
										for (int i = 0; i < 3; i++)
										{
											if (arrgame[i][0] == arrgame[i][1] && arrgame[i][1] == arrgame[i][2])
											{
												game = 0;
												if (arrgame[i][0] == useritem1)
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem1)
															{
																cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
													userwin1++;
													pclose++;
													draw++;
													Sleep(2000);
												}
												else
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem1)
															{
																cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
													pcwin++;
													userlose1++;
													draw++;
													Sleep(2000);
												}
											}
											if (arrgame[0][i] == arrgame[1][i] && arrgame[1][i] == arrgame[2][i])
											{
												game = 0;
												if (arrgame[0][i] == useritem1)
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem1)
															{
																cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
													userwin1++;
													pclose++;
													draw++;
													Sleep(2000);
												}
												else
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem1)
															{
																cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
													pcwin++;
													userlose1++;
													draw++;
													Sleep(2000);
												}

											}
										}
										if (arrgame[0][0] == arrgame[1][1] && arrgame[1][1] == arrgame[2][2])
										{
											game = 0;
											if (arrgame[0][0] == useritem1)
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem1)
														{
															cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
												userwin1++;
												pclose++;
												draw++;
												Sleep(2000);
											}
											else
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem1)
														{
															cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
												pcwin++;
												userlose1++;
												draw++;
												Sleep(2000);
											}
										}
										if (arrgame[0][2] == arrgame[1][1] && arrgame[1][1] == arrgame[2][0])
										{
											game = 0;
											if (arrgame[2][0] == useritem1)
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem1)
														{
															cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
												userwin1++;
												pclose++;
												draw++;
												Sleep(2000);
											}
											else
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem1)
														{
															cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
												pcwin++;
												userlose1++;
												draw++;
												Sleep(2000);
											}
										}
										g++;
										if (g >= 9 && draw == 0)
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem1)
													{
														cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == pcitem)
													{
														cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "Ничья! Попробуйте сыграть еще!" << endl;
											userdraw1++;
											pcdraw++;
											Sleep(2000);
										}

									}
									break;
								case 2:
									game = 1;
									g = 0;
									draw = 0;
									arrgame[0][0] = '1';
									arrgame[0][1] = '2';
									arrgame[0][2] = '3';
									arrgame[1][0] = '4';
									arrgame[1][1] = '5';
									arrgame[1][2] = '6';
									arrgame[2][0] = '7';
									arrgame[2][1] = '8';
									arrgame[2][2] = '9';
									while (game && g < 9)
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem1)
												{
													cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == pcitem)
												{
													cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										if (g % 2 != 0)
										{
											cout << "Ходит \x1b[9" << usercolor1 << "m" << username1 << "\x1b[0m: ";
											cin >> move;
										}
										else
										{
											cout << "Ходит \x1b[9" << pccolor << "mКомпьютер\x1b[0m: ";
											Sleep(1000);
											move = 0;
										}
										switch (move)
										{
										case 1:
											if (arrgame[0][0] == useritem1 || arrgame[0][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][0] = useritem1;
											break;
										case 2:
											if (arrgame[0][1] == useritem1 || arrgame[0][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][1] = useritem1;
											break;
										case 3:
											if (arrgame[0][2] == useritem1 || arrgame[0][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][2] = useritem1;
											break;
										case 4:
											if (arrgame[1][0] == useritem1 || arrgame[1][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][0] = useritem1;
											break;
										case 5:
											if (arrgame[1][1] == useritem1 || arrgame[1][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][1] = useritem1;
											break;
										case 6:
											if (arrgame[1][2] == useritem1 || arrgame[1][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][2] = useritem1;
											break;
										case 7:
											if (arrgame[2][0] == useritem1 || arrgame[2][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][0] = useritem1;
											break;
										case 8:
											if (arrgame[2][1] == useritem1 || arrgame[2][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][1] = useritem1;
											break;
										case 9:
											if (arrgame[2][2] == useritem1 || arrgame[2][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][2] = useritem1;
											break;
										case 0:
											test = 0;
											test2 = 1;
											exam = 1;
											exam1 = 0;
											exam2 = 0;
											exam3 = 0;
											exam1s = 0;
											exam2s = 0;
											exam3s = 0;
											exam1d = 0;
											exam2d = 0;

											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][0] == pcitem)
												{
													exam1++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][1] == pcitem)
												{
													exam2++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][2] == pcitem)
												{
													exam3++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[0][i] == pcitem)
												{
													exam1s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[1][i] == pcitem)
												{
													exam2s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[2][i] == pcitem)
												{
													exam3s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][i] == pcitem)
												{
													exam1d++;
												}
											}
											if (arrgame[0][2] == pcitem)
											{
												exam2d++;
											}
											if (arrgame[1][1] == pcitem)
											{
												exam2d++;
											}
											if (arrgame[2][0] == pcitem)
											{
												exam2d++;
											}
											while (exam)
											{
												if (exam1 == 2)
												{
													move = 1;
												}
												else if (exam2 == 2)
												{
													move = 2;
												}
												else if (exam3 == 2)
												{
													move = 3;
												}
												else if (exam1s == 2)
												{
													move = 4;
												}
												else if (exam2s == 2)
												{
													move = 5;
												}
												else if (exam3s == 2)
												{
													move = 6;
												}
												else if (exam1d == 2)
												{
													move = 7;
												}
												else if (exam2d == 2)
												{
													move = 8;
												}
												else
												{
													move = 0;
												}
												switch (move)
												{
												case 1:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][0] != useritem1 && arrgame[i][0] != pcitem)
														{
															arrgame[i][0] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1++;
														}
													}
													break;
												case 2:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][1] != useritem1 && arrgame[i][1] != pcitem)
														{
															arrgame[i][1] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam2++;
														}
													}
													break;
												case 3:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][2] != useritem1 && arrgame[i][2] != pcitem)
														{
															arrgame[i][2] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam3++;
														}
													}
													break;
												case 4:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[0][i] != useritem1 && arrgame[0][i] != pcitem)
														{
															arrgame[0][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1s++;
														}
													}
													break;
												case 5:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[1][i] != useritem1 && arrgame[1][i] != pcitem)
														{
															arrgame[1][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam2s++;
														}
													}
													break;
												case 6:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[2][i] != useritem1 && arrgame[2][i] != pcitem)
														{
															arrgame[2][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam3s++;
														}
													}
													break;
												case 7:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][i] != useritem1 && arrgame[i][i] != pcitem)
														{
															arrgame[i][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1d++;
														}
													}
													break;
												case 8:
													if (arrgame[0][2] != useritem1 && arrgame[0][2] != pcitem)
													{
														arrgame[0][2] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else if (arrgame[1][1] != useritem1 && arrgame[1][1] != pcitem)
													{
														arrgame[1][1] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else if (arrgame[2][0] != useritem1 && arrgame[2][0] != pcitem)
													{
														arrgame[2][0] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else
													{
														exam2d++;
													}
													break;
												case 0:
													test = 0;
													exam = 0;
													break;
												}
											}

											test = 0;
											exam = 1;
											exam1 = 0;
											exam2 = 0;
											exam3 = 0;
											exam1s = 0;
											exam2s = 0;
											exam3s = 0;
											exam1d = 0;
											exam2d = 0;

											if (test2 != 0)
											{
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][0] == useritem1)
													{
														exam1++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][1] == useritem1)
													{
														exam2++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][2] == useritem1)
													{
														exam3++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[0][i] == useritem1)
													{
														exam1s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[1][i] == useritem1)
													{
														exam2s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[2][i] == useritem1)
													{
														exam3s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][i] == useritem1)
													{
														exam1d++;
													}
												}
												if (arrgame[0][2] == useritem1)
												{
													exam2d++;
												}
												if (arrgame[1][1] == useritem1)
												{
													exam2d++;
												}
												if (arrgame[2][0] == useritem1)
												{
													exam2d++;
												}
												while (exam)
												{
													if (exam1 == 2)
													{
														move = 1;
													}
													else if (exam2 == 2)
													{
														move = 2;
													}
													else if (exam3 == 2)
													{
														move = 3;
													}
													else if (exam1s == 2)
													{
														move = 4;
													}
													else if (exam2s == 2)
													{
														move = 5;
													}
													else if (exam3s == 2)
													{
														move = 6;
													}
													else if (exam1d == 2)
													{
														move = 7;
													}
													else if (exam2d == 2)
													{
														move = 8;
													}
													else
													{
														move = 0;
													}
													switch (move)
													{
													case 1:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][0] != useritem1 && arrgame[i][0] != pcitem)
															{
																arrgame[i][0] = pcitem;
																exam = 0;
															}
															else
															{
																exam1++;
															}
														}
														break;
													case 2:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][1] != useritem1 && arrgame[i][1] != pcitem)
															{
																arrgame[i][1] = pcitem;
																exam = 0;
															}
															else
															{
																exam2++;
															}
														}
														break;
													case 3:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][2] != useritem1 && arrgame[i][2] != pcitem)
															{
																arrgame[i][2] = pcitem;
																exam = 0;
															}
															else
															{
																exam3++;
															}
														}
														break;
													case 4:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[0][i] != useritem1 && arrgame[0][i] != pcitem)
															{
																arrgame[0][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam1s++;
															}
														}
														break;
													case 5:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[1][i] != useritem1 && arrgame[1][i] != pcitem)
															{
																arrgame[1][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam2s++;
															}
														}
														break;
													case 6:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[2][i] != useritem1 && arrgame[2][i] != pcitem)
															{
																arrgame[2][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam3s++;
															}
														}
														break;
													case 7:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][i] != useritem1 && arrgame[i][i] != pcitem)
															{
																arrgame[i][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam1d++;
															}
														}
														break;
													case 8:
														if (arrgame[0][2] != useritem1 && arrgame[0][2] != pcitem)
														{
															arrgame[0][2] = pcitem;
															exam = 0;
														}
														else if (arrgame[1][1] != useritem1 && arrgame[1][1] != pcitem)
														{
															arrgame[1][1] = pcitem;
															exam = 0;
														}
														else if (arrgame[2][0] != useritem1 && arrgame[2][0] != pcitem)
														{
															arrgame[2][0] = pcitem;
															exam = 0;
														}
														else
														{
															exam2d++;
														}
														break;
													case 0:
														test = 0;
														if (arrgame[1][1] != useritem1 && arrgame[1][1] != pcitem)
														{
															arrgame[1][1] = pcitem;
														}
														else
														{
															for (int i = 0; i < 3; i++)
															{
																for (int j = 0; j < 3; j++)
																{
																	if (arrgame[i][j] != useritem1 && arrgame[i][j] != pcitem)
																	{
																		arrgame[i][j] = pcitem;
																		test++;
																		break;
																	}
																}
																if (test != 0)
																{
																	break;
																}
															}
														}
														exam = 0;
														break;
													}
												}
											}
											break;
										default:
											system("cls");
											cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
											Sleep(2000);
											g--;
											break;
										}
										for (int i = 0; i < 3; i++)
										{
											if (arrgame[i][0] == arrgame[i][1] && arrgame[i][1] == arrgame[i][2])
											{
												game = 0;
												if (arrgame[i][0] == useritem1)
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem1)
															{
																cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
													userwin1++;
													pclose++;
													draw++;
													Sleep(2000);
												}
												else
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem1)
															{
																cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
													pcwin++;
													userlose1++;
													draw++;
													Sleep(2000);
												}
											}
											if (arrgame[0][i] == arrgame[1][i] && arrgame[1][i] == arrgame[2][i])
											{
												game = 0;
												if (arrgame[0][i] == useritem1)
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem1)
															{
																cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
													userwin1++;
													pclose++;
													draw++;
													Sleep(2000);
												}
												else
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem1)
															{
																cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
													pcwin++;
													userlose1++;
													draw++;
													Sleep(2000);
												}

											}
										}
										if (arrgame[0][0] == arrgame[1][1] && arrgame[1][1] == arrgame[2][2])
										{
											game = 0;
											if (arrgame[0][0] == useritem1)
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem1)
														{
															cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
												userwin1++;
												pclose++;
												draw++;
												Sleep(2000);
											}
											else
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem1)
														{
															cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
												pcwin++;
												userlose1++;
												draw++;
												Sleep(2000);
											}
										}
										if (arrgame[0][2] == arrgame[1][1] && arrgame[1][1] == arrgame[2][0])
										{
											game = 0;
											if (arrgame[2][0] == useritem1)
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem1)
														{
															cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
												userwin1++;
												pclose++;
												draw++;
												Sleep(2000);
											}
											else
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem1)
														{
															cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
												pcwin++;
												userlose1++;
												draw++;
												Sleep(2000);
											}
										}
										g++;
										if (g >= 9 && draw == 0)
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem1)
													{
														cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == pcitem)
													{
														cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "Ничья! Попробуйте сыграть еще!" << endl;
											userdraw1++;
											pcdraw++;
											Sleep(2000);
										}

									}
									break;
								case 0:
									gamefirst = 0;
									break;
								default:
									break;
								}
							}
							break;
						case 2:
							gamefirst = 1;
							while (gamefirst)
							{
								system("cls");
								cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m+\x1b[0m]Выберите кто ходит первым\n";
								cout << "[\x1b[9" << color << "m1\x1b[0m] " << username2 << endl;
								cout << "[\x1b[9" << color << "m2\x1b[0m] Компьютер" << endl << endl;
								cout << "[\x1b[9" << color << "m0\x1b[0m] Вернуться назад\n";
								cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
								cin >> choice;
								switch (choice)
								{
								case 1:
									game = 1;
									g = 0;
									draw = 0;
									arrgame[0][0] = '1';
									arrgame[0][1] = '2';
									arrgame[0][2] = '3';
									arrgame[1][0] = '4';
									arrgame[1][1] = '5';
									arrgame[1][2] = '6';
									arrgame[2][0] = '7';
									arrgame[2][1] = '8';
									arrgame[2][2] = '9';
									while (game && g < 9)
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem2)
												{
													cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == pcitem)
												{
													cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										if (g % 2 == 0)
										{
											cout << "Ходит \x1b[9" << usercolor2 << "m" << username2 << "\x1b[0m: ";
											cin >> move;
										}
										else
										{
											cout << "Ходит \x1b[9" << pccolor << "mКомпьютер\x1b[0m: ";
											Sleep(1000);
											move = 0;
										}
										switch (move)
										{
										case 1:
											if (arrgame[0][0] == useritem2 || arrgame[0][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][0] = useritem2;
											break;
										case 2:
											if (arrgame[0][1] == useritem2 || arrgame[0][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][1] = useritem2;
											break;
										case 3:
											if (arrgame[0][2] == useritem2 || arrgame[0][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][2] = useritem2;
											break;
										case 4:
											if (arrgame[1][0] == useritem2 || arrgame[1][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][0] = useritem2;
											break;
										case 5:
											if (arrgame[1][1] == useritem2 || arrgame[1][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][1] = useritem2;
											break;
										case 6:
											if (arrgame[1][2] == useritem2 || arrgame[1][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][2] = useritem2;
											break;
										case 7:
											if (arrgame[2][0] == useritem2 || arrgame[2][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][0] = useritem2;
											break;
										case 8:
											if (arrgame[2][1] == useritem2 || arrgame[2][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][1] = useritem2;
											break;
										case 9:
											if (arrgame[2][2] == useritem2 || arrgame[2][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][2] = useritem2;
											break;
										case 0:
											test = 0;
											test2 = 1;
											exam = 1;
											exam1 = 0;
											exam2 = 0;
											exam3 = 0;
											exam1s = 0;
											exam2s = 0;
											exam3s = 0;
											exam1d = 0;
											exam2d = 0;

											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][0] == pcitem)
												{
													exam1++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][1] == pcitem)
												{
													exam2++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][2] == pcitem)
												{
													exam3++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[0][i] == pcitem)
												{
													exam1s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[1][i] == pcitem)
												{
													exam2s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[2][i] == pcitem)
												{
													exam3s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][i] == pcitem)
												{
													exam1d++;
												}
											}
											if (arrgame[0][2] == pcitem)
											{
												exam2d++;
											}
											if (arrgame[1][1] == pcitem)
											{
												exam2d++;
											}
											if (arrgame[2][0] == pcitem)
											{
												exam2d++;
											}
											while (exam)
											{
												if (exam1 == 2)
												{
													move = 1;
												}
												else if (exam2 == 2)
												{
													move = 2;
												}
												else if (exam3 == 2)
												{
													move = 3;
												}
												else if (exam1s == 2)
												{
													move = 4;
												}
												else if (exam2s == 2)
												{
													move = 5;
												}
												else if (exam3s == 2)
												{
													move = 6;
												}
												else if (exam1d == 2)
												{
													move = 7;
												}
												else if (exam2d == 2)
												{
													move = 8;
												}
												else
												{
													move = 0;
												}
												switch (move)
												{
												case 1:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][0] != useritem2 && arrgame[i][0] != pcitem)
														{
															arrgame[i][0] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1++;
														}
													}
													break;
												case 2:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][1] != useritem2 && arrgame[i][1] != pcitem)
														{
															arrgame[i][1] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam2++;
														}
													}
													break;
												case 3:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][2] != useritem2 && arrgame[i][2] != pcitem)
														{
															arrgame[i][2] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam3++;
														}
													}
													break;
												case 4:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[0][i] != useritem2 && arrgame[0][i] != pcitem)
														{
															arrgame[0][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1s++;
														}
													}
													break;
												case 5:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[1][i] != useritem2 && arrgame[1][i] != pcitem)
														{
															arrgame[1][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam2s++;
														}
													}
													break;
												case 6:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[2][i] != useritem2 && arrgame[2][i] != pcitem)
														{
															arrgame[2][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam3s++;
														}
													}
													break;
												case 7:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][i] != useritem2 && arrgame[i][i] != pcitem)
														{
															arrgame[i][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1d++;
														}
													}
													break;
												case 8:
													if (arrgame[0][2] != useritem2 && arrgame[0][2] != pcitem)
													{
														arrgame[0][2] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else if (arrgame[1][1] != useritem2 && arrgame[1][1] != pcitem)
													{
														arrgame[1][1] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else if (arrgame[2][0] != useritem2 && arrgame[2][0] != pcitem)
													{
														arrgame[2][0] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else
													{
														exam2d++;
													}
													break;
												case 0:
													test = 0;
													exam = 0;
													break;
												}
											}

											test = 0;
											exam = 1;
											exam1 = 0;
											exam2 = 0;
											exam3 = 0;
											exam1s = 0;
											exam2s = 0;
											exam3s = 0;
											exam1d = 0;
											exam2d = 0;

											if (test2 != 0)
											{
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][0] == useritem2)
													{
														exam1++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][1] == useritem2)
													{
														exam2++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][2] == useritem2)
													{
														exam3++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[0][i] == useritem2)
													{
														exam1s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[1][i] == useritem2)
													{
														exam2s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[2][i] == useritem2)
													{
														exam3s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][i] == useritem2)
													{
														exam1d++;
													}
												}
												if (arrgame[0][2] == useritem2)
												{
													exam2d++;
												}
												if (arrgame[1][1] == useritem2)
												{
													exam2d++;
												}
												if (arrgame[2][0] == useritem2)
												{
													exam2d++;
												}
												while (exam)
												{
													if (exam1 == 2)
													{
														move = 1;
													}
													else if (exam2 == 2)
													{
														move = 2;
													}
													else if (exam3 == 2)
													{
														move = 3;
													}
													else if (exam1s == 2)
													{
														move = 4;
													}
													else if (exam2s == 2)
													{
														move = 5;
													}
													else if (exam3s == 2)
													{
														move = 6;
													}
													else if (exam1d == 2)
													{
														move = 7;
													}
													else if (exam2d == 2)
													{
														move = 8;
													}
													else
													{
														move = 0;
													}
													switch (move)
													{
													case 1:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][0] != useritem2 && arrgame[i][0] != pcitem)
															{
																arrgame[i][0] = pcitem;
																exam = 0;
															}
															else
															{
																exam1++;
															}
														}
														break;
													case 2:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][1] != useritem2 && arrgame[i][1] != pcitem)
															{
																arrgame[i][1] = pcitem;
																exam = 0;
															}
															else
															{
																exam2++;
															}
														}
														break;
													case 3:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][2] != useritem2 && arrgame[i][2] != pcitem)
															{
																arrgame[i][2] = pcitem;
																exam = 0;
															}
															else
															{
																exam3++;
															}
														}
														break;
													case 4:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[0][i] != useritem2 && arrgame[0][i] != pcitem)
															{
																arrgame[0][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam1s++;
															}
														}
														break;
													case 5:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[1][i] != useritem2 && arrgame[1][i] != pcitem)
															{
																arrgame[1][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam2s++;
															}
														}
														break;
													case 6:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[2][i] != useritem2 && arrgame[2][i] != pcitem)
															{
																arrgame[2][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam3s++;
															}
														}
														break;
													case 7:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][i] != useritem2 && arrgame[i][i] != pcitem)
															{
																arrgame[i][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam1d++;
															}
														}
														break;
													case 8:
														if (arrgame[0][2] != useritem2 && arrgame[0][2] != pcitem)
														{
															arrgame[0][2] = pcitem;
															exam = 0;
														}
														else if (arrgame[1][1] != useritem2 && arrgame[1][1] != pcitem)
														{
															arrgame[1][1] = pcitem;
															exam = 0;
														}
														else if (arrgame[2][0] != useritem2 && arrgame[2][0] != pcitem)
														{
															arrgame[2][0] = pcitem;
															exam = 0;
														}
														else
														{
															exam2d++;
														}
														break;
													case 0:
														test = 0;
														if (arrgame[1][1] != useritem2 && arrgame[1][1] != pcitem)
														{
															arrgame[1][1] = pcitem;
														}
														else
														{
															for (int i = 0; i < 3; i++)
															{
																for (int j = 0; j < 3; j++)
																{
																	if (arrgame[i][j] != useritem2 && arrgame[i][j] != pcitem)
																	{
																		arrgame[i][j] = pcitem;
																		test++;
																		break;
																	}
																}
																if (test != 0)
																{
																	break;
																}
															}
														}
														exam = 0;
														break;
													}
												}
											}
											break;
										default:
											system("cls");
											cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
											Sleep(2000);
											g--;
											break;
										}
										for (int i = 0; i < 3; i++)
										{
											if (arrgame[i][0] == arrgame[i][1] && arrgame[i][1] == arrgame[i][2])
											{
												game = 0;
												if (arrgame[i][0] == useritem2)
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem2)
															{
																cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
													userwin2++;
													pclose++;
													draw++;
													Sleep(2000);
												}
												else
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem2)
															{
																cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
													pcwin++;
													userlose2++;
													draw++;
													Sleep(2000);
												}
											}
											if (arrgame[0][i] == arrgame[1][i] && arrgame[1][i] == arrgame[2][i])
											{
												game = 0;
												if (arrgame[0][i] == useritem2)
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem2)
															{
																cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
													userwin2++;
													pclose++;
													draw++;
													Sleep(2000);
												}
												else
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem2)
															{
																cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
													pcwin++;
													userlose2++;
													draw++;
													Sleep(2000);
												}

											}
										}
										if (arrgame[0][0] == arrgame[1][1] && arrgame[1][1] == arrgame[2][2])
										{
											game = 0;
											if (arrgame[0][0] == useritem2)
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem2)
														{
															cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
												userwin2++;
												pclose++;
												draw++;
												Sleep(2000);
											}
											else
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem2)
														{
															cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
												pcwin++;
												userlose2++;
												draw++;
												Sleep(2000);
											}
										}
										if (arrgame[0][2] == arrgame[1][1] && arrgame[1][1] == arrgame[2][0])
										{
											game = 0;
											if (arrgame[2][0] == useritem2)
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem2)
														{
															cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
												userwin2++;
												pclose++;
												draw++;
												Sleep(2000);
											}
											else
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem2)
														{
															cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
												pcwin++;
												userlose2++;
												draw++;
												Sleep(2000);
											}
										}
										g++;
										if (g >= 9 && draw == 0)
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem2)
													{
														cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == pcitem)
													{
														cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "Ничья! Попробуйте сыграть еще!" << endl;
											userdraw2++;
											pcdraw++;
											Sleep(2000);
										}

									}
									break;
								case 2:
									game = 1;
									g = 0;
									draw = 0;
									arrgame[0][0] = '1';
									arrgame[0][1] = '2';
									arrgame[0][2] = '3';
									arrgame[1][0] = '4';
									arrgame[1][1] = '5';
									arrgame[1][2] = '6';
									arrgame[2][0] = '7';
									arrgame[2][1] = '8';
									arrgame[2][2] = '9';
									while (game && g < 9)
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem2)
												{
													cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == pcitem)
												{
													cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										if (g % 2 != 0)
										{
											cout << "Ходит \x1b[9" << usercolor2 << "m" << username2 << "\x1b[0m: ";
											cin >> move;
										}
										else
										{
											cout << "Ходит \x1b[9" << pccolor << "mКомпьютер\x1b[0m: ";
											Sleep(1000);
											move = 0;
										}
										switch (move)
										{
										case 1:
											if (arrgame[0][0] == useritem2 || arrgame[0][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][0] = useritem2;
											break;
										case 2:
											if (arrgame[0][1] == useritem2 || arrgame[0][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][1] = useritem2;
											break;
										case 3:
											if (arrgame[0][2] == useritem2 || arrgame[0][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[0][2] = useritem2;
											break;
										case 4:
											if (arrgame[1][0] == useritem2 || arrgame[1][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][0] = useritem2;
											break;
										case 5:
											if (arrgame[1][1] == useritem2 || arrgame[1][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][1] = useritem2;
											break;
										case 6:
											if (arrgame[1][2] == useritem2 || arrgame[1][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[1][2] = useritem2;
											break;
										case 7:
											if (arrgame[2][0] == useritem2 || arrgame[2][0] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][0] = useritem2;
											break;
										case 8:
											if (arrgame[2][1] == useritem2 || arrgame[2][1] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][1] = useritem2;
											break;
										case 9:
											if (arrgame[2][2] == useritem2 || arrgame[2][2] == pcitem)
											{
												system("cls");
												cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
												Sleep(2000);
												g--;
												break;
											}
											arrgame[2][2] = useritem2;
											break;
										case 0:
											test = 0;
											test2 = 1;
											exam = 1;
											exam1 = 0;
											exam2 = 0;
											exam3 = 0;
											exam1s = 0;
											exam2s = 0;
											exam3s = 0;
											exam1d = 0;
											exam2d = 0;

											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][0] == pcitem)
												{
													exam1++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][1] == pcitem)
												{
													exam2++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][2] == pcitem)
												{
													exam3++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[0][i] == pcitem)
												{
													exam1s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[1][i] == pcitem)
												{
													exam2s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[2][i] == pcitem)
												{
													exam3s++;
												}
											}
											for (int i = 0; i < 3; i++)
											{
												if (arrgame[i][i] == pcitem)
												{
													exam1d++;
												}
											}
											if (arrgame[0][2] == pcitem)
											{
												exam2d++;
											}
											if (arrgame[1][1] == pcitem)
											{
												exam2d++;
											}
											if (arrgame[2][0] == pcitem)
											{
												exam2d++;
											}
											while (exam)
											{
												if (exam1 == 2)
												{
													move = 1;
												}
												else if (exam2 == 2)
												{
													move = 2;
												}
												else if (exam3 == 2)
												{
													move = 3;
												}
												else if (exam1s == 2)
												{
													move = 4;
												}
												else if (exam2s == 2)
												{
													move = 5;
												}
												else if (exam3s == 2)
												{
													move = 6;
												}
												else if (exam1d == 2)
												{
													move = 7;
												}
												else if (exam2d == 2)
												{
													move = 8;
												}
												else
												{
													move = 0;
												}
												switch (move)
												{
												case 1:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][0] != useritem2 && arrgame[i][0] != pcitem)
														{
															arrgame[i][0] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1++;
														}
													}
													break;
												case 2:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][1] != useritem2 && arrgame[i][1] != pcitem)
														{
															arrgame[i][1] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam2++;
														}
													}
													break;
												case 3:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][2] != useritem2 && arrgame[i][2] != pcitem)
														{
															arrgame[i][2] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam3++;
														}
													}
													break;
												case 4:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[0][i] != useritem2 && arrgame[0][i] != pcitem)
														{
															arrgame[0][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1s++;
														}
													}
													break;
												case 5:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[1][i] != useritem2 && arrgame[1][i] != pcitem)
														{
															arrgame[1][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam2s++;
														}
													}
													break;
												case 6:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[2][i] != useritem2 && arrgame[2][i] != pcitem)
														{
															arrgame[2][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam3s++;
														}
													}
													break;
												case 7:
													for (int i = 0; i < 3; i++)
													{
														if (arrgame[i][i] != useritem2 && arrgame[i][i] != pcitem)
														{
															arrgame[i][i] = pcitem;
															exam = 0;
															test2 = 0;
														}
														else
														{
															exam1d++;
														}
													}
													break;
												case 8:
													if (arrgame[0][2] != useritem2 && arrgame[0][2] != pcitem)
													{
														arrgame[0][2] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else if (arrgame[1][1] != useritem2 && arrgame[1][1] != pcitem)
													{
														arrgame[1][1] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else if (arrgame[2][0] != useritem2 && arrgame[2][0] != pcitem)
													{
														arrgame[2][0] = pcitem;
														exam = 0;
														test2 = 0;
													}
													else
													{
														exam2d++;
													}
													break;
												case 0:
													test = 0;
													exam = 0;
													break;
												}
											}

											test = 0;
											exam = 1;
											exam1 = 0;
											exam2 = 0;
											exam3 = 0;
											exam1s = 0;
											exam2s = 0;
											exam3s = 0;
											exam1d = 0;
											exam2d = 0;

											if (test2 != 0)
											{
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][0] == useritem2)
													{
														exam1++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][1] == useritem2)
													{
														exam2++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][2] == useritem2)
													{
														exam3++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[0][i] == useritem2)
													{
														exam1s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[1][i] == useritem2)
													{
														exam2s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[2][i] == useritem2)
													{
														exam3s++;
													}
												}
												for (int i = 0; i < 3; i++)
												{
													if (arrgame[i][i] == useritem2)
													{
														exam1d++;
													}
												}
												if (arrgame[0][2] == useritem2)
												{
													exam2d++;
												}
												if (arrgame[1][1] == useritem2)
												{
													exam2d++;
												}
												if (arrgame[2][0] == useritem2)
												{
													exam2d++;
												}
												while (exam)
												{
													if (exam1 == 2)
													{
														move = 1;
													}
													else if (exam2 == 2)
													{
														move = 2;
													}
													else if (exam3 == 2)
													{
														move = 3;
													}
													else if (exam1s == 2)
													{
														move = 4;
													}
													else if (exam2s == 2)
													{
														move = 5;
													}
													else if (exam3s == 2)
													{
														move = 6;
													}
													else if (exam1d == 2)
													{
														move = 7;
													}
													else if (exam2d == 2)
													{
														move = 8;
													}
													else
													{
														move = 0;
													}
													switch (move)
													{
													case 1:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][0] != useritem2 && arrgame[i][0] != pcitem)
															{
																arrgame[i][0] = pcitem;
																exam = 0;
															}
															else
															{
																exam1++;
															}
														}
														break;
													case 2:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][1] != useritem2 && arrgame[i][1] != pcitem)
															{
																arrgame[i][1] = pcitem;
																exam = 0;
															}
															else
															{
																exam2++;
															}
														}
														break;
													case 3:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][2] != useritem2 && arrgame[i][2] != pcitem)
															{
																arrgame[i][2] = pcitem;
																exam = 0;
															}
															else
															{
																exam3++;
															}
														}
														break;
													case 4:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[0][i] != useritem2 && arrgame[0][i] != pcitem)
															{
																arrgame[0][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam1s++;
															}
														}
														break;
													case 5:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[1][i] != useritem2 && arrgame[1][i] != pcitem)
															{
																arrgame[1][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam2s++;
															}
														}
														break;
													case 6:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[2][i] != useritem2 && arrgame[2][i] != pcitem)
															{
																arrgame[2][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam3s++;
															}
														}
														break;
													case 7:
														for (int i = 0; i < 3; i++)
														{
															if (arrgame[i][i] != useritem2 && arrgame[i][i] != pcitem)
															{
																arrgame[i][i] = pcitem;
																exam = 0;
															}
															else
															{
																exam1d++;
															}
														}
														break;
													case 8:
														if (arrgame[0][2] != useritem2 && arrgame[0][2] != pcitem)
														{
															arrgame[0][2] = pcitem;
															exam = 0;
														}
														else if (arrgame[1][1] != useritem2 && arrgame[1][1] != pcitem)
														{
															arrgame[1][1] = pcitem;
															exam = 0;
														}
														else if (arrgame[2][0] != useritem2 && arrgame[2][0] != pcitem)
														{
															arrgame[2][0] = pcitem;
															exam = 0;
														}
														else
														{
															exam2d++;
														}
														break;
													case 0:
														test = 0;
														if (arrgame[1][1] != useritem2 && arrgame[1][1] != pcitem)
														{
															arrgame[1][1] = pcitem;
														}
														else
														{
															for (int i = 0; i < 3; i++)
															{
																for (int j = 0; j < 3; j++)
																{
																	if (arrgame[i][j] != useritem2 && arrgame[i][j] != pcitem)
																	{
																		arrgame[i][j] = pcitem;
																		test++;
																		break;
																	}
																}
																if (test != 0)
																{
																	break;
																}
															}
														}
														exam = 0;
														break;
													}
												}
											}
											break;
										default:
											system("cls");
											cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
											Sleep(2000);
											g--;
											break;
										}
										for (int i = 0; i < 3; i++)
										{
											if (arrgame[i][0] == arrgame[i][1] && arrgame[i][1] == arrgame[i][2])
											{
												game = 0;
												if (arrgame[i][0] == useritem2)
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem2)
															{
																cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
													userwin2++;
													pclose++;
													draw++;
													Sleep(2000);
												}
												else
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem2)
															{
																cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
													pcwin++;
													userlose2++;
													draw++;
													Sleep(2000);
												}
											}
											if (arrgame[0][i] == arrgame[1][i] && arrgame[1][i] == arrgame[2][i])
											{
												game = 0;
												if (arrgame[0][i] == useritem2)
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem2)
															{
																cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
													userwin2++;
													pclose++;
													draw++;
													Sleep(2000);
												}
												else
												{
													system("cls");
													cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
													cout << " -----------" << endl << "| ";
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															if (arrgame[i][j] == useritem2)
															{
																cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else if (arrgame[i][j] == pcitem)
															{
																cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
															}
															else
															{
																cout << arrgame[i][j] << " | ";
															}

														}
														cout << endl << " -----------" << endl << "| ";
													}
													cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
													pcwin++;
													userlose2++;
													draw++;
													Sleep(2000);
												}

											}
										}
										if (arrgame[0][0] == arrgame[1][1] && arrgame[1][1] == arrgame[2][2])
										{
											game = 0;
											if (arrgame[0][0] == useritem2)
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem2)
														{
															cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
												userwin2++;
												pclose++;
												draw++;
												Sleep(2000);
											}
											else
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem1)
														{
															cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
												pcwin++;
												userlose2++;
												draw++;
												Sleep(2000);
											}
										}
										if (arrgame[0][2] == arrgame[1][1] && arrgame[1][1] == arrgame[2][0])
										{
											game = 0;
											if (arrgame[2][0] == useritem2)
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem2)
														{
															cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
												userwin2++;
												pclose++;
												draw++;
												Sleep(2000);
											}
											else
											{
												system("cls");
												cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
												cout << " -----------" << endl << "| ";
												for (int i = 0; i < 3; i++)
												{
													for (int j = 0; j < 3; j++)
													{
														if (arrgame[i][j] == useritem2)
														{
															cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else if (arrgame[i][j] == pcitem)
														{
															cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
														}
														else
														{
															cout << arrgame[i][j] << " | ";
														}

													}
													cout << endl << " -----------" << endl << "| ";
												}
												cout << "\x1b[92mПоздравляем! Победил Компьютер!!!\x1b[0m";
												pcwin++;
												userlose2++;
												draw++;
												Sleep(2000);
											}
										}
										g++;
										if (g >= 9 && draw == 0)
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem2)
													{
														cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == pcitem)
													{
														cout << "\x1b[9" << pccolor << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "Ничья! Попробуйте сыграть еще!" << endl;
											userdraw2++;
											pcdraw++;
											Sleep(2000);
										}

									}
									break;
								case 0:
									gamefirst = 0;
									break;
								default:
									break;
								}
							}
							break;
						case 0:
							gamecomp = 0;
							break;
						default:
							break;
						}
					}
					break;
				case 2:
					gamefirst = 1;
					while (gamefirst)
					{
						system("cls");
						cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
						cout << "[\x1b[9" << color << "m+\x1b[0m]Выберите кто ходит первым\n";
						cout << "[\x1b[9" << color << "m1\x1b[0m] " << username1 << endl;
						cout << "[\x1b[9" << color << "m2\x1b[0m] " << username2 << endl << endl;
						cout << "[\x1b[9" << color << "m0\x1b[0m] Вернуться назад\n";
						cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
						cin >> choice;
						switch (choice)
						{
						case 1:
							draw = 0;
							game = 1;
							g = 0;
							arrgame[0][0] = '1';
							arrgame[0][1] = '2';
							arrgame[0][2] = '3';
							arrgame[1][0] = '4';
							arrgame[1][1] = '5';
							arrgame[1][2] = '6';
							arrgame[2][0] = '7';
							arrgame[2][1] = '8';
							arrgame[2][2] = '9';
							while (game && g < 9)
							{
								system("cls");
								cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
								cout << " -----------" << endl << "| ";
								for (int i = 0; i < 3; i++)
								{
									for (int j = 0; j < 3; j++)
									{
										if (arrgame[i][j] == useritem1)
										{
											cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
										}
										else if (arrgame[i][j] == useritem2)
										{
											cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
										}
										else
										{
											cout << arrgame[i][j] << " | ";
										}

									}
									cout << endl << " -----------" << endl << "| ";
								}
								if (g % 2 == 0)
								{
									cout << "Ходит \x1b[9" << usercolor1 << "m" << username1 << "\x1b[0m: ";
									cin >> move;
								}
								else
								{
									cout << "Ходит \x1b[9" << usercolor2 << "m" << username2 << "\x1b[0m: ";
									cin >> move;
								}
								switch (move)
								{
								case 1:
									if (arrgame[0][0] == useritem1 || arrgame[0][0] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 == 0)
									{
										arrgame[0][0] = useritem1;
									}
									else
									{
										arrgame[0][0] = useritem2;
									}
									break;
								case 2:
									if (arrgame[0][1] == useritem1 || arrgame[0][1] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 == 0)
									{
										arrgame[0][1] = useritem1;
									}
									else
									{
										arrgame[0][1] = useritem2;
									}
									break;
								case 3:
									if (arrgame[0][2] == useritem1 || arrgame[0][2] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 == 0)
									{
										arrgame[0][2] = useritem1;
									}
									else
									{
										arrgame[0][2] = useritem2;
									}
									break;
								case 4:
									if (arrgame[1][0] == useritem1 || arrgame[1][0] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 == 0)
									{
										arrgame[1][0] = useritem1;
									}
									else
									{
										arrgame[1][0] = useritem2;
									}
									break;
								case 5:
									if (arrgame[1][1] == useritem1 || arrgame[1][1] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 == 0)
									{
										arrgame[1][1] = useritem1;
									}
									else
									{
										arrgame[1][1] = useritem2;
									}
									break;
								case 6:
									if (arrgame[1][2] == useritem1 || arrgame[1][2] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 == 0)
									{
										arrgame[1][2] = useritem1;
									}
									else
									{
										arrgame[1][2] = useritem2;
									}
									break;
								case 7:
									if (arrgame[2][0] == useritem1 || arrgame[2][0] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 == 0)
									{
										arrgame[2][0] = useritem1;
									}
									else
									{
										arrgame[2][0] = useritem2;
									}
									break;
								case 8:
									if (arrgame[2][1] == useritem1 || arrgame[2][1] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 == 0)
									{
										arrgame[2][1] = useritem1;
									}
									else
									{
										arrgame[2][1] = useritem2;
									}
									break;
								case 9:
									if (arrgame[2][2] == useritem1 || arrgame[2][2] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 == 0)
									{
										arrgame[2][2] = useritem1;
									}
									else
									{
										arrgame[2][2] = useritem2;
									}
									break;
								default:
									system("cls");
									cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
									Sleep(2000);
									g--;
									break;
								}

								for (int i = 0; i < 3; i++)
								{
									if (arrgame[i][0] == arrgame[i][1] && arrgame[i][1] == arrgame[i][2])
									{
										game = 0;
										if (arrgame[i][0] == useritem1)
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem1)
													{
														cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == useritem2)
													{
														cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
											userwin1++;
											userlose2++;
											draw++;
											Sleep(2000);
										}
										else
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem1)
													{
														cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == useritem2)
													{
														cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
											userwin2++;
											userlose1++;
											draw++;
											Sleep(2000);
										}
									}
									if (arrgame[0][i] == arrgame[1][i] && arrgame[1][i] == arrgame[2][i])
									{
										game = 0;
										if (arrgame[0][i] == useritem1)
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem1)
													{
														cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == useritem2)
													{
														cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
											userwin1++;
											userlose2++;
											draw++;
											Sleep(2000);
										}
										else
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem1)
													{
														cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == useritem2)
													{
														cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
											userwin2++;
											userlose1++;
											draw++;
											Sleep(2000);
										}

									}
								}
								if (arrgame[0][0] == arrgame[1][1] && arrgame[1][1] == arrgame[2][2])
								{
									game = 0;
									if (arrgame[0][0] == useritem1)
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem1)
												{
													cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == useritem2)
												{
													cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
										userwin1++;
										userlose2++;
										draw++;
										Sleep(2000);
									}
									else
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem1)
												{
													cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == useritem2)
												{
													cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
										userwin2++;
										userlose1++;
										draw++;
										Sleep(2000);
									}
								}
								if (arrgame[0][2] == arrgame[1][1] && arrgame[1][1] == arrgame[2][0])
								{
									game = 0;
									if (arrgame[2][0] == useritem1)
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem1)
												{
													cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == useritem2)
												{
													cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
										userwin1++;
										userlose2++;
										draw++;
										Sleep(2000);
									}
									else
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem1)
												{
													cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == useritem2)
												{
													cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
										userwin2++;
										userlose1++;
										draw++;
										Sleep(2000);
									}
								}
								g++;
								if (g >= 9 && draw == 0)
								{
									system("cls");
									cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
									cout << " -----------" << endl << "| ";
									for (int i = 0; i < 3; i++)
									{
										for (int j = 0; j < 3; j++)
										{
											if (arrgame[i][j] == useritem1)
											{
												cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
											}
											else if (arrgame[i][j] == useritem2)
											{
												cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
											}
											else
											{
												cout << arrgame[i][j] << " | ";
											}

										}
										cout << endl << " -----------" << endl << "| ";
									}
									cout << "Ничья! Попробуйте сыграть еще!" << endl;
									userdraw1++;
									userdraw2++;
									Sleep(2000);
								}
							}

							Sleep(1000);
							break;
						case 2:
							draw = 0;
							game = 1;
							g = 0;
							arrgame[0][0] = '1';
							arrgame[0][1] = '2';
							arrgame[0][2] = '3';
							arrgame[1][0] = '4';
							arrgame[1][1] = '5';
							arrgame[1][2] = '6';
							arrgame[2][0] = '7';
							arrgame[2][1] = '8';
							arrgame[2][2] = '9';
							while (game && g < 9)
							{
								system("cls");
								cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
								cout << " -----------" << endl << "| ";
								for (int i = 0; i < 3; i++)
								{
									for (int j = 0; j < 3; j++)
									{
										if (arrgame[i][j] == useritem1)
										{
											cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
										}
										else if (arrgame[i][j] == useritem2)
										{
											cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
										}
										else
										{
											cout << arrgame[i][j] << " | ";
										}

									}
									cout << endl << " -----------" << endl << "| ";
								}
								if (g % 2 != 0)
								{
									cout << "Ходит \x1b[9" << usercolor1 << "m" << username1 << "\x1b[0m: ";
									cin >> move;
								}
								else
								{
									cout << "Ходит \x1b[9" << usercolor2 << "m" << username2 << "\x1b[0m: ";
									cin >> move;
								}
								switch (move)
								{
								case 1:
									if (arrgame[0][0] == useritem1 || arrgame[0][0] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 != 0)
									{
										arrgame[0][0] = useritem1;
									}
									else
									{
										arrgame[0][0] = useritem2;
									}
									break;
								case 2:
									if (arrgame[0][1] == useritem1 || arrgame[0][1] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 != 0)
									{
										arrgame[0][1] = useritem1;
									}
									else
									{
										arrgame[0][1] = useritem2;
									}
									break;
								case 3:
									if (arrgame[0][2] == useritem1 || arrgame[0][2] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 != 0)
									{
										arrgame[0][2] = useritem1;
									}
									else
									{
										arrgame[0][2] = useritem2;
									}
									break;
								case 4:
									if (arrgame[1][0] == useritem1 || arrgame[1][0] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 != 0)
									{
										arrgame[1][0] = useritem1;
									}
									else
									{
										arrgame[1][0] = useritem2;
									}
									break;
								case 5:
									if (arrgame[1][1] == useritem1 || arrgame[1][1] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 != 0)
									{
										arrgame[1][1] = useritem1;
									}
									else
									{
										arrgame[1][1] = useritem2;
									}
									break;
								case 6:
									if (arrgame[1][2] == useritem1 || arrgame[1][2] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 != 0)
									{
										arrgame[1][2] = useritem1;
									}
									else
									{
										arrgame[1][2] = useritem2;
									}
									break;
								case 7:
									if (arrgame[2][0] == useritem1 || arrgame[2][0] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 != 0)
									{
										arrgame[2][0] = useritem1;
									}
									else
									{
										arrgame[2][0] = useritem2;
									}
									break;
								case 8:
									if (arrgame[2][1] == useritem1 || arrgame[2][1] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 != 0)
									{
										arrgame[2][1] = useritem1;
									}
									else
									{
										arrgame[2][1] = useritem2;
									}
									break;
								case 9:
									if (arrgame[2][2] == useritem1 || arrgame[2][2] == useritem2)
									{
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										g--;
										break;
									}
									if (g % 2 != 0)
									{
										arrgame[2][2] = useritem1;
									}
									else
									{
										arrgame[2][2] = useritem2;
									}
									break;
								default:
									system("cls");
									cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
									Sleep(2000);
									g--;
									break;
								}

								for (int i = 0; i < 3; i++)
								{
									if (arrgame[i][0] == arrgame[i][1] && arrgame[i][1] == arrgame[i][2])
									{
										game = 0;
										if (arrgame[i][0] == useritem1)
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem1)
													{
														cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == useritem2)
													{
														cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
											userwin1++;
											userlose2++;
											draw++;
											Sleep(2000);
										}
										else
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem1)
													{
														cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == useritem2)
													{
														cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
											userwin2++;
											userlose1++;
											draw++;
											Sleep(2000);
										}
									}
									if (arrgame[0][i] == arrgame[1][i] && arrgame[1][i] == arrgame[2][i])
									{
										game = 0;
										if (arrgame[0][i] == useritem1)
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem1)
													{
														cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == useritem2)
													{
														cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
											userwin1++;
											userlose2++;
											draw++;
											Sleep(2000);
										}
										else
										{
											system("cls");
											cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
											cout << " -----------" << endl << "| ";
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													if (arrgame[i][j] == useritem1)
													{
														cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else if (arrgame[i][j] == useritem2)
													{
														cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
													}
													else
													{
														cout << arrgame[i][j] << " | ";
													}

												}
												cout << endl << " -----------" << endl << "| ";
											}
											cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
											userwin2++;
											userlose1++;
											draw++;
											Sleep(2000);
										}

									}
								}
								if (arrgame[0][0] == arrgame[1][1] && arrgame[1][1] == arrgame[2][2])
								{
									game = 0;
									if (arrgame[0][0] == useritem1)
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem1)
												{
													cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == useritem2)
												{
													cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
										userwin1++;
										userlose2++;
										draw++;
										Sleep(2000);
									}
									else
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem1)
												{
													cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == useritem2)
												{
													cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
										userwin2++;
										userlose1++;
										draw++;
										Sleep(2000);
									}
								}
								if (arrgame[0][2] == arrgame[1][1] && arrgame[1][1] == arrgame[2][0])
								{
									game = 0;
									if (arrgame[2][0] == useritem1)
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem1)
												{
													cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == useritem2)
												{
													cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										cout << "\x1b[92mПоздравляем! Победил " << username1 << "!!!\x1b[0m";
										userwin1++;
										userlose2++;
										draw++;
										Sleep(2000);
									}
									else
									{
										system("cls");
										cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
										cout << " -----------" << endl << "| ";
										for (int i = 0; i < 3; i++)
										{
											for (int j = 0; j < 3; j++)
											{
												if (arrgame[i][j] == useritem1)
												{
													cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else if (arrgame[i][j] == useritem2)
												{
													cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
												}
												else
												{
													cout << arrgame[i][j] << " | ";
												}

											}
											cout << endl << " -----------" << endl << "| ";
										}
										cout << "\x1b[92mПоздравляем! Победил " << username2 << "!!!\x1b[0m";
										userwin2++;
										userlose1++;
										draw++;
										Sleep(2000);
									}
								}
								g++;
								if (g >= 9 && draw == 0)
								{
									system("cls");
									cout << "\x1b[9" << color << "m\"Крестики-Нолики\"\x1b[0m\n\n";
									cout << " -----------" << endl << "| ";
									for (int i = 0; i < 3; i++)
									{
										for (int j = 0; j < 3; j++)
										{
											if (arrgame[i][j] == useritem1)
											{
												cout << "\x1b[9" << usercolor1 << "m" << arrgame[i][j] << "\x1b[0m | ";
											}
											else if (arrgame[i][j] == useritem2)
											{
												cout << "\x1b[9" << usercolor2 << "m" << arrgame[i][j] << "\x1b[0m | ";
											}
											else
											{
												cout << arrgame[i][j] << " | ";
											}

										}
										cout << endl << " -----------" << endl << "| ";
									}
									cout << "Ничья! Попробуйте сыграть еще!" << endl;
									userdraw1++;
									userdraw2++;
									Sleep(2000);
								}
							}

							Sleep(1000);
							break;
						case 0:
							gamefirst = 0;
							break;
						default:
							system("cls");
							cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
							Sleep(2000);
							break;
						}

					}
					break;
				case 0:
					gamesetting = 0;
					break;
				default:
					system("cls");
					cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
					Sleep(2000);
					break;
				}
			}

			break;
		case 2:
			system("cls");
			userpoint1 = userwin1 * 5 - userlose1 * 6 - userdraw1 * 1.2;
			userpoint2 = userwin2 * 5 - userlose2 * 6 - userdraw2 * 1.2;
			pcpoint = pcwin * 5 - pclose * 6 - pcdraw * 1.2;
			cout << "\x1b[9" << color << "m\"СТАТИСТИКА\"\x1b[0m\n\n";
			cout << "\t\t\t\x1b[92mW \x1b[91m\tL \t\x1b[90mD \x1b[0m\t|\tОчки" << endl;
			cout << "[\x1b[9" << color << "m+\x1b[0m] | " << username1 << "\t\t" << userwin1 << "\t" << userlose1 << "\t" << userdraw1 << "\t|\t" << userpoint1 << endl;
			cout << "[\x1b[9" << color << "m+\x1b[0m] | " << username2 << "\t\t" << userwin2 << "\t" << userlose2 << "\t" << userdraw2 << "\t|\t" << userpoint2 << endl;
			cout << "[\x1b[9" << color << "m+\x1b[0m] | Компьютер\t\t" << pcwin << "\t" << pclose << "\t" << pcdraw << "\t|\t" << pcpoint << endl << endl;
			cout << "[\x1b[9" << color << "m0\x1b[0m] Вернуться назад\n";
			cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
			cin >> choice;
			break;
		case 3:
			setting = 1;
			while (setting)
			{
				system("cls");
				cout << "\x1b[9" << color << "m\"НАСТРОЙКИ\"\x1b[0m\n\n";
				cout << "[\x1b[9" << color << "m1\x1b[0m] Настройка компьютера\n";
				cout << "[\x1b[9" << color << "m2\x1b[0m] Настройки игрока\n";
				cout << "[\x1b[9" << color << "m3\x1b[0m] Цвет интерфейса\n";
				cout << "[\x1b[9" << color << "m0\x1b[0m] Выйти в главное меню\n";
				cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
				cin >> choice;
				switch (choice)
				{
				case 1:
					pcsetting = 1;
					while (pcsetting)
					{
						system("cls");
						cout << "\x1b[9" << color << "m\"Настройка компьютера\"\x1b[0m\n\n";
						cout << "[\x1b[9" << color << "m1\x1b[0m] Фигура\t: " << pcitem << endl;
						cout << "[\x1b[9" << color << "m2\x1b[0m] Цвет\t: \x1b[9" << pccolor << "m" << pccolorname << "\x1b[0m\n";
						cout << "[\x1b[9" << color << "m0\x1b[0m] Вернуться назад\n";
						cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
						cin >> choice;
						switch (choice)
						{
						case 1:
							system("cls");
							cout << "Введите желаемую фигуру: ";
							cin >> pcitem;
							break;
						case 2:
							system("cls");
							cout << "\x1b[91m[1] Красный\x1b[0m\n";
							cout << "\x1b[92m[2] Зеленый\x1b[0m\n";
							cout << "\x1b[93m[3] Желтый\x1b[0m\n";
							cout << "\x1b[94m[4] Синий\x1b[0m\n";
							cout << "\x1b[95m[5] Фиолетовый\x1b[0m\n";
							cout << "\x1b[96m[6] Лазурный\x1b[0m\n";
							cout << "Выберите цвет интерфейса: ";
							cin >> pccolor;
							switch (pccolor)
							{
							case 1:
								pccolorname = "красный";
								break;
							case 2:
								pccolorname = "зеленый";
								break;
							case 3:
								pccolorname = "желтый";
								break;
							case 4:
								pccolorname = "синий";
								break;
							case 5:
								pccolorname = "фиолетовый";
								break;
							case 6:
								pccolorname = "лазурный";
								break;
							default:
								system("cls");
								cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
								Sleep(2000);
								break;
							}
							break;
						case 0:
							pcsetting = 0;
							break;
						default:
							system("cls");
							cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
							Sleep(2000);
							break;
						}
					}
					break;
				case 2:
					usersetting = 1;
					while (usersetting)
					{
						system("cls");
						cout << "\x1b[9" << color << "m\"Настройки игрока\"\x1b[0m\n\n";
						cout << "[\x1b[9" << color << "m1\x1b[0m]\x1b[9" << usercolor1 << "m " << username1 << "\x1b[0m" << endl;
						cout << "[\x1b[9" << color << "m2\x1b[0m]\x1b[9" << usercolor2 << "m " << username2 << "\x1b[0m" << endl;
						cout << "[\x1b[9" << color << "m0\x1b[0m] Вернуться назад\n";
						cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
						cin >> choice;
						switch (choice)
						{
						case 1:
							usersetting1 = 1;
							while (usersetting1)
							{
								system("cls");
								cout << "\x1b[9" << color << "m\"Настройка " << username1 << "\"\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m1\x1b[0m] Ник\t\t: " << username1 << endl;
								cout << "[\x1b[9" << color << "m2\x1b[0m] Фигура\t: " << useritem1 << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] Цвет\t: \x1b[9" << usercolor1 << "m" << usercolorname1 << "\x1b[0m\n";
								cout << "[\x1b[9" << color << "m0\x1b[0m] Вернуться назад\n";
								cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
								cin >> choice;
								switch (choice)
								{
								case 1:
									system("cls");
									cout << "Введите новый ник: ";
									cin >> username1;
									break;
								case 2:
									system("cls");
									cout << "Введите желаемую фигуру: ";
									cin >> useritem1;
									break;
								case 3:
									system("cls");
									cout << "\x1b[91m[1] Красный\x1b[0m\n";
									cout << "\x1b[92m[2] Зеленый\x1b[0m\n";
									cout << "\x1b[93m[3] Желтый\x1b[0m\n";
									cout << "\x1b[94m[4] Синий\x1b[0m\n";
									cout << "\x1b[95m[5] Фиолетовый\x1b[0m\n";
									cout << "\x1b[96m[6] Лазурный\x1b[0m\n";
									cout << "Выберите цвет интерфейса: ";
									cin >> usercolor1;
									switch (usercolor1)
									{
									case 1:
										usercolorname1 = "красный";
										break;
									case 2:
										usercolorname1 = "зеленый";
										break;
									case 3:
										usercolorname1 = "желтый";
										break;
									case 4:
										usercolorname1 = "синий";
										break;
									case 5:
										usercolorname1 = "фиолетовый";
										break;
									case 6:
										usercolorname1 = "лазурный";
										break;
									default:
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										break;
									}
									break;
								case 0:
									usersetting1 = 0;
									break;
								default:
									system("cls");
									cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
									Sleep(2000);
									break;
								}
							}
							break;
						case 2:
							usersetting2 = 1;
							while (usersetting2)
							{
								system("cls");
								cout << "\x1b[9" << color << "m\"Настройка " << username2 << "\"\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m1\x1b[0m] Ник\t\t: " << username2 << endl;
								cout << "[\x1b[9" << color << "m2\x1b[0m] Фигура\t: " << useritem2 << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] Цвет\t: \x1b[9" << usercolor2 << "m" << usercolorname2 << "\x1b[0m\n";
								cout << "[\x1b[9" << color << "m0\x1b[0m] Вернуться назад\n";
								cout << "[\x1b[9" << color << "m+\x1b[0m] Введите значение: ";
								cin >> choice;
								switch (choice)
								{
								case 1:
									system("cls");
									cout << "Введите новый ник: ";
									cin >> username2;
									break;
								case 2:
									system("cls");
									cout << "Введите желаемую фигуру: ";
									cin >> useritem2;
									break;
								case 3:
									system("cls");
									cout << "\x1b[91m[1] Красный\x1b[0m\n";
									cout << "\x1b[92m[2] Зеленый\x1b[0m\n";
									cout << "\x1b[93m[3] Желтый\x1b[0m\n";
									cout << "\x1b[94m[4] Синий\x1b[0m\n";
									cout << "\x1b[95m[5] Фиолетовый\x1b[0m\n";
									cout << "\x1b[96m[6] Лазурный\x1b[0m\n";
									cout << "Выберите цвет интерфейса: ";
									cin >> usercolor2;
									switch (usercolor2)
									{
									case 1:
										usercolorname2 = "красный";
										break;
									case 2:
										usercolorname2 = "зеленый";
										break;
									case 3:
										usercolorname2 = "желтый";
										break;
									case 4:
										usercolorname2 = "синий";
										break;
									case 5:
										usercolorname2 = "фиолетовый";
										break;
									case 6:
										usercolorname2 = "лазурный";
										break;
									default:
										system("cls");
										cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
										Sleep(2000);
										break;
									}
									break;
								case 0:
									usersetting2 = 0;
									break;
								default:
									system("cls");
									cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
									Sleep(2000);
									break;
								}
							}
							break;
						case 0:
							usersetting = 0;
							break;
						default:
							system("cls");
							cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
							Sleep(2000);
							break;
						}
					}
					break;
				case 3:
					system("cls");
					cout << "\x1b[91m[1] Красный\x1b[0m\n";
					cout << "\x1b[92m[2] Зеленый\x1b[0m\n";
					cout << "\x1b[93m[3] Желтый\x1b[0m\n";
					cout << "\x1b[94m[4] Синий\x1b[0m\n";
					cout << "\x1b[95m[5] Фиолетовый\x1b[0m\n";
					cout << "\x1b[96m[6] Лазурный\x1b[0m\n";
					cout << "Выберите цвет интерфейса: ";
					cin >> color;
					break;
				case 0:
					setting = 0;
					break;
				default:
					system("cls");
					cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
					Sleep(2000);
					break;
				}
			}
			break;
		case 0:
			return 0;
			break;
		default:
			system("cls");
			cout << "\x1b[91mНеверное значение! Попробуй еще раз!\x1b[0m";
			Sleep(2000);
			break;
		}

	}

	int _; cin >> _;
	return 0;
}