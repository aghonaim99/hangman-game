/////////////////////////////////////////how to play
			if (menu == "mainmenu")
			{
				if (isSpriteHover(b3.getGlobalBounds(), mousePos) == true)
				{
					if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
					{
						if (pic3 == "Textures/Buttons/h2p.png")
						{
							cout << "How to play " << endl;
							menu = "htp";
						}

					}

				}
			}
			/////////////////////////////////////////////////start game
			if (menu == "mainmenu")
			{
				if (isSpriteHover(b5.getGlobalBounds(), mousePos) == true)
				{
					if (evnt.type == Event::MouseButtonPressed && evnt.mouseButton.button == Mouse::Left)
					{
						pic4 = "Textures/Buttons/startclicked.png";
						startpic.loadFromFile(pic4);
					}

					if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
					{
						if (pic4 == "Textures/Buttons/startclicked.png")
						{
							pic4 = "Textures/Buttons/startgame.png";
							startpic.loadFromFile(pic4);
							cout << "start game  " << endl;
							menu = "start";
						}

					}

				}
			}
			/////////////////////////////////////////////////back from htp
			if (menu == "htp")
			{
				if (isSpriteHover(bb.getGlobalBounds(), mousePos) == true)
				{
					if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
					{
						if (p2 == "Textures/Buttons/back.png")
						{
							cout << "back to main menu " << endl;
							menu = "mainmenu";
						}

					}

				}
			}
			/////////////////////////////////////////////////////easy button
			if (menu == "start")
			{
				if (isSpriteHover(b6.getGlobalBounds(), mousePos) == true)
				{
					if (evnt.type == Event::MouseButtonPressed && evnt.mouseButton.button == Mouse::Left)
					{
						pic5 = "Textures/Buttons/easyclicked.png";
						easypic.loadFromFile(pic5);
					}
					if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
					{
						if (pic5 == "Textures/Buttons/easyclicked.png")
						{
							pic5 = "Textures/Buttons/easy.png";
							easypic.loadFromFile(pic5);
							cout << "easy " << endl;
							menu = "easy";
						}

					}

				}

				////////////////////////////////////////////////////medium button

				if (isSpriteHover(b7.getGlobalBounds(), mousePos) == true)
				{
					if (evnt.type == Event::MouseButtonPressed && evnt.mouseButton.button == Mouse::Left)
					{
						pic6 = "Textures/Buttons/mediumclicked.png";
						mediumpic.loadFromFile(pic6);
					}
					if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
					{
						if (pic6 == "Textures/Buttons/mediumclicked.png")
						{
							pic6 = "Textures/Buttons/medium.png";
							mediumpic.loadFromFile(pic6);
							cout << "medium " << endl;
							menu = "medium";
						}

					}

				}


				///////////////////////////////////////////////////hard button

				if (isSpriteHover(b8.getGlobalBounds(), mousePos) == true)
				{
					if (evnt.type == Event::MouseButtonPressed && evnt.mouseButton.button == Mouse::Left)
					{
          pic7 = "Textures/Buttons/hardclicked.png";
						hardpic.loadFromFile(pic7);
					}
					if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
					{
						if (pic7 == "Textures/Buttons/hardclicked.png")
						{
							pic7 = "Textures/Buttons/hard.png";
							hardpic.loadFromFile(pic7);
							cout << "hard " << endl;
							menu = "hard";
						}

					}

				}

				//////////////////////////////////////////////////back from start

				if (isSpriteHover(bb.getGlobalBounds(), mousePos) == true)
				{
					if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
					{
						if (p2 == "Textures/Buttons/back.png")
						{
							cout << "back to main menu " << endl;
							menu = "mainmenu";
						}

					}

				}
			}
			///////////////////////////////////////////////// easy
			if (menu == "easy")
			{
				if (isSpriteHover(randBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						r = random(menu);
						categories[0] = r;
						C = 0;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}
				//Movies button
				else if (isSpriteHover(mBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						m = movies(menu);
						categories[1] = m;
						C = 1;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}

				//Sports button
				else if (isSpriteHover(sBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						s = sport(menu);
						categories[2] = s;
						C = 2;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}

				//TV button
				else if (isSpriteHover(tvBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						t = tvs(menu);
						categories[3] = t;
						C = 3;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}
				//////////////////////////////////////back to start

				if (isSpriteHover(bb.getGlobalBounds(), mousePos) == true)
				{
					if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
					{
						if (p2 == "Textures/Buttons/back.png")
						{
							cout << "back to start " << endl;
							menu = "start";
						}

					}

				}

			}
			/////////////////////////////////////////////////////////////////////////////////////////////////////////
			if (menu == "medium")
			{
				if (isSpriteHover(randBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{

						r =random(menu);
						categories[0] = r;
						C = 0;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}
				//Movies button
				else if (isSpriteHover(mBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						m = movies(menu);
						categories[1] = m;
						C = 1;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}

				//Sports button
				else if (isSpriteHover(sBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						s = sport(menu);
						categories[2] = s;
						C = 2;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}

				//TV button
				else if (isSpriteHover(tvBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						t = tvs(menu);
						categories[3] = t;
						C = 3;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}
				//////////////////////////////////////back to start

				if (isSpriteHover(bb.getGlobalBounds(), mousePos) == true)
				{
					if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
					{
						if (p2 == "Textures/Buttons/back.png")
						{
							cout << "back to start " << endl;
							menu = "start";
						}

					}

				}

			}
			if (menu == "hard")
			{
				if (isSpriteHover(randBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{

						r = random(menu);
						categories[0] = r;
						C = 0;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}

				//Movies button
				else if (isSpriteHover(mBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{

						m = movies(menu);
						categories[1] = m;
						C = 1;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}

				//Sports button
				else if (isSpriteHover(sBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						s = sport(menu);
						categories[2] = s;
						C = 2;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}
				////////////////////////tv button
				else if (isSpriteHover(tvBtn.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						t = tvs(menu);
						categories[3] = t;
						C = 3;
						menu = "game";
						enterHere = true;
						words[0] = categories[C][WordCntr];
						Correct = words[0].size();
					}
				}
				if (isSpriteHover(bb.getGlobalBounds(), mousePos) == true)
				{
					if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
					{
						if (p2 == "Textures/Buttons/back.png")
						{
							cout << "back to start " << endl;
							menu = "start";
						}

					}

				}

			}
			if (menu == "lostScreen")
			{
				if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
				{
					bg = "Textures/bg.png";
					menu = "mainmenu";
				}
			}
			if (menu == "winScreen")
			{
				if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
				{
					bg = "Textures/bg.png";
					menu = "mainmenu";
				}
			}

			if (menu == "game")
			{
				bg = "Textures/bg - Copy.png";
				background.loadFromFile(bg);
				
				/////////////// LOOP
				if (isSpriteHover(A_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'a';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(B_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'b';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(C_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'c';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(D_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'd';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(E_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'e';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(F_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'f';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(G_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'g';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(H_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'h';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(I_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'i';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(J_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'j';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(K_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'k';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(L_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'l';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(M_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'm';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(N_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'n';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(O_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'o';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(P_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'p';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(Q_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'q';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(R_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'r';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(S_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 's';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(T_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 't';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(U_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'u';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(V_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'v';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(W_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'w';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(X_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'x';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(Y_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'y';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}

				if (isSpriteHover(Z_Button.getGlobalBounds(), mousePos))
				{
					if (evnt.type == Event::MouseButtonReleased && evnt.mouseButton.button == Mouse::Left)
					{
						input = 'z';
						letterClicked = true;
						cout << "Input: " << input << endl;
					}
				}
				
				for (int i = 0; i < categories[C].size(); i++)
				{
					if (enterHere)
					{
						for (int j = 0; j < words[0].size(); j++)
						{
							RectangleShape x(Vector2f(100, 100));
							x.setTexture(&letterPic);

							if(words[0][j]!=' ')
							{
								x.setPosition(xPos + (j * 100), yPos);
								rectShapes.push_back(x);
							}

							//TEXT
							Text y;
							y.setFont(font);
							y.setCharacterSize(60);
							y.setFillColor(Color::White);
							y.setStyle(Text::Bold);
							y.setPosition(xPos + 50 + (j * 100), yPos);
							y.setString(words[0][j]);
							text.push_back(y);
						}
						enterHere = false;
					}

					if (letterClicked)
					{
						
						while (trials > 0 && letterClicked == true)
						{
							if (used.find(input) == -1)
							{
								Text z;
								z.setFont(font);
								z.setCharacterSize(30);
								z.setFillColor(Color::White);
								z.setStyle(Text::Bold);
								z.setPosition(usedPos.x + (it * 50), usedPos.y);
								z.setString(input);
								usedWords.push_back(z);
								it++;
								if (words[0].find(input) != string::npos)
								{

									for (int i = 0; i < words[0].length(); i++)
									{
                  if (words[0][i] == input)
										{
											j = i;
										
											toDraw.push_back(text[i]);
											checkString.push_back('p');
											drawLetter = true;
											Correct--;

										}
										
									}

									cout << endl;
								}
								else
								{
									trials--;
									cout << endl << "Trials left: " << trials << endl;

									if (trials == 5)
									{
										bodyParts.push_back(parts[0]);
									}
									else if (trials == 4)
									{
										bodyParts.push_back(parts[1]);
									}
									else if (trials == 3)
									{
										bodyParts.push_back(parts[2]);
									}
									else if (trials == 2)
									{
										bodyParts.push_back(parts[3]);
									}
									else if (trials == 1)
									{
										bodyParts.push_back(parts[4]);
									}
									else if (trials == 0)
									{
										bodyParts.push_back(parts[5]);
									}
								}

								used += input;
							}
							else
							{
								break;
							}
						
						}
						letterClicked = false;			
					}
				}
				if (trials == 0)
				{
					WordCntr++;
					menu = "lostScreen";
					checkLength = true;
					trials = 6;
					toDraw.clear();
					bodyParts.clear();
					bodyParts.push_back(gallowShape);
					usedWords.clear();
					rectShapes.clear();
					it = 0;
					used = "";

					text.clear();
					break;
				}
				if(Correct == 0 && trials != 0)
				{
					WordCntr++;
					menu = "winScreen";
					checkLength = true;
					trials = 6;
					toDraw.clear();
					bodyParts.clear();
					bodyParts.push_back(gallowShape);
					usedWords.clear();
					rectShapes.clear();
					it = 0;
					used = "";
					text.clear();
					enterHere = true;
				}
			}
		}



		window.clear();
		if (menu == "lostScreen")
		{
			bg = "Textures/lose.png";
			background.loadFromFile(bg);
			window.draw(emptyBG);
		}
		if (menu == "winScreen")
		{
			bg = "Textures/win.png";
			background.loadFromFile(bg);
			window.draw(emptyBG);
		}
		if (menu == "mainmenu")
		{
			window.draw(pp2);
			window.draw(b1Shape);
			window.draw(exitShape);
			window.draw(htpShape);
			window.draw(startShape);
		}
		else if (menu == "htp")
		{
			window.draw(p);
			window.draw(b1Shape);
			window.draw(back2Shape);
		}
		else if (menu == "start")
		{
			window.draw(db);
			window.draw(b1Shape);
			window.draw(back2Shape);
			window.draw(easyShape);
			window.draw(mediumShape);
			window.draw(hardShape);
		}
		else if (menu == "easy")
		{
			window.draw(cb);
			window.draw(b1Shape);
			window.draw(back2Shape);
			window.draw(moviesShape);
			window.draw(sportsShape);
			window.draw(tvShape);
			window.draw(randomShape);
		}
		else if (menu == "hard")
		{
			window.draw(cb);
			window.draw(b1Shape);
			window.draw(back2Shape);
			window.draw(moviesShape);
			window.draw(sportsShape);
			window.draw(tvShape);
			window.draw(randomShape);
		}
		else if (menu == "medium")
		{
			window.draw(cb);
			window.draw(b1Shape);
			window.draw(back2Shape);
			window.draw(moviesShape);
			window.draw(sportsShape);
      window.draw(tvShape);
			window.draw(randomShape);
		}
		else if (menu == "game")
		{
			window.draw(emptyBG);
			window.draw(b1Shape);
			//body parts
			window.draw(gallowShape);
			for (int i = 0; i < bodyParts.size(); i++)
			{
				window.draw(bodyParts[i]);
			}
			window.draw(AShape);
			window.draw(BShape);
			window.draw(CShape);
			window.draw(DShape);
			window.draw(EShape);
			window.draw(FShape);
			window.draw(GShape);
			window.draw(HShape);
			window.draw(IShape);
			window.draw(JShape);
			window.draw(KShape);
			window.draw(LShape);
			window.draw(MShape);
			window.draw(NShape);
			window.draw(OShape);
			window.draw(PShape);
			window.draw(QShape);
			window.draw(RShape);
			window.draw(SShape);
			window.draw(TShape);
			window.draw(UShape);
			window.draw(VShape);
			window.draw(WShape);
			window.draw(XShape);
			window.draw(YShape);
			window.draw(ZShape);
			window.draw(used_letters);
			for (int i = 0; i < usedWords.size(); i++)
			{
				window.draw(usedWords[i]);
			}
			for (int i = 0; i < rectShapes.size(); i++)
			{
				window.draw(rectShapes[i]);
			}

			if (drawLetter)
			{
				for (int i = 0; i < toDraw.size(); i++)
				{
					window.draw(toDraw[i]);
				}
			}
		}
		window.display();
	}
}

								
	
