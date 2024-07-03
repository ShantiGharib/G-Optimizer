#pragma once

namespace UserInterfaceWizard {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Windows;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

/// <summary>
/// Summary for CharacterSettingsDialogWindow
/// </summary>
public ref class CharacterSettingsDialogWindow : public System::Windows::Forms::Form {
String^ Team_Member_0;
String^ Team_Member_1;
String^ Team_Member_2;
String^ Team_Member_3;
#define Albedo_Buff Albedo_Burst_Elemental_Mastery
int Albedo_Burst_Elemental_Mastery;
#define Alhaitham_Buff Alhaitham_C4_Elemental_Mastery
 int Alhaitham_C4_Elemental_Mastery;
#define Aloy_Buff Aloy_Skill_ATK_percent
int Aloy_Skill_ATK_percent;
#define Amber_Buff Amber_C6_Atk_Percent_Buff
 int Amber_C6_Atk_Percent_Buff;
#define Arataki_Itto_Buff;
#define Arlecchino_Buff;
#define Baizhu_Buff;
#define Barbara_Buff;
#define Beidou_Buff;
#define Bennett_Buff;
#define Candace_Buff;
#define Charlotte_Buff;
#define Chevreuse_Buff;
#define Childe_Buff;
#define Chiori_Buff;
#define Chongyun_Buff;
#define Clorinde_Buff;
#define Collei_Buff;
#define Cyno_Buff;
#define Dehya_Buff;
#define Diluc_Buff;
#define Diona_Buff;
#define Dori_Buff;
#define Eula_Buff;
#define Faruzan_Buff;
#define Fischl_Buff;
#define Freminet_Buff;
#define Furina_Buff;
#define Gaming_Buff;
#define Ganyu_Buff;
#define Gorou_Buff;
#define Heizou_Buff;
#define Hu_Tao_Buff;
#define Jean_Buff;
#define Kaeya_Buff;
#define Kamisato_Ayaka_Buff;
#define Kamisato_Ayato_Buff;
#define Kaveh_Buff;
#define Kazuha_Buff;
#define Keqing_Buff;
#define Kirara_Buff;
#define Klee_Buff;
#define Kujou_Sara_Buff;
#define Kuki_Shinobu_Buff;
#define Layla_Buff;
#define Lisa_Buff;
#define Lynette_Buff;
#define Lynney_Buff;
#define Mika_Buff;
#define Mona_Buff;
#define Nahida_Buff;
#define Navia_Buff;
#define Nilou_Buff;
#define Ningguang_Buff;
#define Noelle_Buff;
#define Nuevillette_Buff;
#define Qiqi_Buff;
#define Raiden_Shogun_Buff;
#define Razor_Buff;
#define Rosaria_Buff;
#define Sangonomiya_Kokomi_Buff;
#define Sayu_Buff;
#define Sethos_Buff;
#define Shenhe_Buff;
#define Sigewinne_Buff;
#define Sucrose_Buff;
#define Thoma_Buff;
#define Tighnari_Buff;
#define Traveler_Buff;
#define Venti_Buff;
#define Wanderer_Buff;
#define Wriothesley_Buff;
#define Xiangling_Buff;
#define Xianyun_Buff;
#define Xiao_Buff;
#define Xingqiu_Buff;
#define Xinyan_Buff;
#define Yae_Miko_Buff;
#define Yanfei_Buff;
#define Yaoyao_Buff;
#define Yelan_Buff;
#define Yoimiya_Buff;
#define Yunjin_Buff;
#define Zhongli_Buff;
public:
CharacterSettingsDialogWindow(void)
{
InitializeComponent();
//
//TODO: Add the constructor code here
//
}

protected:
/// <summary>
/// Clean up any resources being used.
/// </summary>
~CharacterSettingsDialogWindow()
{
if (components)
{
delete components;
}
}

protected:











private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::ComboBox^ comboBox7;
private: System::Windows::Forms::ComboBox^ comboBox8;
private: System::Windows::Forms::ComboBox^ comboBox9;
private: System::Windows::Forms::ComboBox^ comboBox10;
private: System::Windows::Forms::ComboBox^ comboBox11;
private: System::Windows::Forms::ComboBox^ comboBox12;
private: System::Windows::Forms::ComboBox^ comboBox13;
private: System::Windows::Forms::ComboBox^ comboBox14;
private: System::Windows::Forms::ComboBox^ comboBox15;
private: System::Windows::Forms::ComboBox^ comboBox16;
private: System::Windows::Forms::ComboBox^ comboBox17;
private: System::Windows::Forms::ComboBox^ comboBox18;
private: System::Windows::Forms::ComboBox^ comboBox19;
private: System::Windows::Forms::ComboBox^ comboBox20;
private: System::Windows::Forms::ComboBox^ comboBox21;
private: System::Windows::Forms::ComboBox^ comboBox22;
private: System::Windows::Forms::ComboBox^ comboBox23;
private: System::Windows::Forms::ComboBox^ comboBox24;
private: System::Windows::Forms::ComboBox^ comboBox25;
private: System::Windows::Forms::ComboBox^ comboBox26;
private: System::Windows::Forms::ComboBox^ comboBox27;
private: System::Windows::Forms::ComboBox^ comboBox28;
private: System::Windows::Forms::ComboBox^ comboBox29;
private: System::Windows::Forms::ComboBox^ comboBox30;
private: System::Windows::Forms::ComboBox^ comboBox31;
private: System::Windows::Forms::ComboBox^ comboBox32;
private: System::Windows::Forms::ComboBox^ comboBox33;
private: System::Windows::Forms::ComboBox^ comboBox34;
private: System::Windows::Forms::ComboBox^ comboBox35;
private: System::Windows::Forms::ComboBox^ comboBox36;
private: System::Windows::Forms::ComboBox^ comboBox37;
private: System::Windows::Forms::ComboBox^ comboBox38;
private: System::Windows::Forms::ComboBox^ comboBox39;
private: System::Windows::Forms::ComboBox^ comboBox40;
private: System::Windows::Forms::ComboBox^ comboBox41;
private: System::Windows::Forms::ComboBox^ comboBox42;
private: System::Windows::Forms::ComboBox^ comboBox43;
private: System::Windows::Forms::ComboBox^ comboBox44;
private: System::Windows::Forms::ComboBox^ comboBox45;
private: System::Windows::Forms::ComboBox^ comboBox46;
private: System::Windows::Forms::ComboBox^ comboBox47;
private: System::Windows::Forms::ComboBox^ comboBox48;
private: System::Windows::Forms::ComboBox^ comboBox49;
private: System::Windows::Forms::ComboBox^ comboBox50;
private: System::Windows::Forms::ComboBox^ comboBox51;
private: System::Windows::Forms::ComboBox^ comboBox52;
private: System::Windows::Forms::ComboBox^ comboBox53;
private: System::Windows::Forms::ComboBox^ comboBox54;
private: System::Windows::Forms::ComboBox^ comboBox55;
private: System::Windows::Forms::ComboBox^ comboBox56;
private: System::Windows::Forms::ComboBox^ comboBox57;
private: System::Windows::Forms::ComboBox^ comboBox58;
private: System::Windows::Forms::ComboBox^ comboBox59;
private: System::Windows::Forms::ComboBox^ comboBox60;
private: System::Windows::Forms::ComboBox^ comboBox61;
private: System::Windows::Forms::ComboBox^ comboBox62;
private: System::Windows::Forms::ComboBox^ comboBox63;
private: System::Windows::Forms::ComboBox^ comboBox64;
private: System::Windows::Forms::ComboBox^ comboBox65;
private: System::Windows::Forms::ComboBox^ comboBox66;
private: System::Windows::Forms::ComboBox^ comboBox67;
private: System::Windows::Forms::ComboBox^ comboBox68;
private: System::Windows::Forms::ComboBox^ comboBox69;
private: System::Windows::Forms::ComboBox^ comboBox70;
private: System::Windows::Forms::ComboBox^ comboBox71;
private: System::Windows::Forms::ComboBox^ comboBox72;
private: System::Windows::Forms::ComboBox^ comboBox73;
private: System::Windows::Forms::ComboBox^ comboBox74;
private: System::Windows::Forms::ComboBox^ comboBox75;
private: System::Windows::Forms::ComboBox^ comboBox76;
private: System::Windows::Forms::ComboBox^ comboBox77;
private: System::Windows::Forms::ComboBox^ comboBox78;
private: System::Windows::Forms::ComboBox^ comboBox79;
private: System::Windows::Forms::ComboBox^ comboBox80;
private: System::Windows::Forms::ComboBox^ comboBox81;
private: System::Windows::Forms::ComboBox^ comboBox82;
private: System::Windows::Forms::ComboBox^ comboBox83;
private: System::Windows::Forms::ComboBox^ comboBox84;
private: System::Windows::Forms::ComboBox^ comboBox85;
private: System::Windows::Forms::ComboBox^ comboBox86;
private: System::Windows::Forms::ComboBox^ comboBox87;
private: System::Windows::Forms::ComboBox^ comboBox88;
private: System::Windows::Forms::ComboBox^ comboBox89;
private: System::Windows::Forms::ComboBox^ comboBox90;
private: System::Windows::Forms::ComboBox^ comboBox91;
private: System::Windows::Forms::ComboBox^ comboBox92;
private: System::Windows::Forms::ComboBox^ comboBox93;
private: System::Windows::Forms::ComboBox^ comboBox94;
private: System::Windows::Forms::ComboBox^ comboBox95;
private: System::Windows::Forms::ComboBox^ comboBox96;
private: System::Windows::Forms::ComboBox^ comboBox97;
private: System::Windows::Forms::ComboBox^ comboBox98;
private: System::Windows::Forms::ComboBox^ comboBox99;
private: System::Windows::Forms::ComboBox^ comboBox100;
private: System::Windows::Forms::ComboBox^ comboBox101;
private: System::Windows::Forms::ComboBox^ comboBox102;
private: System::Windows::Forms::ComboBox^ comboBox103;
private: System::Windows::Forms::ComboBox^ comboBox104;
private: System::Windows::Forms::ComboBox^ comboBox105;
private: System::Windows::Forms::ComboBox^ comboBox106;
private: System::Windows::Forms::ComboBox^ comboBox107;
private: System::Windows::Forms::ComboBox^ comboBox108;
private: System::Windows::Forms::ComboBox^ comboBox109;
private: System::Windows::Forms::ComboBox^ comboBox110;
private: System::Windows::Forms::ComboBox^ comboBox111;
private: System::Windows::Forms::ComboBox^ comboBox112;
private: System::Windows::Forms::ComboBox^ comboBox113;
private: System::Windows::Forms::ComboBox^ comboBox114;
private: System::Windows::Forms::ComboBox^ comboBox115;
private: System::Windows::Forms::ComboBox^ comboBox116;
private: System::Windows::Forms::ComboBox^ comboBox117;
private: System::Windows::Forms::ComboBox^ comboBox118;
private: System::Windows::Forms::ComboBox^ comboBox119;
private: System::Windows::Forms::ComboBox^ comboBox120;









private: System::ComponentModel::IContainer^ components;

private:
/// <summary>
/// Required designer variable.
/// </summary>


#pragma region Windows Form Designer generated code
/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>
void InitializeComponent(void)
{
this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox17 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox18 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox19 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox20 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox21 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox22 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox23 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox24 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox25 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox26 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox27 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox28 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox29 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox30 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox31 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox32 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox33 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox34 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox35 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox36 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox37 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox38 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox39 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox40 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox41 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox42 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox43 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox44 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox45 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox46 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox47 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox48 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox49 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox50 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox51 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox52 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox53 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox54 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox55 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox56 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox57 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox58 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox59 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox60 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox61 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox62 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox63 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox64 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox65 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox66 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox67 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox68 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox69 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox70 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox71 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox72 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox73 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox74 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox75 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox76 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox77 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox78 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox79 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox80 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox81 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox82 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox83 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox84 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox85 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox86 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox87 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox88 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox89 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox90 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox91 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox92 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox93 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox94 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox95 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox96 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox97 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox98 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox99 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox100 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox101 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox102 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox103 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox104 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox105 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox106 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox107 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox108 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox109 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox110 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox111 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox112 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox113 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox114 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox115 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox116 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox117 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox118 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox119 = (gcnew System::Windows::Forms::ComboBox());
this->comboBox120 = (gcnew System::Windows::Forms::ComboBox());
this->flowLayoutPanel1->SuspendLayout();
this->SuspendLayout();
// 
// flowLayoutPanel1
// 
this->flowLayoutPanel1->AutoScroll = true;
this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::Window;
this->flowLayoutPanel1->Controls->Add(this->comboBox1);
this->flowLayoutPanel1->Controls->Add(this->comboBox2);
this->flowLayoutPanel1->Controls->Add(this->comboBox3);
this->flowLayoutPanel1->Controls->Add(this->comboBox4);
this->flowLayoutPanel1->Controls->Add(this->comboBox5);
this->flowLayoutPanel1->Controls->Add(this->comboBox6);
this->flowLayoutPanel1->Controls->Add(this->comboBox7);
this->flowLayoutPanel1->Controls->Add(this->comboBox8);
this->flowLayoutPanel1->Controls->Add(this->comboBox9);
this->flowLayoutPanel1->Controls->Add(this->comboBox10);
this->flowLayoutPanel1->Controls->Add(this->comboBox11);
this->flowLayoutPanel1->Controls->Add(this->comboBox12);
this->flowLayoutPanel1->Controls->Add(this->comboBox13);
this->flowLayoutPanel1->Controls->Add(this->comboBox14);
this->flowLayoutPanel1->Controls->Add(this->comboBox15);
this->flowLayoutPanel1->Controls->Add(this->comboBox16);
this->flowLayoutPanel1->Controls->Add(this->comboBox17);
this->flowLayoutPanel1->Controls->Add(this->comboBox18);
this->flowLayoutPanel1->Controls->Add(this->comboBox19);
this->flowLayoutPanel1->Controls->Add(this->comboBox20);
this->flowLayoutPanel1->Controls->Add(this->comboBox21);
this->flowLayoutPanel1->Controls->Add(this->comboBox22);
this->flowLayoutPanel1->Controls->Add(this->comboBox23);
this->flowLayoutPanel1->Controls->Add(this->comboBox24);
this->flowLayoutPanel1->Controls->Add(this->comboBox25);
this->flowLayoutPanel1->Controls->Add(this->comboBox26);
this->flowLayoutPanel1->Controls->Add(this->comboBox27);
this->flowLayoutPanel1->Controls->Add(this->comboBox28);
this->flowLayoutPanel1->Controls->Add(this->comboBox29);
this->flowLayoutPanel1->Controls->Add(this->comboBox30);
this->flowLayoutPanel1->Controls->Add(this->comboBox31);
this->flowLayoutPanel1->Controls->Add(this->comboBox32);
this->flowLayoutPanel1->Controls->Add(this->comboBox33);
this->flowLayoutPanel1->Controls->Add(this->comboBox34);
this->flowLayoutPanel1->Controls->Add(this->comboBox35);
this->flowLayoutPanel1->Controls->Add(this->comboBox36);
this->flowLayoutPanel1->Controls->Add(this->comboBox37);
this->flowLayoutPanel1->Controls->Add(this->comboBox38);
this->flowLayoutPanel1->Controls->Add(this->comboBox39);
this->flowLayoutPanel1->Controls->Add(this->comboBox40);
this->flowLayoutPanel1->Controls->Add(this->comboBox41);
this->flowLayoutPanel1->Controls->Add(this->comboBox42);
this->flowLayoutPanel1->Controls->Add(this->comboBox43);
this->flowLayoutPanel1->Controls->Add(this->comboBox44);
this->flowLayoutPanel1->Controls->Add(this->comboBox45);
this->flowLayoutPanel1->Controls->Add(this->comboBox46);
this->flowLayoutPanel1->Controls->Add(this->comboBox47);
this->flowLayoutPanel1->Controls->Add(this->comboBox48);
this->flowLayoutPanel1->Controls->Add(this->comboBox49);
this->flowLayoutPanel1->Controls->Add(this->comboBox50);
this->flowLayoutPanel1->Controls->Add(this->comboBox51);
this->flowLayoutPanel1->Controls->Add(this->comboBox52);
this->flowLayoutPanel1->Controls->Add(this->comboBox53);
this->flowLayoutPanel1->Controls->Add(this->comboBox54);
this->flowLayoutPanel1->Controls->Add(this->comboBox55);
this->flowLayoutPanel1->Controls->Add(this->comboBox56);
this->flowLayoutPanel1->Controls->Add(this->comboBox57);
this->flowLayoutPanel1->Controls->Add(this->comboBox58);
this->flowLayoutPanel1->Controls->Add(this->comboBox59);
this->flowLayoutPanel1->Controls->Add(this->comboBox60);
this->flowLayoutPanel1->Controls->Add(this->comboBox61);
this->flowLayoutPanel1->Controls->Add(this->comboBox62);
this->flowLayoutPanel1->Controls->Add(this->comboBox63);
this->flowLayoutPanel1->Controls->Add(this->comboBox64);
this->flowLayoutPanel1->Controls->Add(this->comboBox65);
this->flowLayoutPanel1->Controls->Add(this->comboBox66);
this->flowLayoutPanel1->Controls->Add(this->comboBox67);
this->flowLayoutPanel1->Controls->Add(this->comboBox68);
this->flowLayoutPanel1->Controls->Add(this->comboBox69);
this->flowLayoutPanel1->Controls->Add(this->comboBox70);
this->flowLayoutPanel1->Controls->Add(this->comboBox71);
this->flowLayoutPanel1->Controls->Add(this->comboBox72);
this->flowLayoutPanel1->Controls->Add(this->comboBox73);
this->flowLayoutPanel1->Controls->Add(this->comboBox74);
this->flowLayoutPanel1->Controls->Add(this->comboBox75);
this->flowLayoutPanel1->Controls->Add(this->comboBox76);
this->flowLayoutPanel1->Controls->Add(this->comboBox77);
this->flowLayoutPanel1->Controls->Add(this->comboBox78);
this->flowLayoutPanel1->Controls->Add(this->comboBox79);
this->flowLayoutPanel1->Controls->Add(this->comboBox80);
this->flowLayoutPanel1->Controls->Add(this->comboBox81);
this->flowLayoutPanel1->Controls->Add(this->comboBox82);
this->flowLayoutPanel1->Controls->Add(this->comboBox83);
this->flowLayoutPanel1->Controls->Add(this->comboBox84);
this->flowLayoutPanel1->Controls->Add(this->comboBox85);
this->flowLayoutPanel1->Controls->Add(this->comboBox86);
this->flowLayoutPanel1->Controls->Add(this->comboBox87);
this->flowLayoutPanel1->Controls->Add(this->comboBox88);
this->flowLayoutPanel1->Controls->Add(this->comboBox89);
this->flowLayoutPanel1->Controls->Add(this->comboBox90);
this->flowLayoutPanel1->Controls->Add(this->comboBox91);
this->flowLayoutPanel1->Controls->Add(this->comboBox92);
this->flowLayoutPanel1->Controls->Add(this->comboBox93);
this->flowLayoutPanel1->Controls->Add(this->comboBox94);
this->flowLayoutPanel1->Controls->Add(this->comboBox95);
this->flowLayoutPanel1->Controls->Add(this->comboBox96);
this->flowLayoutPanel1->Controls->Add(this->comboBox97);
this->flowLayoutPanel1->Controls->Add(this->comboBox98);
this->flowLayoutPanel1->Controls->Add(this->comboBox99);
this->flowLayoutPanel1->Controls->Add(this->comboBox100);
this->flowLayoutPanel1->Controls->Add(this->comboBox101);
this->flowLayoutPanel1->Controls->Add(this->comboBox102);
this->flowLayoutPanel1->Controls->Add(this->comboBox103);
this->flowLayoutPanel1->Controls->Add(this->comboBox104);
this->flowLayoutPanel1->Controls->Add(this->comboBox105);
this->flowLayoutPanel1->Controls->Add(this->comboBox106);
this->flowLayoutPanel1->Controls->Add(this->comboBox107);
this->flowLayoutPanel1->Controls->Add(this->comboBox108);
this->flowLayoutPanel1->Controls->Add(this->comboBox109);
this->flowLayoutPanel1->Controls->Add(this->comboBox110);
this->flowLayoutPanel1->Controls->Add(this->comboBox111);
this->flowLayoutPanel1->Controls->Add(this->comboBox112);
this->flowLayoutPanel1->Controls->Add(this->comboBox113);
this->flowLayoutPanel1->Controls->Add(this->comboBox114);
this->flowLayoutPanel1->Controls->Add(this->comboBox115);
this->flowLayoutPanel1->Controls->Add(this->comboBox116);
this->flowLayoutPanel1->Controls->Add(this->comboBox117);
this->flowLayoutPanel1->Controls->Add(this->comboBox118);
this->flowLayoutPanel1->Controls->Add(this->comboBox119);
this->flowLayoutPanel1->Controls->Add(this->comboBox120);
this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
this->flowLayoutPanel1->Size = System::Drawing::Size(2564, 1559);
this->flowLayoutPanel1->TabIndex = 19;
// 
// comboBox1
// 
this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox1->FormattingEnabled = true;
this->comboBox1->Location = System::Drawing::Point(3, 3);
this->comboBox1->Name = L"comboBox1";
this->comboBox1->Size = System::Drawing::Size(447, 58);
this->comboBox1->TabIndex = 0;
this->comboBox1->Visible = false;
// 
// comboBox2
// 
this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox2->FormattingEnabled = true;
this->comboBox2->Location = System::Drawing::Point(3, 67);
this->comboBox2->Name = L"comboBox2";
this->comboBox2->Size = System::Drawing::Size(447, 58);
this->comboBox2->TabIndex = 1;
this->comboBox2->Visible = false;
// 
// comboBox3
// 
this->comboBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox3->FormattingEnabled = true;
this->comboBox3->Location = System::Drawing::Point(3, 131);
this->comboBox3->Name = L"comboBox3";
this->comboBox3->Size = System::Drawing::Size(447, 58);
this->comboBox3->TabIndex = 2;
this->comboBox3->Visible = false;
// 
// comboBox4
// 
this->comboBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox4->FormattingEnabled = true;
this->comboBox4->Location = System::Drawing::Point(3, 195);
this->comboBox4->Name = L"comboBox4";
this->comboBox4->Size = System::Drawing::Size(447, 58);
this->comboBox4->TabIndex = 3;
this->comboBox4->Visible = false;
// 
// comboBox5
// 
this->comboBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox5->FormattingEnabled = true;
this->comboBox5->Location = System::Drawing::Point(3, 259);
this->comboBox5->Name = L"comboBox5";
this->comboBox5->Size = System::Drawing::Size(447, 58);
this->comboBox5->TabIndex = 4;
this->comboBox5->Visible = false;
// 
// comboBox6
// 
this->comboBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox6->FormattingEnabled = true;
this->comboBox6->Location = System::Drawing::Point(3, 323);
this->comboBox6->Name = L"comboBox6";
this->comboBox6->Size = System::Drawing::Size(447, 58);
this->comboBox6->TabIndex = 5;
this->comboBox6->Visible = false;
// 
// comboBox7
// 
this->comboBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox7->FormattingEnabled = true;
this->comboBox7->Location = System::Drawing::Point(3, 387);
this->comboBox7->Name = L"comboBox7";
this->comboBox7->Size = System::Drawing::Size(447, 58);
this->comboBox7->TabIndex = 6;
this->comboBox7->Visible = false;
// 
// comboBox8
// 
this->comboBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox8->FormattingEnabled = true;
this->comboBox8->Location = System::Drawing::Point(3, 451);
this->comboBox8->Name = L"comboBox8";
this->comboBox8->Size = System::Drawing::Size(447, 58);
this->comboBox8->TabIndex = 7;
this->comboBox8->Visible = false;
// 
// comboBox9
// 
this->comboBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox9->FormattingEnabled = true;
this->comboBox9->Location = System::Drawing::Point(3, 515);
this->comboBox9->Name = L"comboBox9";
this->comboBox9->Size = System::Drawing::Size(447, 58);
this->comboBox9->TabIndex = 8;
this->comboBox9->Visible = false;
// 
// comboBox10
// 
this->comboBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox10->FormattingEnabled = true;
this->comboBox10->Location = System::Drawing::Point(3, 579);
this->comboBox10->Name = L"comboBox10";
this->comboBox10->Size = System::Drawing::Size(447, 58);
this->comboBox10->TabIndex = 9;
this->comboBox10->Visible = false;
// 
// comboBox11
// 
this->comboBox11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox11->FormattingEnabled = true;
this->comboBox11->Location = System::Drawing::Point(3, 643);
this->comboBox11->Name = L"comboBox11";
this->comboBox11->Size = System::Drawing::Size(447, 58);
this->comboBox11->TabIndex = 10;
this->comboBox11->Visible = false;
// 
// comboBox12
// 
this->comboBox12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox12->FormattingEnabled = true;
this->comboBox12->Location = System::Drawing::Point(3, 707);
this->comboBox12->Name = L"comboBox12";
this->comboBox12->Size = System::Drawing::Size(447, 58);
this->comboBox12->TabIndex = 11;
this->comboBox12->Visible = false;
// 
// comboBox13
// 
this->comboBox13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox13->FormattingEnabled = true;
this->comboBox13->Location = System::Drawing::Point(3, 771);
this->comboBox13->Name = L"comboBox13";
this->comboBox13->Size = System::Drawing::Size(447, 58);
this->comboBox13->TabIndex = 12;
this->comboBox13->Visible = false;
// 
// comboBox14
// 
this->comboBox14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox14->FormattingEnabled = true;
this->comboBox14->Location = System::Drawing::Point(3, 835);
this->comboBox14->Name = L"comboBox14";
this->comboBox14->Size = System::Drawing::Size(447, 58);
this->comboBox14->TabIndex = 13;
this->comboBox14->Visible = false;
// 
// comboBox15
// 
this->comboBox15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox15->FormattingEnabled = true;
this->comboBox15->Location = System::Drawing::Point(3, 899);
this->comboBox15->Name = L"comboBox15";
this->comboBox15->Size = System::Drawing::Size(447, 58);
this->comboBox15->TabIndex = 14;
this->comboBox15->Visible = false;
// 
// comboBox16
// 
this->comboBox16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox16->FormattingEnabled = true;
this->comboBox16->Location = System::Drawing::Point(3, 963);
this->comboBox16->Name = L"comboBox16";
this->comboBox16->Size = System::Drawing::Size(447, 58);
this->comboBox16->TabIndex = 15;
this->comboBox16->Visible = false;
// 
// comboBox17
// 
this->comboBox17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox17->FormattingEnabled = true;
this->comboBox17->Location = System::Drawing::Point(3, 1027);
this->comboBox17->Name = L"comboBox17";
this->comboBox17->Size = System::Drawing::Size(447, 58);
this->comboBox17->TabIndex = 16;
this->comboBox17->Visible = false;
// 
// comboBox18
// 
this->comboBox18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox18->FormattingEnabled = true;
this->comboBox18->Location = System::Drawing::Point(3, 1091);
this->comboBox18->Name = L"comboBox18";
this->comboBox18->Size = System::Drawing::Size(447, 58);
this->comboBox18->TabIndex = 17;
this->comboBox18->Visible = false;
// 
// comboBox19
// 
this->comboBox19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox19->FormattingEnabled = true;
this->comboBox19->Location = System::Drawing::Point(3, 1155);
this->comboBox19->Name = L"comboBox19";
this->comboBox19->Size = System::Drawing::Size(447, 58);
this->comboBox19->TabIndex = 18;
this->comboBox19->Visible = false;
// 
// comboBox20
// 
this->comboBox20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox20->FormattingEnabled = true;
this->comboBox20->Location = System::Drawing::Point(3, 1219);
this->comboBox20->Name = L"comboBox20";
this->comboBox20->Size = System::Drawing::Size(447, 58);
this->comboBox20->TabIndex = 19;
this->comboBox20->Visible = false;
// 
// comboBox21
// 
this->comboBox21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox21->FormattingEnabled = true;
this->comboBox21->Location = System::Drawing::Point(3, 1283);
this->comboBox21->Name = L"comboBox21";
this->comboBox21->Size = System::Drawing::Size(447, 58);
this->comboBox21->TabIndex = 20;
this->comboBox21->Visible = false;
// 
// comboBox22
// 
this->comboBox22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox22->FormattingEnabled = true;
this->comboBox22->Location = System::Drawing::Point(3, 1347);
this->comboBox22->Name = L"comboBox22";
this->comboBox22->Size = System::Drawing::Size(447, 58);
this->comboBox22->TabIndex = 21;
this->comboBox22->Visible = false;
// 
// comboBox23
// 
this->comboBox23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox23->FormattingEnabled = true;
this->comboBox23->Location = System::Drawing::Point(3, 1411);
this->comboBox23->Name = L"comboBox23";
this->comboBox23->Size = System::Drawing::Size(447, 58);
this->comboBox23->TabIndex = 22;
this->comboBox23->Visible = false;
// 
// comboBox24
// 
this->comboBox24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox24->FormattingEnabled = true;
this->comboBox24->Location = System::Drawing::Point(3, 1475);
this->comboBox24->Name = L"comboBox24";
this->comboBox24->Size = System::Drawing::Size(447, 58);
this->comboBox24->TabIndex = 23;
this->comboBox24->Visible = false;
// 
// comboBox25
// 
this->comboBox25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox25->FormattingEnabled = true;
this->comboBox25->Location = System::Drawing::Point(456, 3);
this->comboBox25->Name = L"comboBox25";
this->comboBox25->Size = System::Drawing::Size(447, 58);
this->comboBox25->TabIndex = 24;
this->comboBox25->Visible = false;
// 
// comboBox26
// 
this->comboBox26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox26->FormattingEnabled = true;
this->comboBox26->Location = System::Drawing::Point(456, 67);
this->comboBox26->Name = L"comboBox26";
this->comboBox26->Size = System::Drawing::Size(447, 58);
this->comboBox26->TabIndex = 25;
this->comboBox26->Visible = false;
// 
// comboBox27
// 
this->comboBox27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox27->FormattingEnabled = true;
this->comboBox27->Location = System::Drawing::Point(456, 131);
this->comboBox27->Name = L"comboBox27";
this->comboBox27->Size = System::Drawing::Size(447, 58);
this->comboBox27->TabIndex = 26;
this->comboBox27->Visible = false;
// 
// comboBox28
// 
this->comboBox28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox28->FormattingEnabled = true;
this->comboBox28->Location = System::Drawing::Point(456, 195);
this->comboBox28->Name = L"comboBox28";
this->comboBox28->Size = System::Drawing::Size(447, 58);
this->comboBox28->TabIndex = 27;
this->comboBox28->Visible = false;
// 
// comboBox29
// 
this->comboBox29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox29->FormattingEnabled = true;
this->comboBox29->Location = System::Drawing::Point(456, 259);
this->comboBox29->Name = L"comboBox29";
this->comboBox29->Size = System::Drawing::Size(447, 58);
this->comboBox29->TabIndex = 28;
this->comboBox29->Visible = false;
// 
// comboBox30
// 
this->comboBox30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox30->FormattingEnabled = true;
this->comboBox30->Location = System::Drawing::Point(456, 323);
this->comboBox30->Name = L"comboBox30";
this->comboBox30->Size = System::Drawing::Size(447, 58);
this->comboBox30->TabIndex = 29;
this->comboBox30->Visible = false;
// 
// comboBox31
// 
this->comboBox31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox31->FormattingEnabled = true;
this->comboBox31->Location = System::Drawing::Point(456, 387);
this->comboBox31->Name = L"comboBox31";
this->comboBox31->Size = System::Drawing::Size(447, 58);
this->comboBox31->TabIndex = 30;
this->comboBox31->Visible = false;
// 
// comboBox32
// 
this->comboBox32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox32->FormattingEnabled = true;
this->comboBox32->Location = System::Drawing::Point(456, 451);
this->comboBox32->Name = L"comboBox32";
this->comboBox32->Size = System::Drawing::Size(447, 58);
this->comboBox32->TabIndex = 31;
this->comboBox32->Visible = false;
// 
// comboBox33
// 
this->comboBox33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox33->FormattingEnabled = true;
this->comboBox33->Location = System::Drawing::Point(456, 515);
this->comboBox33->Name = L"comboBox33";
this->comboBox33->Size = System::Drawing::Size(447, 58);
this->comboBox33->TabIndex = 32;
this->comboBox33->Visible = false;
// 
// comboBox34
// 
this->comboBox34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox34->FormattingEnabled = true;
this->comboBox34->Location = System::Drawing::Point(456, 579);
this->comboBox34->Name = L"comboBox34";
this->comboBox34->Size = System::Drawing::Size(447, 58);
this->comboBox34->TabIndex = 33;
this->comboBox34->Visible = false;
// 
// comboBox35
// 
this->comboBox35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox35->FormattingEnabled = true;
this->comboBox35->Location = System::Drawing::Point(456, 643);
this->comboBox35->Name = L"comboBox35";
this->comboBox35->Size = System::Drawing::Size(447, 58);
this->comboBox35->TabIndex = 34;
this->comboBox35->Visible = false;
// 
// comboBox36
// 
this->comboBox36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox36->FormattingEnabled = true;
this->comboBox36->Location = System::Drawing::Point(456, 707);
this->comboBox36->Name = L"comboBox36";
this->comboBox36->Size = System::Drawing::Size(447, 58);
this->comboBox36->TabIndex = 35;
this->comboBox36->Visible = false;
// 
// comboBox37
// 
this->comboBox37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox37->FormattingEnabled = true;
this->comboBox37->Location = System::Drawing::Point(456, 771);
this->comboBox37->Name = L"comboBox37";
this->comboBox37->Size = System::Drawing::Size(447, 58);
this->comboBox37->TabIndex = 36;
this->comboBox37->Visible = false;
// 
// comboBox38
// 
this->comboBox38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox38->FormattingEnabled = true;
this->comboBox38->Location = System::Drawing::Point(456, 835);
this->comboBox38->Name = L"comboBox38";
this->comboBox38->Size = System::Drawing::Size(447, 58);
this->comboBox38->TabIndex = 37;
this->comboBox38->Visible = false;
// 
// comboBox39
// 
this->comboBox39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox39->FormattingEnabled = true;
this->comboBox39->Location = System::Drawing::Point(456, 899);
this->comboBox39->Name = L"comboBox39";
this->comboBox39->Size = System::Drawing::Size(447, 58);
this->comboBox39->TabIndex = 38;
this->comboBox39->Visible = false;
// 
// comboBox40
// 
this->comboBox40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox40->FormattingEnabled = true;
this->comboBox40->Location = System::Drawing::Point(456, 963);
this->comboBox40->Name = L"comboBox40";
this->comboBox40->Size = System::Drawing::Size(447, 58);
this->comboBox40->TabIndex = 39;
this->comboBox40->Visible = false;
// 
// comboBox41
// 
this->comboBox41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox41->FormattingEnabled = true;
this->comboBox41->Location = System::Drawing::Point(456, 1027);
this->comboBox41->Name = L"comboBox41";
this->comboBox41->Size = System::Drawing::Size(447, 58);
this->comboBox41->TabIndex = 40;
this->comboBox41->Visible = false;
// 
// comboBox42
// 
this->comboBox42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox42->FormattingEnabled = true;
this->comboBox42->Location = System::Drawing::Point(456, 1091);
this->comboBox42->Name = L"comboBox42";
this->comboBox42->Size = System::Drawing::Size(447, 58);
this->comboBox42->TabIndex = 41;
this->comboBox42->Visible = false;
// 
// comboBox43
// 
this->comboBox43->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox43->FormattingEnabled = true;
this->comboBox43->Location = System::Drawing::Point(456, 1155);
this->comboBox43->Name = L"comboBox43";
this->comboBox43->Size = System::Drawing::Size(447, 58);
this->comboBox43->TabIndex = 42;
this->comboBox43->Visible = false;
// 
// comboBox44
// 
this->comboBox44->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox44->FormattingEnabled = true;
this->comboBox44->Location = System::Drawing::Point(456, 1219);
this->comboBox44->Name = L"comboBox44";
this->comboBox44->Size = System::Drawing::Size(447, 58);
this->comboBox44->TabIndex = 43;
this->comboBox44->Visible = false;
// 
// comboBox45
// 
this->comboBox45->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox45->FormattingEnabled = true;
this->comboBox45->Location = System::Drawing::Point(456, 1283);
this->comboBox45->Name = L"comboBox45";
this->comboBox45->Size = System::Drawing::Size(447, 58);
this->comboBox45->TabIndex = 44;
this->comboBox45->Visible = false;
// 
// comboBox46
// 
this->comboBox46->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox46->FormattingEnabled = true;
this->comboBox46->Location = System::Drawing::Point(456, 1347);
this->comboBox46->Name = L"comboBox46";
this->comboBox46->Size = System::Drawing::Size(447, 58);
this->comboBox46->TabIndex = 45;
this->comboBox46->Visible = false;
// 
// comboBox47
// 
this->comboBox47->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox47->FormattingEnabled = true;
this->comboBox47->Location = System::Drawing::Point(456, 1411);
this->comboBox47->Name = L"comboBox47";
this->comboBox47->Size = System::Drawing::Size(447, 58);
this->comboBox47->TabIndex = 46;
this->comboBox47->Visible = false;
// 
// comboBox48
// 
this->comboBox48->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox48->FormattingEnabled = true;
this->comboBox48->Location = System::Drawing::Point(456, 1475);
this->comboBox48->Name = L"comboBox48";
this->comboBox48->Size = System::Drawing::Size(447, 58);
this->comboBox48->TabIndex = 47;
this->comboBox48->Visible = false;
// 
// comboBox49
// 
this->comboBox49->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox49->FormattingEnabled = true;
this->comboBox49->Location = System::Drawing::Point(909, 3);
this->comboBox49->Name = L"comboBox49";
this->comboBox49->Size = System::Drawing::Size(447, 58);
this->comboBox49->TabIndex = 48;
this->comboBox49->Visible = false;
// 
// comboBox50
// 
this->comboBox50->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox50->FormattingEnabled = true;
this->comboBox50->Location = System::Drawing::Point(909, 67);
this->comboBox50->Name = L"comboBox50";
this->comboBox50->Size = System::Drawing::Size(447, 58);
this->comboBox50->TabIndex = 49;
this->comboBox50->Visible = false;
// 
// comboBox51
// 
this->comboBox51->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox51->FormattingEnabled = true;
this->comboBox51->Location = System::Drawing::Point(909, 131);
this->comboBox51->Name = L"comboBox51";
this->comboBox51->Size = System::Drawing::Size(447, 58);
this->comboBox51->TabIndex = 50;
this->comboBox51->Visible = false;
// 
// comboBox52
// 
this->comboBox52->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox52->FormattingEnabled = true;
this->comboBox52->Location = System::Drawing::Point(909, 195);
this->comboBox52->Name = L"comboBox52";
this->comboBox52->Size = System::Drawing::Size(447, 58);
this->comboBox52->TabIndex = 51;
this->comboBox52->Visible = false;
// 
// comboBox53
// 
this->comboBox53->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox53->FormattingEnabled = true;
this->comboBox53->Location = System::Drawing::Point(909, 259);
this->comboBox53->Name = L"comboBox53";
this->comboBox53->Size = System::Drawing::Size(447, 58);
this->comboBox53->TabIndex = 52;
this->comboBox53->Visible = false;
// 
// comboBox54
// 
this->comboBox54->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox54->FormattingEnabled = true;
this->comboBox54->Location = System::Drawing::Point(909, 323);
this->comboBox54->Name = L"comboBox54";
this->comboBox54->Size = System::Drawing::Size(447, 58);
this->comboBox54->TabIndex = 53;
this->comboBox54->Visible = false;
// 
// comboBox55
// 
this->comboBox55->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox55->FormattingEnabled = true;
this->comboBox55->Location = System::Drawing::Point(909, 387);
this->comboBox55->Name = L"comboBox55";
this->comboBox55->Size = System::Drawing::Size(447, 58);
this->comboBox55->TabIndex = 54;
this->comboBox55->Visible = false;
// 
// comboBox56
// 
this->comboBox56->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox56->FormattingEnabled = true;
this->comboBox56->Location = System::Drawing::Point(909, 451);
this->comboBox56->Name = L"comboBox56";
this->comboBox56->Size = System::Drawing::Size(447, 58);
this->comboBox56->TabIndex = 55;
this->comboBox56->Visible = false;
// 
// comboBox57
// 
this->comboBox57->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox57->FormattingEnabled = true;
this->comboBox57->Location = System::Drawing::Point(909, 515);
this->comboBox57->Name = L"comboBox57";
this->comboBox57->Size = System::Drawing::Size(447, 58);
this->comboBox57->TabIndex = 56;
this->comboBox57->Visible = false;
// 
// comboBox58
// 
this->comboBox58->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox58->FormattingEnabled = true;
this->comboBox58->Location = System::Drawing::Point(909, 579);
this->comboBox58->Name = L"comboBox58";
this->comboBox58->Size = System::Drawing::Size(447, 58);
this->comboBox58->TabIndex = 57;
this->comboBox58->Visible = false;
// 
// comboBox59
// 
this->comboBox59->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox59->FormattingEnabled = true;
this->comboBox59->Location = System::Drawing::Point(909, 643);
this->comboBox59->Name = L"comboBox59";
this->comboBox59->Size = System::Drawing::Size(447, 58);
this->comboBox59->TabIndex = 58;
this->comboBox59->Visible = false;
// 
// comboBox60
// 
this->comboBox60->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox60->FormattingEnabled = true;
this->comboBox60->Location = System::Drawing::Point(909, 707);
this->comboBox60->Name = L"comboBox60";
this->comboBox60->Size = System::Drawing::Size(447, 58);
this->comboBox60->TabIndex = 59;
this->comboBox60->Visible = false;
// 
// comboBox61
// 
this->comboBox61->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox61->FormattingEnabled = true;
this->comboBox61->Location = System::Drawing::Point(909, 771);
this->comboBox61->Name = L"comboBox61";
this->comboBox61->Size = System::Drawing::Size(447, 58);
this->comboBox61->TabIndex = 60;
this->comboBox61->Visible = false;
// 
// comboBox62
// 
this->comboBox62->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox62->FormattingEnabled = true;
this->comboBox62->Location = System::Drawing::Point(909, 835);
this->comboBox62->Name = L"comboBox62";
this->comboBox62->Size = System::Drawing::Size(447, 58);
this->comboBox62->TabIndex = 61;
this->comboBox62->Visible = false;
// 
// comboBox63
// 
this->comboBox63->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox63->FormattingEnabled = true;
this->comboBox63->Location = System::Drawing::Point(909, 899);
this->comboBox63->Name = L"comboBox63";
this->comboBox63->Size = System::Drawing::Size(447, 58);
this->comboBox63->TabIndex = 62;
this->comboBox63->Visible = false;
// 
// comboBox64
// 
this->comboBox64->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox64->FormattingEnabled = true;
this->comboBox64->Location = System::Drawing::Point(909, 963);
this->comboBox64->Name = L"comboBox64";
this->comboBox64->Size = System::Drawing::Size(447, 58);
this->comboBox64->TabIndex = 63;
this->comboBox64->Visible = false;
// 
// comboBox65
// 
this->comboBox65->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox65->FormattingEnabled = true;
this->comboBox65->Location = System::Drawing::Point(909, 1027);
this->comboBox65->Name = L"comboBox65";
this->comboBox65->Size = System::Drawing::Size(447, 58);
this->comboBox65->TabIndex = 64;
this->comboBox65->Visible = false;
// 
// comboBox66
// 
this->comboBox66->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox66->FormattingEnabled = true;
this->comboBox66->Location = System::Drawing::Point(909, 1091);
this->comboBox66->Name = L"comboBox66";
this->comboBox66->Size = System::Drawing::Size(447, 58);
this->comboBox66->TabIndex = 65;
this->comboBox66->Visible = false;
// 
// comboBox67
// 
this->comboBox67->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox67->FormattingEnabled = true;
this->comboBox67->Location = System::Drawing::Point(909, 1155);
this->comboBox67->Name = L"comboBox67";
this->comboBox67->Size = System::Drawing::Size(447, 58);
this->comboBox67->TabIndex = 66;
this->comboBox67->Visible = false;
// 
// comboBox68
// 
this->comboBox68->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox68->FormattingEnabled = true;
this->comboBox68->Location = System::Drawing::Point(909, 1219);
this->comboBox68->Name = L"comboBox68";
this->comboBox68->Size = System::Drawing::Size(447, 58);
this->comboBox68->TabIndex = 67;
this->comboBox68->Visible = false;
// 
// comboBox69
// 
this->comboBox69->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox69->FormattingEnabled = true;
this->comboBox69->Location = System::Drawing::Point(909, 1283);
this->comboBox69->Name = L"comboBox69";
this->comboBox69->Size = System::Drawing::Size(447, 58);
this->comboBox69->TabIndex = 68;
this->comboBox69->Visible = false;
// 
// comboBox70
// 
this->comboBox70->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox70->FormattingEnabled = true;
this->comboBox70->Location = System::Drawing::Point(909, 1347);
this->comboBox70->Name = L"comboBox70";
this->comboBox70->Size = System::Drawing::Size(447, 58);
this->comboBox70->TabIndex = 69;
this->comboBox70->Visible = false;
// 
// comboBox71
// 
this->comboBox71->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox71->FormattingEnabled = true;
this->comboBox71->Location = System::Drawing::Point(909, 1411);
this->comboBox71->Name = L"comboBox71";
this->comboBox71->Size = System::Drawing::Size(447, 58);
this->comboBox71->TabIndex = 70;
this->comboBox71->Visible = false;
// 
// comboBox72
// 
this->comboBox72->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox72->FormattingEnabled = true;
this->comboBox72->Location = System::Drawing::Point(909, 1475);
this->comboBox72->Name = L"comboBox72";
this->comboBox72->Size = System::Drawing::Size(447, 58);
this->comboBox72->TabIndex = 71;
this->comboBox72->Visible = false;
// 
// comboBox73
// 
this->comboBox73->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox73->FormattingEnabled = true;
this->comboBox73->Location = System::Drawing::Point(1362, 3);
this->comboBox73->Name = L"comboBox73";
this->comboBox73->Size = System::Drawing::Size(447, 58);
this->comboBox73->TabIndex = 72;
this->comboBox73->Visible = false;
// 
// comboBox74
// 
this->comboBox74->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox74->FormattingEnabled = true;
this->comboBox74->Location = System::Drawing::Point(1362, 67);
this->comboBox74->Name = L"comboBox74";
this->comboBox74->Size = System::Drawing::Size(447, 58);
this->comboBox74->TabIndex = 73;
this->comboBox74->Visible = false;
// 
// comboBox75
// 
this->comboBox75->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox75->FormattingEnabled = true;
this->comboBox75->Location = System::Drawing::Point(1362, 131);
this->comboBox75->Name = L"comboBox75";
this->comboBox75->Size = System::Drawing::Size(447, 58);
this->comboBox75->TabIndex = 74;
this->comboBox75->Visible = false;
// 
// comboBox76
// 
this->comboBox76->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox76->FormattingEnabled = true;
this->comboBox76->Location = System::Drawing::Point(1362, 195);
this->comboBox76->Name = L"comboBox76";
this->comboBox76->Size = System::Drawing::Size(447, 58);
this->comboBox76->TabIndex = 75;
this->comboBox76->Visible = false;
// 
// comboBox77
// 
this->comboBox77->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox77->FormattingEnabled = true;
this->comboBox77->Location = System::Drawing::Point(1362, 259);
this->comboBox77->Name = L"comboBox77";
this->comboBox77->Size = System::Drawing::Size(447, 58);
this->comboBox77->TabIndex = 76;
this->comboBox77->Visible = false;
// 
// comboBox78
// 
this->comboBox78->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox78->FormattingEnabled = true;
this->comboBox78->Location = System::Drawing::Point(1362, 323);
this->comboBox78->Name = L"comboBox78";
this->comboBox78->Size = System::Drawing::Size(447, 58);
this->comboBox78->TabIndex = 77;
this->comboBox78->Visible = false;
// 
// comboBox79
// 
this->comboBox79->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox79->FormattingEnabled = true;
this->comboBox79->Location = System::Drawing::Point(1362, 387);
this->comboBox79->Name = L"comboBox79";
this->comboBox79->Size = System::Drawing::Size(447, 58);
this->comboBox79->TabIndex = 78;
this->comboBox79->Visible = false;
// 
// comboBox80
// 
this->comboBox80->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox80->FormattingEnabled = true;
this->comboBox80->Location = System::Drawing::Point(1362, 451);
this->comboBox80->Name = L"comboBox80";
this->comboBox80->Size = System::Drawing::Size(447, 58);
this->comboBox80->TabIndex = 79;
this->comboBox80->Visible = false;
// 
// comboBox81
// 
this->comboBox81->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox81->FormattingEnabled = true;
this->comboBox81->Location = System::Drawing::Point(1362, 515);
this->comboBox81->Name = L"comboBox81";
this->comboBox81->Size = System::Drawing::Size(447, 58);
this->comboBox81->TabIndex = 80;
this->comboBox81->Visible = false;
// 
// comboBox82
// 
this->comboBox82->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox82->FormattingEnabled = true;
this->comboBox82->Location = System::Drawing::Point(1362, 579);
this->comboBox82->Name = L"comboBox82";
this->comboBox82->Size = System::Drawing::Size(447, 58);
this->comboBox82->TabIndex = 81;
this->comboBox82->Visible = false;
// 
// comboBox83
// 
this->comboBox83->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox83->FormattingEnabled = true;
this->comboBox83->Location = System::Drawing::Point(1362, 643);
this->comboBox83->Name = L"comboBox83";
this->comboBox83->Size = System::Drawing::Size(447, 58);
this->comboBox83->TabIndex = 82;
this->comboBox83->Visible = false;
// 
// comboBox84
// 
this->comboBox84->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox84->FormattingEnabled = true;
this->comboBox84->Location = System::Drawing::Point(1362, 707);
this->comboBox84->Name = L"comboBox84";
this->comboBox84->Size = System::Drawing::Size(447, 58);
this->comboBox84->TabIndex = 83;
this->comboBox84->Visible = false;
// 
// comboBox85
// 
this->comboBox85->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox85->FormattingEnabled = true;
this->comboBox85->Location = System::Drawing::Point(1362, 771);
this->comboBox85->Name = L"comboBox85";
this->comboBox85->Size = System::Drawing::Size(447, 58);
this->comboBox85->TabIndex = 84;
this->comboBox85->Visible = false;
// 
// comboBox86
// 
this->comboBox86->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox86->FormattingEnabled = true;
this->comboBox86->Location = System::Drawing::Point(1362, 835);
this->comboBox86->Name = L"comboBox86";
this->comboBox86->Size = System::Drawing::Size(447, 58);
this->comboBox86->TabIndex = 85;
this->comboBox86->Visible = false;
// 
// comboBox87
// 
this->comboBox87->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox87->FormattingEnabled = true;
this->comboBox87->Location = System::Drawing::Point(1362, 899);
this->comboBox87->Name = L"comboBox87";
this->comboBox87->Size = System::Drawing::Size(447, 58);
this->comboBox87->TabIndex = 86;
this->comboBox87->Visible = false;
// 
// comboBox88
// 
this->comboBox88->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox88->FormattingEnabled = true;
this->comboBox88->Location = System::Drawing::Point(1362, 963);
this->comboBox88->Name = L"comboBox88";
this->comboBox88->Size = System::Drawing::Size(447, 58);
this->comboBox88->TabIndex = 87;
this->comboBox88->Visible = false;
// 
// comboBox89
// 
this->comboBox89->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox89->FormattingEnabled = true;
this->comboBox89->Location = System::Drawing::Point(1362, 1027);
this->comboBox89->Name = L"comboBox89";
this->comboBox89->Size = System::Drawing::Size(447, 58);
this->comboBox89->TabIndex = 88;
this->comboBox89->Visible = false;
// 
// comboBox90
// 
this->comboBox90->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox90->FormattingEnabled = true;
this->comboBox90->Location = System::Drawing::Point(1362, 1091);
this->comboBox90->Name = L"comboBox90";
this->comboBox90->Size = System::Drawing::Size(447, 58);
this->comboBox90->TabIndex = 89;
this->comboBox90->Visible = false;
// 
// comboBox91
// 
this->comboBox91->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox91->FormattingEnabled = true;
this->comboBox91->Location = System::Drawing::Point(1362, 1155);
this->comboBox91->Name = L"comboBox91";
this->comboBox91->Size = System::Drawing::Size(447, 58);
this->comboBox91->TabIndex = 90;
this->comboBox91->Visible = false;
// 
// comboBox92
// 
this->comboBox92->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox92->FormattingEnabled = true;
this->comboBox92->Location = System::Drawing::Point(1362, 1219);
this->comboBox92->Name = L"comboBox92";
this->comboBox92->Size = System::Drawing::Size(447, 58);
this->comboBox92->TabIndex = 91;
this->comboBox92->Visible = false;
// 
// comboBox93
// 
this->comboBox93->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox93->FormattingEnabled = true;
this->comboBox93->Location = System::Drawing::Point(1362, 1283);
this->comboBox93->Name = L"comboBox93";
this->comboBox93->Size = System::Drawing::Size(447, 58);
this->comboBox93->TabIndex = 92;
this->comboBox93->Visible = false;
// 
// comboBox94
// 
this->comboBox94->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox94->FormattingEnabled = true;
this->comboBox94->Location = System::Drawing::Point(1362, 1347);
this->comboBox94->Name = L"comboBox94";
this->comboBox94->Size = System::Drawing::Size(447, 58);
this->comboBox94->TabIndex = 93;
this->comboBox94->Visible = false;
// 
// comboBox95
// 
this->comboBox95->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox95->FormattingEnabled = true;
this->comboBox95->Location = System::Drawing::Point(1362, 1411);
this->comboBox95->Name = L"comboBox95";
this->comboBox95->Size = System::Drawing::Size(447, 58);
this->comboBox95->TabIndex = 94;
this->comboBox95->Visible = false;
// 
// comboBox96
// 
this->comboBox96->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox96->FormattingEnabled = true;
this->comboBox96->Location = System::Drawing::Point(1362, 1475);
this->comboBox96->Name = L"comboBox96";
this->comboBox96->Size = System::Drawing::Size(447, 58);
this->comboBox96->TabIndex = 95;
this->comboBox96->Visible = false;
// 
// comboBox97
// 
this->comboBox97->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox97->FormattingEnabled = true;
this->comboBox97->Location = System::Drawing::Point(1815, 3);
this->comboBox97->Name = L"comboBox97";
this->comboBox97->Size = System::Drawing::Size(447, 58);
this->comboBox97->TabIndex = 96;
this->comboBox97->Visible = false;
// 
// comboBox98
// 
this->comboBox98->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox98->FormattingEnabled = true;
this->comboBox98->Location = System::Drawing::Point(1815, 67);
this->comboBox98->Name = L"comboBox98";
this->comboBox98->Size = System::Drawing::Size(447, 58);
this->comboBox98->TabIndex = 97;
this->comboBox98->Visible = false;
// 
// comboBox99
// 
this->comboBox99->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox99->FormattingEnabled = true;
this->comboBox99->Location = System::Drawing::Point(1815, 131);
this->comboBox99->Name = L"comboBox99";
this->comboBox99->Size = System::Drawing::Size(447, 58);
this->comboBox99->TabIndex = 98;
this->comboBox99->Visible = false;
// 
// comboBox100
// 
this->comboBox100->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox100->FormattingEnabled = true;
this->comboBox100->Location = System::Drawing::Point(1815, 195);
this->comboBox100->Name = L"comboBox100";
this->comboBox100->Size = System::Drawing::Size(447, 58);
this->comboBox100->TabIndex = 99;
this->comboBox100->Visible = false;
// 
// comboBox101
// 
this->comboBox101->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox101->FormattingEnabled = true;
this->comboBox101->Location = System::Drawing::Point(1815, 259);
this->comboBox101->Name = L"comboBox101";
this->comboBox101->Size = System::Drawing::Size(447, 58);
this->comboBox101->TabIndex = 100;
this->comboBox101->Visible = false;
// 
// comboBox102
// 
this->comboBox102->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox102->FormattingEnabled = true;
this->comboBox102->Location = System::Drawing::Point(1815, 323);
this->comboBox102->Name = L"comboBox102";
this->comboBox102->Size = System::Drawing::Size(447, 58);
this->comboBox102->TabIndex = 101;
this->comboBox102->Visible = false;
// 
// comboBox103
// 
this->comboBox103->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox103->FormattingEnabled = true;
this->comboBox103->Location = System::Drawing::Point(1815, 387);
this->comboBox103->Name = L"comboBox103";
this->comboBox103->Size = System::Drawing::Size(447, 58);
this->comboBox103->TabIndex = 102;
this->comboBox103->Visible = false;
// 
// comboBox104
// 
this->comboBox104->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox104->FormattingEnabled = true;
this->comboBox104->Location = System::Drawing::Point(1815, 451);
this->comboBox104->Name = L"comboBox104";
this->comboBox104->Size = System::Drawing::Size(447, 58);
this->comboBox104->TabIndex = 103;
this->comboBox104->Visible = false;
// 
// comboBox105
// 
this->comboBox105->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox105->FormattingEnabled = true;
this->comboBox105->Location = System::Drawing::Point(1815, 515);
this->comboBox105->Name = L"comboBox105";
this->comboBox105->Size = System::Drawing::Size(447, 58);
this->comboBox105->TabIndex = 104;
this->comboBox105->Visible = false;
// 
// comboBox106
// 
this->comboBox106->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox106->FormattingEnabled = true;
this->comboBox106->Location = System::Drawing::Point(1815, 579);
this->comboBox106->Name = L"comboBox106";
this->comboBox106->Size = System::Drawing::Size(447, 58);
this->comboBox106->TabIndex = 105;
this->comboBox106->Visible = false;
// 
// comboBox107
// 
this->comboBox107->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox107->FormattingEnabled = true;
this->comboBox107->Location = System::Drawing::Point(1815, 643);
this->comboBox107->Name = L"comboBox107";
this->comboBox107->Size = System::Drawing::Size(447, 58);
this->comboBox107->TabIndex = 106;
this->comboBox107->Visible = false;
// 
// comboBox108
// 
this->comboBox108->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox108->FormattingEnabled = true;
this->comboBox108->Location = System::Drawing::Point(1815, 707);
this->comboBox108->Name = L"comboBox108";
this->comboBox108->Size = System::Drawing::Size(447, 58);
this->comboBox108->TabIndex = 107;
this->comboBox108->Visible = false;
// 
// comboBox109
// 
this->comboBox109->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox109->FormattingEnabled = true;
this->comboBox109->Location = System::Drawing::Point(1815, 771);
this->comboBox109->Name = L"comboBox109";
this->comboBox109->Size = System::Drawing::Size(447, 58);
this->comboBox109->TabIndex = 108;
this->comboBox109->Visible = false;
// 
// comboBox110
// 
this->comboBox110->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox110->FormattingEnabled = true;
this->comboBox110->Location = System::Drawing::Point(1815, 835);
this->comboBox110->Name = L"comboBox110";
this->comboBox110->Size = System::Drawing::Size(447, 58);
this->comboBox110->TabIndex = 109;
this->comboBox110->Visible = false;
// 
// comboBox111
// 
this->comboBox111->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox111->FormattingEnabled = true;
this->comboBox111->Location = System::Drawing::Point(1815, 899);
this->comboBox111->Name = L"comboBox111";
this->comboBox111->Size = System::Drawing::Size(447, 58);
this->comboBox111->TabIndex = 110;
this->comboBox111->Visible = false;
// 
// comboBox112
// 
this->comboBox112->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox112->FormattingEnabled = true;
this->comboBox112->Location = System::Drawing::Point(1815, 963);
this->comboBox112->Name = L"comboBox112";
this->comboBox112->Size = System::Drawing::Size(447, 58);
this->comboBox112->TabIndex = 111;
this->comboBox112->Visible = false;
// 
// comboBox113
// 
this->comboBox113->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox113->FormattingEnabled = true;
this->comboBox113->Location = System::Drawing::Point(1815, 1027);
this->comboBox113->Name = L"comboBox113";
this->comboBox113->Size = System::Drawing::Size(447, 58);
this->comboBox113->TabIndex = 112;
this->comboBox113->Visible = false;
// 
// comboBox114
// 
this->comboBox114->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox114->FormattingEnabled = true;
this->comboBox114->Location = System::Drawing::Point(1815, 1091);
this->comboBox114->Name = L"comboBox114";
this->comboBox114->Size = System::Drawing::Size(447, 58);
this->comboBox114->TabIndex = 113;
this->comboBox114->Visible = false;
// 
// comboBox115
// 
this->comboBox115->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox115->FormattingEnabled = true;
this->comboBox115->Location = System::Drawing::Point(1815, 1155);
this->comboBox115->Name = L"comboBox115";
this->comboBox115->Size = System::Drawing::Size(447, 58);
this->comboBox115->TabIndex = 114;
this->comboBox115->Visible = false;
// 
// comboBox116
// 
this->comboBox116->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox116->FormattingEnabled = true;
this->comboBox116->Location = System::Drawing::Point(1815, 1219);
this->comboBox116->Name = L"comboBox116";
this->comboBox116->Size = System::Drawing::Size(447, 58);
this->comboBox116->TabIndex = 115;
this->comboBox116->Visible = false;
// 
// comboBox117
// 
this->comboBox117->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox117->FormattingEnabled = true;
this->comboBox117->Location = System::Drawing::Point(1815, 1283);
this->comboBox117->Name = L"comboBox117";
this->comboBox117->Size = System::Drawing::Size(447, 58);
this->comboBox117->TabIndex = 116;
this->comboBox117->Visible = false;
// 
// comboBox118
// 
this->comboBox118->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox118->FormattingEnabled = true;
this->comboBox118->Location = System::Drawing::Point(1815, 1347);
this->comboBox118->Name = L"comboBox118";
this->comboBox118->Size = System::Drawing::Size(447, 58);
this->comboBox118->TabIndex = 117;
this->comboBox118->Visible = false;
// 
// comboBox119
// 
this->comboBox119->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox119->FormattingEnabled = true;
this->comboBox119->Location = System::Drawing::Point(1815, 1411);
this->comboBox119->Name = L"comboBox119";
this->comboBox119->Size = System::Drawing::Size(447, 58);
this->comboBox119->TabIndex = 118;
this->comboBox119->Visible = false;
// 
// comboBox120
// 
this->comboBox120->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(0)));
this->comboBox120->FormattingEnabled = true;
this->comboBox120->Location = System::Drawing::Point(1815, 1475);
this->comboBox120->Name = L"comboBox120";
this->comboBox120->Size = System::Drawing::Size(447, 58);
this->comboBox120->TabIndex = 119;
this->comboBox120->Visible = false;
// 
// CharacterSettingsDialogWindow
// 
this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
this->ClientSize = System::Drawing::Size(2564, 1559);
this->Controls->Add(this->flowLayoutPanel1);
this->Margin = System::Windows::Forms::Padding(4);
this->Name = L"CharacterSettingsDialogWindow";
this->ShowInTaskbar = false;
this->Text = L"Character Settings";
this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &CharacterSettingsDialogWindow::CharacterSettingsDialogWindow_FormClosed);
this->Load += gcnew System::EventHandler(this, &CharacterSettingsDialogWindow::CharacterSettingsDialogWindow_Load);
this->flowLayoutPanel1->ResumeLayout(false);
this->ResumeLayout(false);

}
#pragma endregion
private: System::Void CharacterSettingsDialogWindow_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
String^ filename = String::Concat(Team_Member_0,"_Buffs.txt");
StreamWriter^ Buff_Settings = gcnew StreamWriter(filename,false);

}
private: System::Void CharacterSettingsDialogWindow_Load(System::Object^ sender, System::EventArgs^ e) {
StreamReader^ Buff_Settings = gcnew StreamReader("State.txt",false);
if (Buff_Settings != nullptr) {
Team_Member_0 = Buff_Settings->ReadLine();
Team_Member_1 = Buff_Settings->ReadLine();
Team_Member_2 = Buff_Settings->ReadLine();
Team_Member_3 = Buff_Settings->ReadLine();}
Buff_Settings->Close();
int Character_Check_Count = 0;
int Null_Count = 0;
#define Compare(Number) String::CompareOrdinal(Team_Member_##Number,Char_Compare) == 0
#define TM_Compare(Number) if (Compare(Number)) {Null_Count++;}
#define Char_Compare L"Null"
TM_Compare(1);
TM_Compare(2);
TM_Compare(3);
#undef Char_Compare
#define Index_Compare if (Compare(0) || Compare(1) || Compare(2) || Compare(3) )
#define ComboBox_Check(Number) if (this->comboBox##Number->Visible == false)
#define Array_Form(Number,index,List) this->comboBox##Number->Items->AddRange(gcnew cli::array< System::Object^  >(index) ##List
#define Array_toggle {L"Yes", L"No"})
#define Visibility(Number) this->comboBox##Number->Visible = true
#define Text_Name(Number,text_name) this->comboBox##Number->Text = L#text_name
#define Check(Number,index,List,text_name,Buff) ComboBox_Check(Number) { Array_Form(Number,index,List); Visibility(Number); Text_Name(Number,text_name); Buff = Number;}
for (int i = 0; i<1; i++) {
#define Char_Compare L"Albedo"
Index_Compare {
#define text_name Albedo:Burst_Elemental Mastery
Check(1,2,Array_toggle,text_name,Albedo_Buff)
#undef text_name
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) {
break;}}

#undef Char_Compare
#define Char_Compare L"Alhaitham"
Index_Compare {
#define List {L"3 Stacks", L"2 Stacks", L"1 Stack", L"N/A"})
#define text_name Alhaitham:C4_Elemental Mastery
Check(1,4,List,text_name,Alhaitham_Buff)
else Check(2,4,List,text_name,Alhaitham_Buff)
#undef text_name
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Aloy"
Index_Compare {
#define text_name Aloy:Skill ATK%
Check(1,2,Array_toggle,text_name,Aloy_Buff)
else Check(2,2,Array_toggle,text_name,Aloy_Buff)
else Check(3,2,Array_toggle,text_name,Aloy_Buff)
#undef text_name
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Amber"
Index_Compare {
#define text_name Amber:C6_Atk% Buff
Check(1,2,Array_toggle,text_name,Amber_Buff)
else Check(2,2,Array_toggle,text_name,Amber_Buff)
else Check(3,2,Array_toggle,text_name,Amber_Buff)
else Check(4,2,Array_toggle,text_name,Amber_Buff)
#undef text_name
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Arataki Itto"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Arlecchino"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Baizhu"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Barbara"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Beidou"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Bennett"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Candace"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Charlotte"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Chevreuse"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Childe"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Chiori"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Chongyun"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Clorinde"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Collei"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Cyno"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Dehya"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Diluc"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Diona"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Dori"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Eula"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Faruzan"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Fischl"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Freminet"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Furina"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Gaming"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Ganyu"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Gorou"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Heizou"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Hu Tao"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Jean"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Kaeya"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Kamisato Ayaka"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Kamisato Ayato"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Kaveh"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Kazuha"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Keqing"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Kirara"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Klee"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Kujou Sara"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Kuki Shinobu"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Layla"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Lisa"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Lynette"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Lynney"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Mika"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Mona"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Nahida"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Navia"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Nilou"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Ningguang"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Noelle"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Nuevillette"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Qiqi"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Raiden Shogun"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Razor"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Rosaria"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Sangonomiya Kokomi"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Sayu"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Sethos"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Shenhe"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Sigewinne"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Sucrose"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Thoma"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Tighnari"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Traveler"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Venti"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Wanderer"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Wriothesley"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Xiangling"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Xianyun"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Xiao"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Xingqiu"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Xinyan"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Yae Miko"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Yanfei"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Yaoyao"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Yelan"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Yoimiya"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Yunjin"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}

#undef Char_Compare
#define Char_Compare L"Zhongli"
Index_Compare { 
Character_Check_Count++;
if (Character_Check_Count >= 3 - Null_Count) { 
break;}}
}





}
};
}
