#include <iostream>
#include<time.h>


using namespace std;
enum MAIN_MENU {
	MM_NONE,
	MM_MAP,
	MM_STORE,
	MM_INVENTORY,
	MM_EXIT
};
enum MAP_TYPE {
	MT_NON,
	MT_EASY,
	MT_NORMAL,
	MT_HARD,
	MT_BACK
};
enum JOB {
	JOB_NONE,
	JOB_KNIGHT,
	JOB_ARCHER,
	JOB_WIZARD,
	JOB_END
};
enum BATTLE {
	BATTLE_NONE,
	BATTLE_ATTACK,
	BATTLE_BACK
};

enum ITEM_TYPE {
	IT_NONE,
	IT_WEAPON,
	IT_ARMOR,
	IT_BACK
};

enum STORE_MENU {
	SM_NONE,
	SM_WEAPON,
	SM_ARMOR,
	SM_BACK
};

#define NAME_SIZE 32
#define ITEM_DESC_LENGTH 512
#define INVENTORY_MAX	20
#define STORE_WEAPON_MAX 3
#define STORE_ARMOR_MAX 3

struct _Item {
	char strName[NAME_SIZE];
	char strTypeName[NAME_SIZE];
	ITEM_TYPE eType;
	int iMin;
	int iMax;
	int iPrice;
	int iSell;
	char strDesc[ITEM_DESC_LENGTH];
};

struct _Inventory {
	_Item tItem[INVENTORY_MAX];
	int iItemCount;
	int iGold;
};

struct _Player {
	char strName[NAME_SIZE];
	char strJobName[NAME_SIZE];
	JOB eJob;
	int iAttackMin;
	int iAttackMax;
	int iArmorMin;
	int iArmorMax;	//����,ü��
	int iHP;
	int iHPMax;
	int iMP;
	int iMPMax;
	int iExp;
	int iLevel;
	_Inventory tInventory;
};
struct _Monster {		//_tagMonster
	char strName[NAME_SIZE];
	int iAttackMin;
	int iAttackMax;
	int iArmorMin;
	int iArmorMax;
	int iHP;
	int iHPMax;
	int iMP;
	int iMPMax;
	int iLevel;
	int iExp;
	int iGoldMin;
	int iGoldMax;

};
int main() {

	srand((unsigned int)time(0));

	_Player tPlayer = {};

	cout << "�̸� : ";
	cin.getline(tPlayer.strName, NAME_SIZE - 1);

	int iJob = JOB_NONE;

	while (iJob == JOB_NONE)
	{
		system("cls");
		cout << "1. ���" << endl;
		cout << "2. �ü�" << endl;
		cout << "3. ������" << endl;
		cout << "������ �����ϼ��� : ";
		cin >> iJob;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		else if (iJob <= JOB_NONE || iJob > JOB_END)
			iJob = JOB_NONE;
	}
	tPlayer.iLevel = 1;
	tPlayer.iExp = 0;
	tPlayer.eJob = (JOB)iJob;
	tPlayer.tInventory.iGold = 10000;

	switch (tPlayer.eJob) {
	case JOB_KNIGHT:
		strcpy_s(tPlayer.strJobName, "���");
		tPlayer.iAttackMin = 5;
		tPlayer.iAttackMax = 10;
		tPlayer.iArmorMin = 15;
		tPlayer.iArmorMax = 20;
		tPlayer.iHPMax = 500;
		tPlayer.iHP = 500;
		tPlayer.iMP = 100;
		tPlayer.iMPMax = 100; break;


	case JOB_ARCHER:
		strcpy_s(tPlayer.strJobName, "�ü�");
		tPlayer.iAttackMin = 10;
		tPlayer.iAttackMax = 15;
		tPlayer.iArmorMin = 10;
		tPlayer.iArmorMax = 15;
		tPlayer.iHPMax = 400;
		tPlayer.iHP = 400;
		tPlayer.iMP = 200;
		tPlayer.iMPMax = 200; break;

	case JOB_WIZARD:
		strcpy_s(tPlayer.strJobName, "������");
		tPlayer.iAttackMin = 15;
		tPlayer.iAttackMax = 20;
		tPlayer.iArmorMin = 5;
		tPlayer.iArmorMax = 10;
		tPlayer.iHPMax = 300;
		tPlayer.iHP = 300;
		tPlayer.iMP = 300;
		tPlayer.iMPMax = 300;  break;
	}
	//���� ����
	_Monster tMonsterArr[MT_BACK - 1]{};

	//��� ����
	strcpy_s(tMonsterArr[0].strName, "���");
	tMonsterArr[0].iAttackMin = 20;
	tMonsterArr[0].iAttackMax = 30;
	tMonsterArr[0].iArmorMin = 2;
	tMonsterArr[0].iArmorMax = 5;
	tMonsterArr[0].iHP = 100;
	tMonsterArr[0].iHPMax = 100;
	tMonsterArr[0].iMP = 10;
	tMonsterArr[0].iMPMax = 10;
	tMonsterArr[0].iLevel = 1;
	tMonsterArr[0].iExp = 1000;
	tMonsterArr[0].iGoldMin = 500;
	tMonsterArr[0].iGoldMax = 1500;



	//Ʈ�� ����
	strcpy_s(tMonsterArr[1].strName, "Ʈ��");
	tMonsterArr[1].iAttackMin = 80;
	tMonsterArr[1].iAttackMax = 130;
	tMonsterArr[1].iArmorMin = 60;
	tMonsterArr[1].iArmorMax = 90;
	tMonsterArr[1].iHP = 2000;
	tMonsterArr[1].iHPMax = 2000;
	tMonsterArr[1].iMP = 100;
	tMonsterArr[1].iMPMax = 100;
	tMonsterArr[1].iLevel = 5;
	tMonsterArr[1].iExp = 7000;
	tMonsterArr[1].iGoldMin = 6000;
	tMonsterArr[1].iGoldMax = 8000;

	//�巡�� ����
	strcpy_s(tMonsterArr[2].strName, "�巡��");
	tMonsterArr[2].iAttackMin = 250;
	tMonsterArr[2].iAttackMax = 500;
	tMonsterArr[2].iArmorMin = 200;
	tMonsterArr[2].iArmorMax = 400;
	tMonsterArr[2].iHP = 30000;
	tMonsterArr[2].iHPMax = 30000;
	tMonsterArr[2].iMP = 20000;
	tMonsterArr[2].iMPMax = 20000;
	tMonsterArr[2].iLevel = 10;
	tMonsterArr[2].iExp = 30000;
	tMonsterArr[2].iGoldMin = 20000;
	tMonsterArr[2].iGoldMax = 50000;

	//�������� �Ǹ��� ������ ����� �����Ѵ�.
	_Item	tStoreWeapon[STORE_WEAPON_MAX] = {};
	_Item	tStoreArmor[STORE_ARMOR_MAX] = {};
	

	//�� ������ ������ �����Ѵ�
	strcpy_s(tStoreWeapon[0].strName, "���");
	strcpy_s(tStoreWeapon[0].strTypeName, "����");
	strcpy_s(tStoreWeapon[0].strDesc, "������ ����Į");
	tStoreWeapon[0].eType = IT_WEAPON;
	tStoreWeapon[0].iMin = 5;
	tStoreWeapon[0].iMax = 20;
	tStoreWeapon[0].iPrice = 4000;
	tStoreWeapon[0].iSell = 1500;

	strcpy_s(tStoreWeapon[1].strName, "���");
	strcpy_s(tStoreWeapon[1].strTypeName, "����");
	strcpy_s(tStoreWeapon[1].strDesc, "�ֽ��� Ȱ");
	tStoreWeapon[1].eType = IT_WEAPON;
	tStoreWeapon[1].iMin = 20;
	tStoreWeapon[1].iMax = 40;
	tStoreWeapon[1].iPrice = 7000;
	tStoreWeapon[1].iSell = 3500;

	strcpy_s(tStoreWeapon[2].strName, "������");
	strcpy_s(tStoreWeapon[2].strTypeName, "����");
	strcpy_s(tStoreWeapon[2].strDesc, "������ ����Į");
	tStoreWeapon[2].eType = IT_WEAPON;
	tStoreWeapon[2].iMin = 90;
	tStoreWeapon[2].iMax = 150;
	tStoreWeapon[2].iPrice = 30000;
	tStoreWeapon[2].iSell = 15000;

	////������ ����
	//strcpy_s(tStoreArmor[0].strName, "õ����");
	//strcpy_s(tStoreWeapon[0].strTypeName, "��");
	//strcpy_s(tStoreWeapon[0].strDesc, "������ ����");
	//tStoreWeapon[0].eType = IT_WEAPON;
	//tStoreWeapon[0].iMin = 2;
	//tStoreWeapon[0].iMax = 6;
	//tStoreWeapon[0].iPrice = 1000;
	//tStoreWeapon[0].iSell = 500;

	//strcpy_s(tStoreWeapon[1].strName, "���װ���");
	//strcpy_s(tStoreWeapon[1].strTypeName, "��");
	//strcpy_s(tStoreWeapon[1].strDesc, "������ �������� ���� ���� ����");
	//tStoreWeapon[1].eType = IT_WEAPON;
	//tStoreWeapon[1].iMin = 10;
	//tStoreWeapon[1].iMax = 20;
	//tStoreWeapon[1].iPrice = 7000;
	//tStoreWeapon[1].iSell = 3500;

	//strcpy_s(tStoreWeapon[2].strName, "ö����");
	//strcpy_s(tStoreWeapon[2].strTypeName, "��");
	//strcpy_s(tStoreWeapon[2].strDesc, "���ð� ���Ⱑ ���� ���ö���� ���簩��");
	//tStoreWeapon[2].eType = IT_WEAPON;
	//tStoreWeapon[2].iMin = 50;
	//tStoreWeapon[2].iMax = 250;
	//tStoreWeapon[2].iPrice = 40000;
	//tStoreWeapon[2].iSell = 15000;

	while (true) {
		system("cls");
		cout << "--------------- LOBY --------------" << endl;
		cout << "1. ��" << endl;
		cout << "2. ����" << endl;
		cout << "3. ����" << endl;
		cout << "4. ����" << endl;
		cout << "�޴��� �����ϼ��� : ";
		int iMenu;
		cin >> iMenu;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}

		if (iMenu == MM_EXIT)
			break;



		switch (iMenu)
		{
		case MM_MAP:
			while (true)
			{
				system("cls");
				cout << "--------------- MAP --------------" << endl;
				cout << "1. ����" << endl;
				cout << "2. ����" << endl;
				cout << "3. �����" << endl;
				cout << "4. �ڷΰ���" << endl;
				cout << "���� �����ϼ��� : ";
				cin >> iMenu;

				if (cin.fail()) {
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}
				//�� if���� ����break�� �� �޴��� �����ֱ� ���� while�� ���� �����Ƿ�
		//�� while���� ����������.

				if (iMenu == MT_BACK) break;

				//������ �޴����� 1�� ���ָ� ���� �迭�� �ε����� �ȴ�.
		//�׷��� �ؼ� �ش� ���� ���͸� �������ش�
				_Monster tMonster = tMonsterArr[iMenu - 1];

				while (true) {
					system("cls");
					switch (iMenu)
					{
					case MT_EASY:
						cout << "--------------- EASY --------------" << endl; break;

					case MT_NORMAL:
						cout << "--------------- NORMAL --------------" << endl; break;
					case MT_HARD:
						cout << "--------------- HARD --------------" << endl; break;
					}
					//�÷��̾� ���� ���
					
					cout << "�̸� : " << tPlayer.strName << endl;
					cout << "\t���� : " << tPlayer.strJobName << endl;
					cout << "���� : " << tPlayer.iLevel << "\t����ġ : " <<
						tPlayer.iExp << endl;
					cout << "���ݷ� : " << tPlayer.iAttackMin << " - " <<
						tPlayer.iAttackMin << " - " <<
						tPlayer.iAttackMax << "\t���� : " << tPlayer.iArmorMin <<
						" - " << tPlayer.iArmorMax << endl;
					cout << "ü�� : " << tPlayer.iHP << " / " << tPlayer.iHPMax << endl;
					cout << "���� : " << tPlayer.iMP << " / " << tPlayer.iMPMax << endl;
					cout << "������� : " << tPlayer.tInventory.iGold << " Gold" << endl << endl;

					//���� ���� ���
					cout << "---------------MONSTER---------------" << endl;
					cout << "�̸� : " << tMonster.strName << "\t���� : " <<
						tPlayer.iLevel << endl;
					cout << "���ݷ� : " << tMonster.iAttackMin << " - " <<
						tMonster.iAttackMin << " - " <<
						tMonster.iAttackMax << "\t���� : " << tMonster.iArmorMin <<
						" - " << tMonster.iArmorMax << endl;
					cout << "ü�� : " << tMonster.iHP << " / " << tMonster.iHPMax << endl;
					cout << "���� : " << tMonster.iMP << " / " << tMonster.iMPMax << endl;
					cout << "ȹ�����ġ : " << tMonster.iExp << "\tȹ���� : " <<
						tMonster.iGoldMin << " - " << tMonster.iGoldMax << endl<<endl;

					cout << "1. ����" << endl;
					cout << "2. ��������" << endl;
					cout << "�޴��� �����ϼ��� : ";
					cin >> iMenu;

					if (cin.fail()) {
						cin.clear();
						cin.ignore(1024, '\n');
						continue;
					}

					else if (iMenu == BATTLE_BACK) break;

					switch (iMenu)
					{
					case BATTLE_ATTACK:
					{
						//���� ��� Min 5 Max 15������� 
						//15 - 5+1�� �ϸ� 11�� �ȴ�. 11�� ���� �������� 0 ~10��
						//������ �ǰ� ���⿡ Min���� 5�� ���ϰ� �Ǹ�
						//+1�� �ؼ� 5~15���̷� ���� ������ �Ǵ°��̴�
						int iAttack = rand() % (tPlayer.iAttackMax - tPlayer.iAttackMin + 1) +
							tPlayer.iAttackMin;
						int iArmor = rand() % (tMonster.iArmorMax - tMonster.iArmorMin + 1) +
							tMonster.iArmorMin;

						int iDamage = iAttack - iArmor;
						// ���׿����� : ���ǽ� ? true�϶��� : false�϶���;
						iDamage = iDamage < 1 ? 1 : iDamage;

						/*if (iDamage < 1)
							iDamage = 1;*/

						//���� HP�� ���ҽ�Ų��.
						tMonster.iHP -= iDamage;
						cout << tPlayer.strName << " �� " << tMonster.strName <<
							"���� " << iDamage << " ���ظ� �������ϴ�." << endl;

						//���Ͱ� �׾��� ��츦 ó���Ѵ�.
						if (tMonster.iHP <= 0) {
							cout << tMonster.strName << " ���Ͱ� ����Ͽ����ϴ�." << endl;

							tPlayer.iExp += tMonster.iExp;
							int iGold = (rand() % (tMonster.iGoldMax - tMonster.iGoldMin + 1) +
								tMonster.iGoldMin);
							tPlayer.tInventory.iGold += iGold;

							cout << tMonster.iExp << " ����ġ�� ȹ���Ͽ����ϴ�. " << endl;
							cout << iGold << " Gold�� ȹ���Ͽ����ϴ�." << endl;

							tMonster.iHP = tMonster.iHPMax;
							tMonster.iMP = tMonster.iMPMax;
							system("pause");
							break;
						}
						// ���Ͱ� ����ִٸ� �÷��̾ �����Ѵ�.
						iAttack = rand() % (tMonster.iAttackMax - tMonster.iAttackMin + 1) +
							tMonster.iAttackMin;
						iArmor = rand() % (tPlayer.iArmorMax - tPlayer.iArmorMin + 1) +
							tPlayer.iArmorMin;


						iDamage = iAttack - iArmor;
						// ���׿����� : ���ǽ� ? true�϶��� : false�϶���;
						iDamage = iDamage < 1 ? 1 : iDamage;



						/*if (iDamage < 1)
							iDamage = 1;*/

						tPlayer.iHP -= iDamage;

						cout << tMonster.strName << " �� " << tPlayer.strName <<
							"���� " << iDamage << " ���ظ� �������ϴ�." << endl;

						if (tPlayer.iHP <= 0) {
							cout << tPlayer.strName << " �÷��̾ ����Ͽ����ϴ�." << endl;
						
							int iExp = tPlayer.iExp * 0.1f;
							int iGold = tPlayer.tInventory.iGold * 0.1f;

							tPlayer.iExp -= iExp;
							tPlayer.tInventory.iGold -= iGold;

							cout << iExp << " ����ġ�� �Ҿ����ϴ�." << endl;
							cout << iGold << " Gold�� �Ҿ����ϴ�." << endl;

							//�÷��̾��� HP �� MP�� ȸ���Ѵ�.
							tPlayer.iHP = tPlayer.iHPMax;
							tPlayer.iMP = tPlayer.iMPMax;

						}
						system("pause");
					}
					break;
					}

				}
		case MM_STORE:
			while (true)
			{
				system("cls");
				cout << "---------------STORE---------------" << endl;
				cout << "1. �������" << endl;
				cout << "2. ������" << endl;
				cout << "3. �ڷΰ���" << endl;
				cout << "������ �����ϼ��� : ";
				cin >> iMenu;

				if (cin.fail()) {
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}
				else if (iMenu == SM_BACK) break;

				switch (iMenu) {
				case SM_WEAPON:
					while (true) {
						system("cls");
						cout << "--------------- ARMOR_STORE---------------" << endl;
						//�ǸŸ���� �����ش�
						for (int i = 0; i < STORE_WEAPON_MAX; i++)
						{
							cout << i + 1 << ". �̸� : " << tStoreWeapon[i].strName << 
								"\t���� : " << tStoreWeapon[i].strTypeName << endl;
							cout << "���ݷ� : " << tStoreWeapon[i].iMin << " - " << tStoreWeapon[i].iMax << endl;
							cout << "�ǸŰ��� : " << tStoreWeapon[i].iPrice << 
								"\t���Ű��� : " << tStoreWeapon[i].iSell << endl;
							cout << "���� : " << tStoreWeapon[i].strDesc << endl << endl;
						}
					
					cout << STORE_WEAPON_MAX + 1 << ". �ڷΰ���" << endl;
					cout << "�����ݾ� : " << tPlayer.tInventory.iGold << "Gold" << endl;
					cout << "�������� : " << INVENTORY_MAX - tPlayer.tInventory.iItemCount << endl;
					cout << "������ �������� �����ϼ��� : ";
					cin >> iMenu;

					if (cin.fail()) {
						cin.ignore(1024, '\n');
						continue;
					}
					else if (iMenu == STORE_WEAPON_MAX + 1)
						break;
					else if (iMenu<1 || iMenu > STORE_WEAPON_MAX + 1) {
						cout << "�߸� �����Ͽ����ϴ�." << endl;
						system("pause");
						continue;
					}
					//���� �ǸŸ�� �迭�� �ε����� �����ش�.
					int iWeaponIndex = iMenu - 1;

					//�κ��丮�� ��á���� �˻��Ѵ�.
					if (tPlayer.tInventory.iItemCount == INVENTORY_MAX) {

						cout << "������ �� á���ϴ�." << endl;
						system("pause");
						continue;
					}
					

					else if (tPlayer.tInventory.iGold < tStoreWeapon[iWeaponIndex].iPrice) {
						cout << "�������� �����մϴ�." << endl;
						system("pause");
						continue;
					}
					//ó���� iItemCount�� �ϳ��� �߰��Ǿ� ���� �ʱ� ������ 0���� �ʱ�ȭ
					//�Ǿ������Ƿ� 0�� �ε����� ������ �������� �߰��ϰ� �ȴ�. �׸���
					//ī��Ʈ�� 1�� �ȴ�. �������� �߰��� ���� 1�� �ε����� �߰��ϰ� �ȴ�.
					tPlayer.tInventory.tItem[tPlayer.tInventory.iItemCount] =
						tStoreWeapon[iWeaponIndex];
					++tPlayer.tInventory.iItemCount;

					//��带 �����Ѵ�.
					tPlayer.tInventory.iGold -= tStoreWeapon[iWeaponIndex].iPrice;

					cout << tStoreWeapon[iWeaponIndex].strName << "�������� �����Ͽ����ϴ�." << endl;
					system("pause");
				}
				break;
				case SM_ARMOR: 
					break;

				}
			}
			break;
		case MM_INVENTORY:
			cout << "--------------- BAG --------------" << endl;
			cout << "---------------INFORMATION---------------" << endl;
			cout << "�̸� : " << tPlayer.strName << endl;
			cout << "���� : " << tPlayer.strJobName << endl;
			cout << "���� : " << tPlayer.iLevel << endl;
			cout << "���ݷ� : " << tPlayer.iAttackMin << endl;
			cout << "���� : " << tPlayer.iArmorMax << endl;
			cout << "ü�� : " << tPlayer.iHP << " / " << tPlayer.iHPMax << endl;
			cout << "���� : " << tPlayer.iMP << " / " << tPlayer.iMPMax << endl;
			cout << "������� : " << tPlayer.tInventory.iGold << " Gold" << endl;
			for (int i = 0; tPlayer.tInventory.iItemCount; i++) {
				cout << i + 1 << "�̸� : " << tPlayer.tInventory.tItem[i].strName << 
					"\t���� : " << tPlayer.tInventory.tItem[i].strTypeName << endl;
				cout << "���ݷ� : " << tPlayer.tInventory.tItem[i].iMin << " - " << tPlayer.tInventory.tItem[i].iMax << endl;
				cout << "�ǸŰ��� : " << tPlayer.tInventory.tItem[i].iPrice << 
					"\t���Ű��� : " << tPlayer.tInventory.tItem[i].iSell << endl;
				cout << "���� : " << tStoreWeapon[i].strDesc << endl << endl;
			}

			system("pause");
			break;
		default:
			cout << "�� �������ϼ̽��ϴ�." << endl;
			break;
			}
		}
	}
	return 0;

}