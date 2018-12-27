#include "hangman.h"

hangman::hangman()
{
}
bool hangman::isSpriteHover(FloatRect sprite, Vector2f mousePos)
{
	if (sprite.contains(mousePos))
	{
		return true;
	}
	return false;
}

vector<string> hangman::split(const string& s, char delimiter)
{

	vector<string> splitted;
	string str;
	istringstream stringStream(s);
	while (getline(stringStream, str, delimiter))
	{
		splitted.push_back(str);
	}
	return splitted;
}

vector<string> hangman::random(string menu)
{
	ifstream obj("Words/t1.txt");
	ifstream obj0("Words/t2.txt");
	ifstream obj1("Words/t3.txt");
	vector<string> randomVec;
	string str1, str2, str3, st1, st2, st3, string1, string2, string3;

	getline(obj, str1);
	getline(obj, str2);
	getline(obj, str3);

	getline(obj0, st1);
	getline(obj0, st2);
	getline(obj0, st3);

	getline(obj1, string1);
	getline(obj1, string2);
	getline(obj1, string3);
	size_t cntr1 = count(str1.begin(), str1.end(), '@'), cntr2 = count(str2.begin(), str2.end(), '@'), cntr3 = count(str3.begin(), str3.end(), '@'), counter1 = count(string1.begin(), string1.end(), '@'), counter2 = count(string2.begin(), string2.end(), '@'), counter3 = count(string3.begin(), string3.end(), '@'), cont1 = count(st1.begin(), st1.end(), '@'), cont2 = count(st2.begin(), st2.end(), '@'), cont3 = count(st3.begin(), st3.end(), '@');

	obj.close();
	obj0.close();
	obj1.close();
	if (menu == "easy")
	{
		int i;
		i = 1;
		while (i < cntr1)
		{
			randomVec.push_back(split(str1, '@')[i]);
			i++;
		}

		i = 1;
		while (i < cntr2)
		{
			randomVec.push_back(split(str2, '@')[i]);
			i++;
		}

		i = 1;
		while (i < cntr3)
		{
			randomVec.push_back(split(str3, '@')[i]);
			i++;
		}

		random_shuffle(randomVec.begin(), randomVec.end());

		return randomVec;

	}
	else if (menu == "hard")
	{
		int i;
		i = 1;
		while (i < counter1)
		{
			randomVec.push_back(split(string1, '@')[i]);
			i++;
		}

		i = 1;
		while (i < counter2)
		{
			randomVec.push_back(split(string2, '@')[i]);
			i++;
		}

		i = 1;
		while (i < counter3)
		{
			randomVec.push_back(split(string3, '@')[i]);
			i++;
		}

		random_shuffle(randomVec.begin(), randomVec.end());

		return randomVec;
	}
	else
	{
		int i;
		i = 1;
		while (i < cont1)
		{
			randomVec.push_back(split(st1, '@')[i]);
			i++;
		}

		i = 1;
		while (i < cont2)
		{
			randomVec.push_back(split(st2, '@')[i]);
			i++;
		}

		i = 1;
		while (i < cont3)
		{
			randomVec.push_back(split(st3, '@')[i]);
			i++;
		}

		random_shuffle(randomVec.begin(), randomVec.end());

		return randomVec;
	}
}

vector<string> hangman::movies(string menu)
{
	ifstream obj("t1.txt");
	ifstream obj0("t2.txt");
	ifstream obj1("t3.txt");
	vector<string> randomVec;
	string str1, str2, str3, st1, st2, st3, string1, string2, string3;

	getline(obj, str1);
	getline(obj, str2);
	getline(obj, str3);

	getline(obj0, st1);
	getline(obj0, st2);
	getline(obj0, st3);

	getline(obj1, string1);
	getline(obj1, string2);
	getline(obj1, string3);
	size_t cntr1 = count(str1.begin(), str1.end(), '@'), cntr2 = count(str2.begin(), str2.end(), '@'), cntr3 = count(str3.begin(), str3.end(), '@'), counter1 = count(string1.begin(), string1.end(), '@'), counter2 = count(string2.begin(), string2.end(), '@'), counter3 = count(string3.begin(), string3.end(), '@'), cont1 = count(st1.begin(), st1.end(), '@'), cont2 = count(st2.begin(), st2.end(), '@'), cont3 = count(st3.begin(), st3.end(), '@');

	obj.close();
	obj0.close();
	obj1.close();
	if (menu == "easy")
	{
		vector<string> movies;
		int i = 1;
		while (i < cntr1)
		{
			movies.push_back(split(str1, '@')[i]);
			i++;
		}

		random_shuffle(movies.begin(), movies.end());

		return movies;
	}
	else if (menu == "hard")
	{
		vector<string> movies;

		int i = 1;
		while (i < counter1)
		{
			movies.push_back(split(string1, '@')[i]);
			i++;
		}

		random_shuffle(movies.begin(), movies.end());

		return movies;
	}
	else
	{
		vector<string> movies;

		int i = 1;
		while (i < cont1)
		{
			movies.push_back(split(st1, '@')[i]);
			i++;
		}

		random_shuffle(movies.begin(), movies.end());

		return movies;
	}
}
vector<string> hangman::tvs(string menu)
{
	ifstream obj("t1.txt");
	ifstream obj0("t2.txt");
	ifstream obj1("t3.txt");
	vector<string> randomVec;
	string str1, str2, str3, st1, st2, st3, string1, string2, string3;

	getline(obj, str1);
	getline(obj, str2);
	getline(obj, str3);

	getline(obj0, st1);
	getline(obj0, st2);
	getline(obj0, st3);

	getline(obj1, string1);
	getline(obj1, string2);
	getline(obj1, string3);
	size_t cntr1 = count(str1.begin(), str1.end(), '@'), cntr2 = count(str2.begin(), str2.end(), '@'), cntr3 = count(str3.begin(), str3.end(), '@'), counter1 = count(string1.begin(), string1.end(), '@'), counter2 = count(string2.begin(), string2.end(), '@'), counter3 = count(string3.begin(), string3.end(), '@'), cont1 = count(st1.begin(), st1.end(), '@'), cont2 = count(st2.begin(), st2.end(), '@'), cont3 = count(st3.begin(), st3.end(), '@');

	obj.close();
	obj0.close();
	obj1.close();
	if (menu == "easy")
	{
		vector<string> tv;
		int i = 1;
		while (i < cntr3)
		{
			tv.push_back(split(str3, '@')[i]);
			i++;
		}

		random_shuffle(tv.begin(), tv.end());

		return tv;
	}
	else if (menu == "hard")
	{
		vector<string> tv;
		int i = 1;
		while (i < counter3)
		{
			tv.push_back(split(string3, '@')[i]);
			i++;
		}

		random_shuffle(tv.begin(), tv.end());

		return tv;
	}
	else
	{
		vector<string> tv;
		int i = 1;
		while (i < cont3)
		{
			tv.push_back(split(st3, '@')[i]);
			i++;
		}

		random_shuffle(tv.begin(), tv.end());

		return tv;
	}
}
vector<string> hangman::sport(string menu)
{
	ifstream obj("t1.txt");
	ifstream obj0("t2.txt");
	ifstream obj1("t3.txt");
	vector<string> randomVec;
	string str1, str2, str3, st1, st2, st3, string1, string2, string3;

	getline(obj, str1);
	getline(obj, str2);
	getline(obj, str3);

	getline(obj0, st1);
	getline(obj0, st2);
	getline(obj0, st3);

	getline(obj1, string1);
	getline(obj1, string2);
	getline(obj1, string3);
	size_t cntr1 = count(str1.begin(), str1.end(), '@'), cntr2 = count(str2.begin(), str2.end(), '@'), cntr3 = count(str3.begin(), str3.end(), '@'), counter1 = count(string1.begin(), string1.end(), '@'), counter2 = count(string2.begin(), string2.end(), '@'), counter3 = count(string3.begin(), string3.end(), '@'), cont1 = count(st1.begin(), st1.end(), '@'), cont2 = count(st2.begin(), st2.end(), '@'), cont3 = count(st3.begin(), st3.end(), '@');

	obj.close();
	obj0.close();
	obj1.close();
	if (menu == "easy")
	{
		vector<string> sports;
		int i = 1;
		while (i < cntr2)
		{
			sports.push_back(split(str2, '@')[i]);
			i++;
		}

		random_shuffle(sports.begin(), sports.end());

		return sports;
	}
	else if (menu == "hard")
	{
		vector<string> sports;
		int i = 1;
		while (i < counter2)
		{
			sports.push_back(split(string2, '@')[i]);
			i++;
		}

		random_shuffle(sports.begin(), sports.end());

		return sports;
	}
	else
	{
		vector<string> sports;
		int i = 1;
		while (i < cont2)
		{
			sports.push_back(split(st2, '@')[i]);
			i++;
		}

		random_shuffle(sports.begin(), sports.end());

		return sports;
	}
}

void hangman::gui()
{
	RenderWindow window(VideoMode(1280, 800), "HangMan", Style::Titlebar);
	Music music;
	music.openFromFile("Theme Song/The Pink Panther Theme Song (Original Version).wav");
	music.setVolume(50);

	music.play();
	music.setLoop(true);//Music Loop
	Texture background;
	string bg = "Textures/bg - Copy.png";
	background.loadFromFile(bg);
	RectangleShape emptyBG(Vector2f(1366, 800));
	emptyBG.setTexture(&background);
	emptyBG.setPosition(0, 0);
	Vector2f mousePos;
	////////////////////////////////////////////////////////////

	bool check = true;
	////////////////////////////////////////////////////////////// sound button
	Texture b1pic;
	string pic = "Textures/Buttons/sound-png-3.png";
	b1pic.loadFromFile(pic);
	RectangleShape b1Shape(Vector2f(30, 40));
	b1Shape.setTexture(&b1pic);

	b1Shape.setPosition(1240, 10);
	Sprite b1;

	b1.setTexture(b1pic);
	b1.setPosition(1250, 10);
	///////////////////////////////////////////////////////////////// exit button
	Texture exitpic;
	string pic2 = "Textures/Buttons/exit.png";
	exitpic.loadFromFile(pic2);
	RectangleShape exitShape(Vector2f(200, 120));
	exitShape.setTexture(&exitpic);

	exitShape.setPosition(540, 600);
	Sprite b2;

	b2.setTexture(exitpic);
	b2.setPosition(540, 600);
	///////////////////////////////////////////////////////////////how to play button
	Texture htppic;
	string pic3 = "Textures/Buttons/h2p.png";
	htppic.loadFromFile(pic3);
	RectangleShape htpShape(Vector2f(200, 120));
	htpShape.setTexture(&htppic);

	htpShape.setPosition(540, 450);
	Sprite b3;

	b3.setTexture(htppic);
	b3.setPosition(540, 450);
	/////////////////////////////////////////////////////////////////////how to play background
	Texture back;
	back.loadFromFile("Textures/backk.png");
	RectangleShape p(Vector2f(1366, 800));
	p.setTexture(&back);
	p.setPosition(0, 0);
	////////////////////////////////////////////////////////////////////////////////////////
	Texture backk2;
	backk2.loadFromFile("Textures/bg.png");
	RectangleShape pp2(Vector2f(1366, 800));
	pp2.setTexture(&backk2);
	pp2.setPosition(0, 0);
	////////////////////////////////////////////////////////////////////////////////////////
	Texture categBack;
	categBack.loadFromFile("Textures/catback.png");
	RectangleShape cb(Vector2f(1366, 800));
	cb.setTexture(&categBack);
	cb.setPosition(0, 0);

	/////////////////////////////////////////////////////////////////////////////////////////////
	Texture diffBack;
	diffBack.loadFromFile("Textures/diffback.png");
	RectangleShape db(Vector2f(1366, 800));
	db.setTexture(&diffBack);
	db.setPosition(0, 0);
	//////////////////////////////////////////////////////////////start game button
	Texture startpic;
	string pic4 = "Textures/Buttons/startgame.png";
	startpic.loadFromFile(pic4);
	RectangleShape startShape(Vector2f(200, 120));
	startShape.setTexture(&startpic);

	startShape.setPosition(540, 300);
	Sprite b5;

	b5.setTexture(startpic);
	b5.setPosition(540, 300);
	///////////////////////////////////////////////////////////////////back button
	Texture back2pic;
	string p2 = "Textures/Buttons/back.png";
	back2pic.loadFromFile(p2);
	RectangleShape back2Shape(Vector2f(85, 50));
	back2Shape.setTexture(&back2pic);

	back2Shape.setPosition(30, 10);
	Sprite bb;

	bb.setTexture(back2pic);
	bb.setPosition(30, 10);
	////////////////////////////////////////////////////////////////easy button
	Texture easypic;
	string pic5 = "Textures/Buttons/easy.png";
	easypic.loadFromFile(pic5);
	RectangleShape easyShape(Vector2f(200, 120));
	easyShape.setTexture(&easypic);

	easyShape.setPosition(240, 450);
	Sprite b6;

	b6.setTexture(easypic);
	b6.setPosition(240, 450);
	////////////////////////////////////////////////////////////////////medium button
	Texture mediumpic;
	string pic6 = "Textures/Buttons/medium.png";
	mediumpic.loadFromFile(pic6);
	RectangleShape mediumShape(Vector2f(200, 120));
	mediumShape.setTexture(&mediumpic);

	mediumShape.setPosition(540, 450);
	Sprite b7;

	b7.setTexture(mediumpic);
	b7.setPosition(540, 450);
	/////////////////////////////////////////////////////////////////////hard button
	Texture hardpic;
	string pic7 = "Textures/Buttons/hard.png";
	hardpic.loadFromFile(pic7);
	RectangleShape hardShape(Vector2f(200, 120));
	hardShape.setTexture(&hardpic);

	hardShape.setPosition(840, 450);
	Sprite b8;

	b8.setTexture(hardpic);
	b8.setPosition(840, 450);
	///////////////////////////////CATEGORIES BUTTONS ///////////////////////////////
	Texture mPic;
	mPic.loadFromFile("Textures/Buttons/mbtn.png");
	RectangleShape moviesShape(Vector2f(200, 90));
	moviesShape.setTexture(&mPic);
	moviesShape.setPosition(240, 300);
	Sprite mBtn;
	mBtn.setTexture(mPic);
	mBtn.setPosition(240, 300);

	Texture sPic;
	sPic.loadFromFile("Textures/Buttons/sbtn.png");
	RectangleShape sportsShape(Vector2f(200, 90));
	sportsShape.setTexture(&sPic);
	sportsShape.setPosition(440, 300);
	Sprite sBtn;
	sBtn.setTexture(sPic);
	sBtn.setPosition(440, 300);

	Texture tvPic;
	tvPic.loadFromFile("Textures/Buttons/tvbtn.png");
	RectangleShape tvShape(Vector2f(200, 90));
	tvShape.setTexture(&tvPic);
	tvShape.setPosition(640, 300);
	Sprite tvBtn;
	tvBtn.setTexture(tvPic);
	tvBtn.setPosition(640, 300);

	Texture randomPic;
	randomPic.loadFromFile("Textures/Buttons/rbtn.png");
	RectangleShape randomShape(Vector2f(200, 90));
	randomShape.setTexture(&randomPic);
	randomShape.setPosition(840, 300);
	Sprite randBtn;
	randBtn.setTexture(randomPic);
	randBtn.setPosition(840, 300);
	/////////////////////////////// FONTS & TEXT ///////////////////////////////
	Font font;
	font.loadFromFile("Fonts/arial_narrow_7.ttf");

	Vector2f usedPos;
	usedPos.x = 50;
	usedPos.y = 700;

	vector<Text> text;
	vector<Text> usedWords;
	Text used_letters;
	used_letters.setFont(font);
	used_letters.setCharacterSize(30);
	used_letters.setFillColor(Color::White);
	used_letters.setStyle(Text::Bold);
	used_letters.setPosition(usedPos.x, usedPos.y - 50);
	used_letters.setString("Used Letters: ");
	/////////////////////////////// LETTER PLACE ///////////////////////////////
	Texture letterPic;
	letterPic.loadFromFile("Textures/dash.png");
	vector<RectangleShape> rectShapes;

	vector<Text> dashes;
	bool enterHere = true;
	
	/////////////////////////////// GALLOWS & BODY PARTS ///////////////////////////////
	Texture gallow;
	gallow.loadFromFile("Textures/Hanged Body Parts/wood.png");
	RectangleShape gallowShape(Vector2f(320, 430));
	gallowShape.setTexture(&gallow);
	gallowShape.setPosition(950, 45);

	Texture head;
	head.loadFromFile("Textures/Hanged Body Parts/head.png");
	RectangleShape headShape(Vector2f(180, 350));
	headShape.setTexture(&head);
	headShape.setPosition(897, 150);

	Texture leftArm;
	leftArm.loadFromFile("Textures/Hanged Body Parts/leftarm.png");
	RectangleShape laShape(Vector2f(180, 350));
	laShape.setTexture(&leftArm);
	laShape.setPosition(897, 150);

	Texture rightArm;
	rightArm.loadFromFile("Textures/Hanged Body Parts/rightarm.png");
	RectangleShape raShape(Vector2f(180, 350));
	raShape.setTexture(&rightArm);
	raShape.setPosition(897, 150);

	Texture stomach;
	stomach.loadFromFile("Textures/Hanged Body Parts/stomach.png");
	RectangleShape stomachShape(Vector2f(180, 350));
	stomachShape.setTexture(&stomach);
	stomachShape.setPosition(897, 150);

	Texture leftLeg;
	leftLeg.loadFromFile("Textures/Hanged Body Parts/leftleg.png");
	RectangleShape llShape(Vector2f(180, 350));
	llShape.setTexture(&leftLeg);
	llShape.setPosition(897, 150);

	Texture rightLeg;
	rightLeg.loadFromFile("Textures/Hanged Body Parts/rightLeg.png");
	RectangleShape rlShape(Vector2f(180, 350));
	rlShape.setTexture(&rightLeg);
	rlShape.setPosition(897, 150);

	vector<RectangleShape>bodyParts;
	bodyParts.push_back(gallowShape);
	vector<RectangleShape> parts;
	parts.push_back(headShape);
	parts.push_back(stomachShape);
	parts.push_back(laShape);
	parts.push_back(raShape);
	parts.push_back(llShape);
	parts.push_back(rlShape);
	/////////////////////////////// LETTERS BUTTONS ///////////////////////////////
	Texture letterA;
	letterA.loadFromFile("Textures/Letters/A.png");
	RectangleShape AShape(Vector2f(50, 50));
	AShape.setTexture(&letterA);
	AShape.setPosition(100, 500);
	Sprite A_Button;
	A_Button.setTexture(letterA);
	A_Button.setPosition(100, 500);

	Texture letterB;
	letterB.loadFromFile("Textures/Letters/B.png");
	RectangleShape BShape(Vector2f(50, 50));
	BShape.setTexture(&letterB);
	BShape.setPosition(170, 500);
	Sprite B_Button;
	B_Button.setTexture(letterB);
	B_Button.setPosition(170, 500);

	Texture letterC;
	letterC.loadFromFile("Textures/Letters/C.png");
	RectangleShape CShape(Vector2f(50, 50));
	CShape.setTexture(&letterC);
	CShape.setPosition(240, 500);
	Sprite C_Button;
	C_Button.setTexture(letterC);
	C_Button.setPosition(240, 500);

	Texture letterD;
	letterD.loadFromFile("Textures/Letters/D.png");
	RectangleShape DShape(Vector2f(50, 50));
	DShape.setTexture(&letterD);
	DShape.setPosition(310, 500);
	Sprite D_Button;
	D_Button.setTexture(letterD);
	D_Button.setPosition(310, 500);

	Texture letterE;
	letterE.loadFromFile("Textures/Letters/E.png");
	RectangleShape EShape(Vector2f(50, 50));
	EShape.setTexture(&letterE);
	EShape.setPosition(380, 500);
	Sprite E_Button;
	E_Button.setTexture(letterE);
	E_Button.setPosition(380, 500);

	Texture letterF;
	letterF.loadFromFile("Textures/Letters/F.png");
	RectangleShape FShape(Vector2f(50, 50));
	FShape.setTexture(&letterF);
	FShape.setPosition(450, 500);
	Sprite F_Button;
	F_Button.setTexture(letterF);
	F_Button.setPosition(450, 500);

	Texture letterG;
	letterG.loadFromFile("Textures/Letters/G.png");
	RectangleShape GShape(Vector2f(50, 50));
	GShape.setTexture(&letterG);
	GShape.setPosition(520, 500);
	Sprite G_Button;
	G_Button.setTexture(letterG);
	G_Button.setPosition(520, 500);

	Texture letterH;
	letterH.loadFromFile("Textures/Letters/H.png");
	RectangleShape HShape(Vector2f(50, 50));
	HShape.setTexture(&letterH);
	HShape.setPosition(590, 500);
	Sprite H_Button;
	H_Button.setTexture(letterH);
	H_Button.setPosition(590, 500);

	Texture letterI;
	letterI.loadFromFile("Textures/Letters/I.png");
	RectangleShape IShape(Vector2f(50, 50));
	IShape.setTexture(&letterI);
	IShape.setPosition(660, 500);
	Sprite I_Button;
	I_Button.setTexture(letterI);
	I_Button.setPosition(660, 500);

	Texture letterJ;
	letterJ.loadFromFile("Textures/Letters/J.png");
	RectangleShape JShape(Vector2f(50, 50));
	JShape.setTexture(&letterJ);
	JShape.setPosition(730, 500);
	Sprite J_Button;
	J_Button.setTexture(letterJ);
	J_Button.setPosition(730, 500);

	Texture letterK;
	letterK.loadFromFile("Textures/Letters/K.png");
	RectangleShape KShape(Vector2f(50, 50));
	KShape.setTexture(&letterK);
	KShape.setPosition(800, 500);
	Sprite K_Button;
	K_Button.setTexture(letterK);
	K_Button.setPosition(800, 500);

	Texture letterL;
	letterL.loadFromFile("Textures/Letters/L.png");
	RectangleShape LShape(Vector2f(50, 50));
	LShape.setTexture(&letterL);
	LShape.setPosition(870, 500);
	Sprite L_Button;
	L_Button.setTexture(letterL);
	L_Button.setPosition(870, 500);

	Texture letterM;
	letterM.loadFromFile("Textures/Letters/M.png");
	RectangleShape MShape(Vector2f(50, 50));
	MShape.setTexture(&letterM);
	MShape.setPosition(940, 500);
	Sprite M_Button;
	M_Button.setTexture(letterM);
	M_Button.setPosition(940, 500);

	Texture letterN;
	letterN.loadFromFile("Textures/Letters/N.png");
	RectangleShape NShape(Vector2f(50, 50));
	NShape.setTexture(&letterN);
	NShape.setPosition(1010, 500);
	Sprite N_Button;
	N_Button.setTexture(letterM);
	N_Button.setPosition(1010, 500);

	Texture letterO;
	letterO.loadFromFile("Textures/Letters/O.png");
	RectangleShape OShape(Vector2f(50, 50));
	OShape.setTexture(&letterO);
	OShape.setPosition(100, 570);
	Sprite O_Button;
	O_Button.setTexture(letterO);
	O_Button.setPosition(100, 570);

	Texture letterP;
	letterP.loadFromFile("Textures/Letters/P.png");
	RectangleShape PShape(Vector2f(50, 50));
	PShape.setTexture(&letterP);
	PShape.setPosition(170, 570);
	Sprite P_Button;
	P_Button.setTexture(letterP);
	P_Button.setPosition(170, 570);

	Texture letterQ;
	letterQ.loadFromFile("Textures/Letters/Q.png");
	RectangleShape QShape(Vector2f(50, 50));
	QShape.setTexture(&letterQ);
	QShape.setPosition(240, 570);
	Sprite Q_Button;
	Q_Button.setTexture(letterQ);
	Q_Button.setPosition(240, 570);

	Texture letterR;
	letterR.loadFromFile("Textures/Letters/R.png");
	RectangleShape RShape(Vector2f(50, 50));
	RShape.setTexture(&letterR);
	RShape.setPosition(310, 570);
	Sprite R_Button;
	R_Button.setTexture(letterR);
	R_Button.setPosition(310, 570);

	Texture letterS;
	letterS.loadFromFile("Textures/Letters/S.png");
	RectangleShape SShape(Vector2f(50, 50));
	SShape.setTexture(&letterS);
	SShape.setPosition(380, 570);
	Sprite S_Button;
	S_Button.setTexture(letterS);
	S_Button.setPosition(380, 570);

	Texture letterT;
	letterT.loadFromFile("Textures/Letters/T.png");
	RectangleShape TShape(Vector2f(50, 50));
	TShape.setTexture(&letterT);
	TShape.setPosition(450, 570);
	Sprite T_Button;
	T_Button.setTexture(letterT);
	T_Button.setPosition(450, 570);

	Texture letterU;
	letterU.loadFromFile("Textures/Letters/U.png");
	RectangleShape UShape(Vector2f(50, 50));
	UShape.setTexture(&letterU);
	UShape.setPosition(520, 570);
	Sprite U_Button;
	U_Button.setTexture(letterU);
	U_Button.setPosition(520, 570);

	Texture letterV;
	letterV.loadFromFile("Textures/Letters/V.png");
	RectangleShape VShape(Vector2f(50, 50));
	VShape.setTexture(&letterV);
	VShape.setPosition(590, 570);
	Sprite V_Button;
	V_Button.setTexture(letterV);
	V_Button.setPosition(590, 570);

	Texture letterW;
	letterW.loadFromFile("Textures/Letters/W.png");
	RectangleShape WShape(Vector2f(50, 50));
	WShape.setTexture(&letterW);
	WShape.setPosition(660, 570);
	Sprite W_Button;
	W_Button.setTexture(letterW);
	W_Button.setPosition(660, 570);

	Texture letterX;
	letterX.loadFromFile("Textures/Letters/X.png");
	RectangleShape XShape(Vector2f(50, 50));
	XShape.setTexture(&letterX);
	XShape.setPosition(730, 570);
	Sprite X_Button;
	X_Button.setTexture(letterX);
	X_Button.setPosition(730, 570);

	Texture letterY;
	letterY.loadFromFile("Textures/Letters/Y.png");
	RectangleShape YShape(Vector2f(50, 50));
	YShape.setTexture(&letterY);
	YShape.setPosition(800, 570);
	Sprite Y_Button;
	Y_Button.setTexture(letterY);
	Y_Button.setPosition(800, 570);

	Texture letterZ;
	letterZ.loadFromFile("Textures/Letters/Z.png");
	RectangleShape ZShape(Vector2f(50, 50));
	ZShape.setTexture(&letterZ);
	ZShape.setPosition(870, 570);
	Sprite Z_Button;
	Z_Button.setTexture(letterY);
	Z_Button.setPosition(870, 570);
	////////////////////////////////////////////////////////////////////////////////////////////////
	vector<vector<string>> categories;
	vector<string> r, m, s, t;
	r.push_back("s");
	m.push_back("s");
	s.push_back("s");
	t.push_back("s");

	categories.push_back(r);
	categories.push_back(m);
	categories.push_back(s);
	categories.push_back(t);
	int C;
	char input;
	
	vector<string> words;
	words.push_back("s");
	string checkString;
	int lengthCheck;
	bool checkLength = true;
	
	int trials = 6;
	int Correct;
	int WordCntr = 0;
	string used = "";
	int xPos = 70, yPos = 100;
	bool letterClicked = false;
	bool drawLetter = false;
	vector<Text> toDraw;
	int j;
	int counter = 0;
	int it = 0;
	////////////////////////////////////////////////////////////////////////////////////////////
	string menu = "mainmenu";

	while (window.isOpen())
	{
		Event evnt;
		while (window.pollEvent(evnt))
		{
			if (evnt.type == evnt.Closed)
				window.close();
			if (evnt.type == Event::EventType::KeyPressed) {

				// Up and down to control volume
				if (evnt.key.code == Keyboard::Key::Down)
					music.setVolume(music.getVolume() - 10);
				if (evnt.key.code == Keyboard::Key::Up)
					music.setVolume(music.getVolume() + 10);
				cout << "Current volume is :" << music.getVolume() << endl;
			}
			else if (Mouse::isButtonPressed(Mouse::Left))
			{
				mousePos.x = Mouse::getPosition(window).x;
				mousePos.y = Mouse::getPosition(window).y;
			}
			//3shan el buttons.

			if (isSpriteHover(b1.getGlobalBounds(), mousePos) == true)
			{
				if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
				{
					if (pic == "Textures/Buttons/sound-png-3.png")
					{
						pic = "Textures/Buttons/soundoff2.png";
						b1pic.loadFromFile(pic);
						cout << "mute ";
						music.stop();
					}
					else if (pic == "Textures/Buttons/soundoff2.png")
					{
						pic = "Textures/Buttons/sound-png-3.png";
						b1pic.loadFromFile(pic);
						cout << "play ";
						music.play();
					}
				}
			}

			///////////////////////////////////exit
			if (menu == "mainmenu")
			{
				if (isSpriteHover(b2.getGlobalBounds(), mousePos) == true)
				{
					if (evnt.type == Event::MouseButtonPressed && evnt.mouseButton.button == Mouse::Left)
					{
						pic2 = "Textures/Buttons/exitclicked.png";
						exitpic.loadFromFile(pic2);
					}
					if (evnt.type == Event::MouseButtonReleased &&  evnt.mouseButton.button == Mouse::Left)
					{
						if (pic2 == "Textures/Buttons/exitclicked.png")
						{
							cout << "done " << endl;
							window.close();

						}

					}

				}
			}
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

								
	
