#pragma once
#define UIW UserInterfaceWizard
namespace UserInterfaceWizard {
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Windows;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
#include <math.h>
#include "values.h"
#include "STATS.h"
#include "Character Settings Dialog Window.h"
/// <summary>
/// Summary for MyForm
/// </summary>
public ref class MyForm : public System::Windows::Forms::Form {
Form^ Character_Settings_Window;
String^ Active_Character;
String^ Team_Member_1;
String^ Team_Member_2;
String^ Team_Member_3;
public:
MyForm(void)
{
InitializeComponent();
//
//TODO: Add the constructor code here
//
}
public:
/// <summary>
/// Clean up any resources being used.
/// </summary>
~MyForm()
{
if (components)
{
delete components;
}
}
public:





public: System::Windows::Forms::TabControl^ tabControl1;

public: System::Windows::Forms::TabPage^ Characters_Page;
public: System::Windows::Forms::FlowLayoutPanel^ FlowLayout_Characters;
public: System::Windows::Forms::Button^ Albedo;
public: System::Windows::Forms::Button^ Alhaitham;
public: System::Windows::Forms::Button^ Aloy;
public: System::Windows::Forms::Button^ Amber;
public: System::Windows::Forms::Button^ Arataki_Itto;
public: System::Windows::Forms::Button^ Arlecchino;
public: System::Windows::Forms::Button^ Baizhu;
public: System::Windows::Forms::Button^ Barbara;
public: System::Windows::Forms::Button^ Beidou;
public: System::Windows::Forms::Button^ Bennett;
public: System::Windows::Forms::Button^ Candance;
public: System::Windows::Forms::Button^ Charlotte;
public: System::Windows::Forms::Button^ Chevreuse;
public: System::Windows::Forms::Button^ Childe;
public: System::Windows::Forms::Button^ Chiori;
public: System::Windows::Forms::Button^ Chongyun;
public: System::Windows::Forms::Button^ Clorinde;
public: System::Windows::Forms::Button^ Collei;
public: System::Windows::Forms::Button^ Cyno;
public: System::Windows::Forms::Button^ Dehya;
public: System::Windows::Forms::Button^ Diluc;
public: System::Windows::Forms::Button^ Diona;
public: System::Windows::Forms::Button^ Dori;
public: System::Windows::Forms::Button^ Eula;
public: System::Windows::Forms::Button^ Faruzan;
public: System::Windows::Forms::Button^ Fischl;
public: System::Windows::Forms::Button^ Freminet;
public: System::Windows::Forms::Button^ Furina;
public: System::Windows::Forms::Button^ Gaming;
public: System::Windows::Forms::Button^ Ganyu;
public: System::Windows::Forms::Button^ Gorou;
public: System::Windows::Forms::Button^ Heizou;
public: System::Windows::Forms::Button^ Hu_Tao;
public: System::Windows::Forms::Button^ Jean;
public: System::Windows::Forms::Button^ Kaeya;
public: System::Windows::Forms::Button^ Kamisato_Ayaka;
public: System::Windows::Forms::Button^ Kamisato_Ayato;
public: System::Windows::Forms::Button^ Kaveh;
public: System::Windows::Forms::Button^ Kazuha;
public: System::Windows::Forms::Button^ Keqing;
public: System::Windows::Forms::Button^ Kirara;
public: System::Windows::Forms::Button^ Klee;
public: System::Windows::Forms::Button^ Kujou_Sara;
public: System::Windows::Forms::Button^ Kuki_Shinobu;
public: System::Windows::Forms::Button^ Layla;
public: System::Windows::Forms::Button^ Lisa;
public: System::Windows::Forms::Button^ Lynette;
public: System::Windows::Forms::Button^ Lynney;
public: System::Windows::Forms::Button^ Mika;
public: System::Windows::Forms::Button^ Mona;
public: System::Windows::Forms::Button^ Nahida;
public: System::Windows::Forms::Button^ Navia;
public: System::Windows::Forms::Button^ Neuvillette;
public: System::Windows::Forms::Button^ Nilou;
public: System::Windows::Forms::Button^ Ningguang;
public: System::Windows::Forms::Button^ Noelle;
public: System::Windows::Forms::Button^ Qiqi;
public: System::Windows::Forms::Button^ Raiden_Shogun;
public: System::Windows::Forms::Button^ Razor;
public: System::Windows::Forms::Button^ Rosaria;
public: System::Windows::Forms::Button^ Sangonomiya_Kokomi;
public: System::Windows::Forms::Button^ Sayu;
public: System::Windows::Forms::Button^ Sethos;
public: System::Windows::Forms::Button^ Shenhe;
public: System::Windows::Forms::Button^ Sucrose;
public: System::Windows::Forms::Button^ Thoma;
public: System::Windows::Forms::Button^ Tighnari;
public: System::Windows::Forms::Button^ Traveler;
public: System::Windows::Forms::Button^ Venti;
public: System::Windows::Forms::Button^ Wanderer;
public: System::Windows::Forms::Button^ Wriothesley;
public: System::Windows::Forms::Button^ Xiangling;
public: System::Windows::Forms::Button^ Xianyun;
public: System::Windows::Forms::Button^ Xiao;
public: System::Windows::Forms::Button^ Xingqiu;
public: System::Windows::Forms::Button^ Xinyan;
public: System::Windows::Forms::Button^ Yae_Miko;
public: System::Windows::Forms::Button^ Yanfei;
public: System::Windows::Forms::Button^ Yaoyao;
public: System::Windows::Forms::Button^ Yelan;
public: System::Windows::Forms::Button^ Yoimiya;
public: System::Windows::Forms::Button^ Yunjin;
public: System::Windows::Forms::Button^ Zhongli;

public: System::Windows::Forms::TabPage^ Albedo_Page;
public: System::Windows::Forms::ComboBox^ Albedo_Character_Level;
public: System::Windows::Forms::ComboBox^ Albedo_Constellations;
public: System::Windows::Forms::ComboBox^ Albedo_Weapons;
public: System::Windows::Forms::ComboBox^ Albedo_Artifact_Set;
public: System::Windows::Forms::ComboBox^ Albedo_Team_Member_1;

public: System::Windows::Forms::ComboBox^ Albedo_ATK_Type;
public: System::Windows::Forms::ComboBox^ Albedo_ATK_Element;



public: System::Windows::Forms::TableLayoutPanel^ Albedo_tableLayoutPanel1;

public: System::Windows::Forms::TabPage^ Alhaitham_Page;
public: System::Windows::Forms::TabPage^ Aloy_Page;
public: System::Windows::Forms::TabPage^ Amber_Page;
public: System::Windows::Forms::TabPage^ Arataki_Itto_Page;
public: System::Windows::Forms::TabPage^ Arlecchino_Page;
public: System::Windows::Forms::TabPage^ Baizhu_Page;
public: System::Windows::Forms::TabPage^ Beidou_Page;
public: System::Windows::Forms::TabPage^ Bennett_Page;
public: System::Windows::Forms::TabPage^ Barbara_Page;
public: System::Windows::Forms::TabPage^ Candace_Page;
public: System::Windows::Forms::TabPage^ Charlotte_Page;
public: System::Windows::Forms::TabPage^ Chevreuse_Page;
public: System::Windows::Forms::TabPage^ Childe_Page;
public: System::Windows::Forms::TabPage^ Chiori_Page;
public: System::Windows::Forms::TabPage^ Chongyun_Page;
public: System::Windows::Forms::TabPage^ Clorinde_Page;
public: System::Windows::Forms::TabPage^ Collei_Page;
public: System::Windows::Forms::TabPage^ Cyno_Page;
public: System::Windows::Forms::TabPage^ Dehya_Page;
public: System::Windows::Forms::TabPage^ Diluc_Page;
public: System::Windows::Forms::TabPage^ Diona_Page;
public: System::Windows::Forms::TabPage^ Dori_Page;
public: System::Windows::Forms::TabPage^ Eula_Page;
public: System::Windows::Forms::TabPage^ Faruzan_Page;
public: System::Windows::Forms::TabPage^ Fischl_Page;
public: System::Windows::Forms::TabPage^ Freminet_Page;
public: System::Windows::Forms::TabPage^ Furina_Page;
public: System::Windows::Forms::TabPage^ Gaming_Page;
public: System::Windows::Forms::TabPage^ Ganyu_Page;
public: System::Windows::Forms::TabPage^ Gorou_Page;
public: System::Windows::Forms::TabPage^ Heizou_Page;
public: System::Windows::Forms::TabPage^ Hu_Tao_Page;
public: System::Windows::Forms::TabPage^ Jean_Page;
public: System::Windows::Forms::TabPage^ Kaeya_Page;
public: System::Windows::Forms::TabPage^ Kamisato_Ayaka_Page;
public: System::Windows::Forms::TabPage^ Kamisato_Ayato_Page;
public: System::Windows::Forms::TabPage^ Kaveh_Page;
public: System::Windows::Forms::TabPage^ Kazuha_Page;
public: System::Windows::Forms::TabPage^ Keqing_Page;
public: System::Windows::Forms::TabPage^ Kirara_Page;
public: System::Windows::Forms::TabPage^ Klee_Page;
public: System::Windows::Forms::TabPage^ Kujou_Sara_Page;
public: System::Windows::Forms::TabPage^ Kuki_Shinobu_Page;
public: System::Windows::Forms::TabPage^ Layla_Page;
public: System::Windows::Forms::TabPage^ Lisa_Page;
public: System::Windows::Forms::TabPage^ Lynette_Page;
public: System::Windows::Forms::TabPage^ Lynney_Page;
public: System::Windows::Forms::TabPage^ Mika_Page;
public: System::Windows::Forms::TabPage^ Mona_Page;
public: System::Windows::Forms::TabPage^ Nahida_Page;
public: System::Windows::Forms::TabPage^ Navia_Page;
public: System::Windows::Forms::TabPage^ Nilou_Page;
public: System::Windows::Forms::TabPage^ Ningguang_Page;
public: System::Windows::Forms::TabPage^ Noelle_Page;
public: System::Windows::Forms::TabPage^ Nuevillette_Page;
public: System::Windows::Forms::TabPage^ Qiqi_Page;
public: System::Windows::Forms::TabPage^ Raiden_Shogun_Page;
public: System::Windows::Forms::TabPage^ Razor_Page;
public: System::Windows::Forms::TabPage^ Rosaria_Page;
public: System::Windows::Forms::TabPage^ Sangonomiya_Kokomi_Page;
public: System::Windows::Forms::TabPage^ Sayu_Page;
public: System::Windows::Forms::TabPage^ Sethos_Page;
public: System::Windows::Forms::TabPage^ Shenhe_Page;
public: System::Windows::Forms::TabPage^ Sigewinne_Page;
public: System::Windows::Forms::TabPage^ Sucrose_Page;
public: System::Windows::Forms::TabPage^ Thoma_Page;
public: System::Windows::Forms::TabPage^ Tighnari_Page;
public: System::Windows::Forms::TabPage^ Venti_Page;
public: System::Windows::Forms::TabPage^ Wanderer_Page;
public: System::Windows::Forms::TabPage^ Wriothesley_Page;
public: System::Windows::Forms::TabPage^ Xiangling_Page;
public: System::Windows::Forms::TabPage^ Xianyun_Page;
public: System::Windows::Forms::TabPage^ Xiao_Page;
public: System::Windows::Forms::TabPage^ Xingqiu_Page;
public: System::Windows::Forms::TabPage^ Xinyan_Page;
public: System::Windows::Forms::TabPage^ Yae_Miko_Page;
public: System::Windows::Forms::TabPage^ Yanfei_Page;
public: System::Windows::Forms::TabPage^ Yaoyao_Page;
public: System::Windows::Forms::TabPage^ Yelan_Page;
public: System::Windows::Forms::TabPage^ Yoimiya_Page;
public: System::Windows::Forms::TabPage^ Yunjin_Page;
public: System::Windows::Forms::TabPage^ Zhongli_Page;
public: System::Windows::Forms::ComboBox^ Albedo_Team_Member_2;

public: System::Windows::Forms::ComboBox^ Albedo_Team_Member_3;
public: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
public: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
public: System::Windows::Forms::ToolStripMenuItem^ homeToolStripMenuItem;
public: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
public: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
public: System::Windows::Forms::MenuStrip^ menuStrip1;
public: System::Windows::Forms::Button^ Albedo_Run_Optimizer;


private: System::Windows::Forms::Label^ Albedo_Motion_Value_Label;
public:

public:
private: System::Windows::Forms::NumericUpDown^ Albedo_Motion_Value;















private: System::Windows::Forms::TabPage^ Traveler_Page;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ Albedo_DEFPercent_Rolls_label;
private: System::Windows::Forms::Label^ Albedo_HPPercent_Rolls_label;
private: System::Windows::Forms::Label^ Albedo_EM_Rolls_label;

private: System::Windows::Forms::Label^ Albedo_RatePercent_Rolls_label;
private: System::Windows::Forms::Label^ Albedo_CRITDMG_Rolls_label;






















private: System::Windows::Forms::Label^ Albedo_ERPercent_Rolls_label;

private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;

private: System::Windows::Forms::Label^ No_Crit_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_No_Crit_After_value;

private: System::Windows::Forms::Label^ Average_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_Average_After_value;

private: System::Windows::Forms::Label^ With_Crit_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_With_Crit_After_value;

private: System::Windows::Forms::TabControl^ tabControl2;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel6;




























private: System::Windows::Forms::Label^ Albedo_FlatATK_label;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;






















private: System::Windows::Forms::NumericUpDown^ Albedo_ATKPercent_MS_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_DEFPercent_MS_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_HPPercent_MS_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_EM_MS_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_ERPercent_MS_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_DMGPercent_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_RatePercent_MS_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_CRITDMG_MS_Rolls;
private: System::Windows::Forms::Label^ Albedo_DMGPercent_Rolls_label;





private: System::Windows::Forms::NumericUpDown^ Albedo_ATKPercent_Value;
private: System::Windows::Forms::NumericUpDown^ Albedo_DEFPercent_Value;
private: System::Windows::Forms::NumericUpDown^ Albedo_HPPercent_Value;
private: System::Windows::Forms::NumericUpDown^ Albedo_FLATATK_Value;
private: System::Windows::Forms::NumericUpDown^ Albedo_FLATDEF_Value;
private: System::Windows::Forms::NumericUpDown^ Albedo_FLATHP_Value;
private: System::Windows::Forms::NumericUpDown^ Albedo_EM_Value;
private: System::Windows::Forms::NumericUpDown^ Albedo_ER_Value;
private: System::Windows::Forms::NumericUpDown^ Albedo_RatePercent_Value;
private: System::Windows::Forms::NumericUpDown^ Albedo_CRITDMG_Value;
private: System::Windows::Forms::NumericUpDown^ Albedo_DMG_Percent_Value;





















private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel9;
private: System::Windows::Forms::Label^ NoCrit;
private: System::Windows::Forms::NumericUpDown^ Albedo_AverageDmg;
private: System::Windows::Forms::Label^ Average;
private: System::Windows::Forms::NumericUpDown^ Albedo_NoCritDmg;
private: System::Windows::Forms::Label^ WithCrit;
private: System::Windows::Forms::NumericUpDown^ Albedo_WithCritDmg;

private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel7;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;













private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel13;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;









private: System::Windows::Forms::Label^ label24;

private: System::Windows::Forms::Label^ label25;

private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalATK_Before;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalDEF_Before;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalHP_Before;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalBASE_DMG_Before;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalEM_Before;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalER_Before;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalDMGPercent_Before;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalRatePercent_Before;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalCritDMG_Before;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalCRITDMG_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalRatePercent_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalDMGPercent_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalER_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalEM_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalBASE_DMG_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalHP_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalDEF_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_TotalATK_After;
private: System::Windows::Forms::NumericUpDown^ Albedo_ATKPercent_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_DEFPercent_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_HPPercent_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_FLATATK_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_FLATDEF_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_FLATHP_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_EM_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_ERPercent_Rolls;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::NumericUpDown^ Albedo_RatePercent_Rolls;
private: System::Windows::Forms::NumericUpDown^ Albedo_CRITDMG_Rolls;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label34;

private:
public: System::Windows::Forms::ComboBox^ Albedo_ICD_Active;
private: System::Windows::Forms::Label^ label33;
public:
public: System::Windows::Forms::ComboBox^ Albedo_Enemy_Elemental_Aura;
private:
private: System::Windows::Forms::Label^ label14;
public:
public: System::Windows::Forms::ComboBox^ Albedo_Enemy_Level;
private:
private: System::Windows::Forms::Label^ Albedo_Enemy_Res_Label;
public:
private: System::Windows::Forms::NumericUpDown^ Albedo_Enemy_Res;
private: System::Windows::Forms::Label^ label36;

private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Button^ button1;





































































private: System::ComponentModel::IContainer^ components;























public:
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
    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
    this->Alhaitham_Page = (gcnew System::Windows::Forms::TabPage());
    this->Albedo_Page = (gcnew System::Windows::Forms::TabPage());
    this->Albedo_tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
    this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
    this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
    this->label40 = (gcnew System::Windows::Forms::Label());
    this->Albedo_Character_Level = (gcnew System::Windows::Forms::ComboBox());
    this->label41 = (gcnew System::Windows::Forms::Label());
    this->Albedo_Constellations = (gcnew System::Windows::Forms::ComboBox());
    this->label42 = (gcnew System::Windows::Forms::Label());
    this->Albedo_Weapons = (gcnew System::Windows::Forms::ComboBox());
    this->label39 = (gcnew System::Windows::Forms::Label());
    this->Albedo_Artifact_Set = (gcnew System::Windows::Forms::ComboBox());
    this->Albedo_Motion_Value_Label = (gcnew System::Windows::Forms::Label());
    this->Albedo_Motion_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->label13 = (gcnew System::Windows::Forms::Label());
    this->Albedo_ATK_Type = (gcnew System::Windows::Forms::ComboBox());
    this->label10 = (gcnew System::Windows::Forms::Label());
    this->Albedo_ATK_Element = (gcnew System::Windows::Forms::ComboBox());
    this->label35 = (gcnew System::Windows::Forms::Label());
    this->Albedo_Team_Member_1 = (gcnew System::Windows::Forms::ComboBox());
    this->label34 = (gcnew System::Windows::Forms::Label());
    this->Albedo_Team_Member_2 = (gcnew System::Windows::Forms::ComboBox());
    this->label36 = (gcnew System::Windows::Forms::Label());
    this->Albedo_Team_Member_3 = (gcnew System::Windows::Forms::ComboBox());
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->label38 = (gcnew System::Windows::Forms::Label());
    this->Albedo_ICD_Active = (gcnew System::Windows::Forms::ComboBox());
    this->label33 = (gcnew System::Windows::Forms::Label());
    this->Albedo_Enemy_Elemental_Aura = (gcnew System::Windows::Forms::ComboBox());
    this->label14 = (gcnew System::Windows::Forms::Label());
    this->Albedo_Enemy_Level = (gcnew System::Windows::Forms::ComboBox());
    this->Albedo_Enemy_Res_Label = (gcnew System::Windows::Forms::Label());
    this->Albedo_Enemy_Res = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_Run_Optimizer = (gcnew System::Windows::Forms::Button());
    this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
    this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
    this->flowLayoutPanel9 = (gcnew System::Windows::Forms::FlowLayoutPanel());
    this->NoCrit = (gcnew System::Windows::Forms::Label());
    this->Albedo_AverageDmg = (gcnew System::Windows::Forms::NumericUpDown());
    this->Average = (gcnew System::Windows::Forms::Label());
    this->Albedo_NoCritDmg = (gcnew System::Windows::Forms::NumericUpDown());
    this->WithCrit = (gcnew System::Windows::Forms::Label());
    this->Albedo_WithCritDmg = (gcnew System::Windows::Forms::NumericUpDown());
    this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->label24 = (gcnew System::Windows::Forms::Label());
    this->label9 = (gcnew System::Windows::Forms::Label());
    this->label15 = (gcnew System::Windows::Forms::Label());
    this->label16 = (gcnew System::Windows::Forms::Label());
    this->label17 = (gcnew System::Windows::Forms::Label());
    this->label18 = (gcnew System::Windows::Forms::Label());
    this->Albedo_TotalATK_Before = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalDEF_Before = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalHP_Before = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalBASE_DMG_Before = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalEM_Before = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalER_Before = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalDMGPercent_Before = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalRatePercent_Before = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalCritDMG_Before = (gcnew System::Windows::Forms::NumericUpDown());
    this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
    this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
    this->No_Crit_After = (gcnew System::Windows::Forms::Label());
    this->Albedo_No_Crit_After_value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Average_After = (gcnew System::Windows::Forms::Label());
    this->Albedo_Average_After_value = (gcnew System::Windows::Forms::NumericUpDown());
    this->With_Crit_After = (gcnew System::Windows::Forms::Label());
    this->Albedo_With_Crit_After_value = (gcnew System::Windows::Forms::NumericUpDown());
    this->flowLayoutPanel13 = (gcnew System::Windows::Forms::FlowLayoutPanel());
    this->label5 = (gcnew System::Windows::Forms::Label());
    this->label6 = (gcnew System::Windows::Forms::Label());
    this->label8 = (gcnew System::Windows::Forms::Label());
    this->label25 = (gcnew System::Windows::Forms::Label());
    this->label19 = (gcnew System::Windows::Forms::Label());
    this->label20 = (gcnew System::Windows::Forms::Label());
    this->label21 = (gcnew System::Windows::Forms::Label());
    this->label22 = (gcnew System::Windows::Forms::Label());
    this->label23 = (gcnew System::Windows::Forms::Label());
    this->Albedo_TotalCRITDMG_After = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalRatePercent_After = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalDMGPercent_After = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalER_After = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalEM_After = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalBASE_DMG_After = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalHP_After = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalDEF_After = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_TotalATK_After = (gcnew System::Windows::Forms::NumericUpDown());
    this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
    this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
    this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
    this->label27 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->Albedo_DEFPercent_Rolls_label = (gcnew System::Windows::Forms::Label());
    this->Albedo_HPPercent_Rolls_label = (gcnew System::Windows::Forms::Label());
    this->Albedo_FlatATK_label = (gcnew System::Windows::Forms::Label());
    this->label11 = (gcnew System::Windows::Forms::Label());
    this->label12 = (gcnew System::Windows::Forms::Label());
    this->Albedo_EM_Rolls_label = (gcnew System::Windows::Forms::Label());
    this->Albedo_ERPercent_Rolls_label = (gcnew System::Windows::Forms::Label());
    this->Albedo_DMGPercent_Rolls_label = (gcnew System::Windows::Forms::Label());
    this->Albedo_RatePercent_Rolls_label = (gcnew System::Windows::Forms::Label());
    this->Albedo_CRITDMG_Rolls_label = (gcnew System::Windows::Forms::Label());
    this->label26 = (gcnew System::Windows::Forms::Label());
    this->Albedo_ATKPercent_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_DEFPercent_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_HPPercent_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_FLATATK_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_FLATDEF_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_FLATHP_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_EM_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_ERPercent_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->label7 = (gcnew System::Windows::Forms::Label());
    this->Albedo_RatePercent_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_CRITDMG_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->label28 = (gcnew System::Windows::Forms::Label());
    this->Albedo_ATKPercent_MS_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_HPPercent_MS_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_DEFPercent_MS_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->label30 = (gcnew System::Windows::Forms::Label());
    this->label31 = (gcnew System::Windows::Forms::Label());
    this->label32 = (gcnew System::Windows::Forms::Label());
    this->Albedo_EM_MS_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_CRITDMG_MS_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_RatePercent_MS_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_DMGPercent_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_ERPercent_MS_Rolls = (gcnew System::Windows::Forms::NumericUpDown());
    this->label29 = (gcnew System::Windows::Forms::Label());
    this->Albedo_ATKPercent_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_CRITDMG_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_RatePercent_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_DMG_Percent_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_ER_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_EM_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_FLATHP_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_FLATDEF_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_FLATATK_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_HPPercent_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Albedo_DEFPercent_Value = (gcnew System::Windows::Forms::NumericUpDown());
    this->Characters_Page = (gcnew System::Windows::Forms::TabPage());
    this->FlowLayout_Characters = (gcnew System::Windows::Forms::FlowLayoutPanel());
    this->Albedo = (gcnew System::Windows::Forms::Button());
    this->Alhaitham = (gcnew System::Windows::Forms::Button());
    this->Aloy = (gcnew System::Windows::Forms::Button());
    this->Amber = (gcnew System::Windows::Forms::Button());
    this->Arataki_Itto = (gcnew System::Windows::Forms::Button());
    this->Arlecchino = (gcnew System::Windows::Forms::Button());
    this->Baizhu = (gcnew System::Windows::Forms::Button());
    this->Barbara = (gcnew System::Windows::Forms::Button());
    this->Beidou = (gcnew System::Windows::Forms::Button());
    this->Bennett = (gcnew System::Windows::Forms::Button());
    this->Candance = (gcnew System::Windows::Forms::Button());
    this->Charlotte = (gcnew System::Windows::Forms::Button());
    this->Chevreuse = (gcnew System::Windows::Forms::Button());
    this->Childe = (gcnew System::Windows::Forms::Button());
    this->Chiori = (gcnew System::Windows::Forms::Button());
    this->Chongyun = (gcnew System::Windows::Forms::Button());
    this->Clorinde = (gcnew System::Windows::Forms::Button());
    this->Collei = (gcnew System::Windows::Forms::Button());
    this->Cyno = (gcnew System::Windows::Forms::Button());
    this->Dehya = (gcnew System::Windows::Forms::Button());
    this->Diluc = (gcnew System::Windows::Forms::Button());
    this->Diona = (gcnew System::Windows::Forms::Button());
    this->Dori = (gcnew System::Windows::Forms::Button());
    this->Eula = (gcnew System::Windows::Forms::Button());
    this->Faruzan = (gcnew System::Windows::Forms::Button());
    this->Fischl = (gcnew System::Windows::Forms::Button());
    this->Freminet = (gcnew System::Windows::Forms::Button());
    this->Furina = (gcnew System::Windows::Forms::Button());
    this->Gaming = (gcnew System::Windows::Forms::Button());
    this->Ganyu = (gcnew System::Windows::Forms::Button());
    this->Gorou = (gcnew System::Windows::Forms::Button());
    this->Heizou = (gcnew System::Windows::Forms::Button());
    this->Hu_Tao = (gcnew System::Windows::Forms::Button());
    this->Jean = (gcnew System::Windows::Forms::Button());
    this->Kaeya = (gcnew System::Windows::Forms::Button());
    this->Kamisato_Ayaka = (gcnew System::Windows::Forms::Button());
    this->Kamisato_Ayato = (gcnew System::Windows::Forms::Button());
    this->Kaveh = (gcnew System::Windows::Forms::Button());
    this->Kazuha = (gcnew System::Windows::Forms::Button());
    this->Keqing = (gcnew System::Windows::Forms::Button());
    this->Kirara = (gcnew System::Windows::Forms::Button());
    this->Klee = (gcnew System::Windows::Forms::Button());
    this->Kujou_Sara = (gcnew System::Windows::Forms::Button());
    this->Kuki_Shinobu = (gcnew System::Windows::Forms::Button());
    this->Layla = (gcnew System::Windows::Forms::Button());
    this->Lisa = (gcnew System::Windows::Forms::Button());
    this->Lynette = (gcnew System::Windows::Forms::Button());
    this->Lynney = (gcnew System::Windows::Forms::Button());
    this->Mika = (gcnew System::Windows::Forms::Button());
    this->Mona = (gcnew System::Windows::Forms::Button());
    this->Nahida = (gcnew System::Windows::Forms::Button());
    this->Navia = (gcnew System::Windows::Forms::Button());
    this->Neuvillette = (gcnew System::Windows::Forms::Button());
    this->Nilou = (gcnew System::Windows::Forms::Button());
    this->Ningguang = (gcnew System::Windows::Forms::Button());
    this->Noelle = (gcnew System::Windows::Forms::Button());
    this->Qiqi = (gcnew System::Windows::Forms::Button());
    this->Raiden_Shogun = (gcnew System::Windows::Forms::Button());
    this->Razor = (gcnew System::Windows::Forms::Button());
    this->Rosaria = (gcnew System::Windows::Forms::Button());
    this->Sangonomiya_Kokomi = (gcnew System::Windows::Forms::Button());
    this->Sayu = (gcnew System::Windows::Forms::Button());
    this->Sethos = (gcnew System::Windows::Forms::Button());
    this->Shenhe = (gcnew System::Windows::Forms::Button());
    this->Sucrose = (gcnew System::Windows::Forms::Button());
    this->Thoma = (gcnew System::Windows::Forms::Button());
    this->Tighnari = (gcnew System::Windows::Forms::Button());
    this->Traveler = (gcnew System::Windows::Forms::Button());
    this->Venti = (gcnew System::Windows::Forms::Button());
    this->Wanderer = (gcnew System::Windows::Forms::Button());
    this->Wriothesley = (gcnew System::Windows::Forms::Button());
    this->Xiangling = (gcnew System::Windows::Forms::Button());
    this->Xianyun = (gcnew System::Windows::Forms::Button());
    this->Xiao = (gcnew System::Windows::Forms::Button());
    this->Xingqiu = (gcnew System::Windows::Forms::Button());
    this->Xinyan = (gcnew System::Windows::Forms::Button());
    this->Yae_Miko = (gcnew System::Windows::Forms::Button());
    this->Yanfei = (gcnew System::Windows::Forms::Button());
    this->Yaoyao = (gcnew System::Windows::Forms::Button());
    this->Yelan = (gcnew System::Windows::Forms::Button());
    this->Yoimiya = (gcnew System::Windows::Forms::Button());
    this->Yunjin = (gcnew System::Windows::Forms::Button());
    this->Zhongli = (gcnew System::Windows::Forms::Button());
    this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
    this->Aloy_Page = (gcnew System::Windows::Forms::TabPage());
    this->Amber_Page = (gcnew System::Windows::Forms::TabPage());
    this->Arataki_Itto_Page = (gcnew System::Windows::Forms::TabPage());
    this->Arlecchino_Page = (gcnew System::Windows::Forms::TabPage());
    this->Baizhu_Page = (gcnew System::Windows::Forms::TabPage());
    this->Barbara_Page = (gcnew System::Windows::Forms::TabPage());
    this->Beidou_Page = (gcnew System::Windows::Forms::TabPage());
    this->Bennett_Page = (gcnew System::Windows::Forms::TabPage());
    this->Candace_Page = (gcnew System::Windows::Forms::TabPage());
    this->Charlotte_Page = (gcnew System::Windows::Forms::TabPage());
    this->Chevreuse_Page = (gcnew System::Windows::Forms::TabPage());
    this->Childe_Page = (gcnew System::Windows::Forms::TabPage());
    this->Chiori_Page = (gcnew System::Windows::Forms::TabPage());
    this->Chongyun_Page = (gcnew System::Windows::Forms::TabPage());
    this->Clorinde_Page = (gcnew System::Windows::Forms::TabPage());
    this->Collei_Page = (gcnew System::Windows::Forms::TabPage());
    this->Cyno_Page = (gcnew System::Windows::Forms::TabPage());
    this->Dehya_Page = (gcnew System::Windows::Forms::TabPage());
    this->Diluc_Page = (gcnew System::Windows::Forms::TabPage());
    this->Diona_Page = (gcnew System::Windows::Forms::TabPage());
    this->Dori_Page = (gcnew System::Windows::Forms::TabPage());
    this->Eula_Page = (gcnew System::Windows::Forms::TabPage());
    this->Faruzan_Page = (gcnew System::Windows::Forms::TabPage());
    this->Fischl_Page = (gcnew System::Windows::Forms::TabPage());
    this->Freminet_Page = (gcnew System::Windows::Forms::TabPage());
    this->Furina_Page = (gcnew System::Windows::Forms::TabPage());
    this->Gaming_Page = (gcnew System::Windows::Forms::TabPage());
    this->Ganyu_Page = (gcnew System::Windows::Forms::TabPage());
    this->Gorou_Page = (gcnew System::Windows::Forms::TabPage());
    this->Heizou_Page = (gcnew System::Windows::Forms::TabPage());
    this->Hu_Tao_Page = (gcnew System::Windows::Forms::TabPage());
    this->Jean_Page = (gcnew System::Windows::Forms::TabPage());
    this->Kaeya_Page = (gcnew System::Windows::Forms::TabPage());
    this->Kamisato_Ayaka_Page = (gcnew System::Windows::Forms::TabPage());
    this->Kamisato_Ayato_Page = (gcnew System::Windows::Forms::TabPage());
    this->Kaveh_Page = (gcnew System::Windows::Forms::TabPage());
    this->Kazuha_Page = (gcnew System::Windows::Forms::TabPage());
    this->Keqing_Page = (gcnew System::Windows::Forms::TabPage());
    this->Kirara_Page = (gcnew System::Windows::Forms::TabPage());
    this->Klee_Page = (gcnew System::Windows::Forms::TabPage());
    this->Kujou_Sara_Page = (gcnew System::Windows::Forms::TabPage());
    this->Kuki_Shinobu_Page = (gcnew System::Windows::Forms::TabPage());
    this->Layla_Page = (gcnew System::Windows::Forms::TabPage());
    this->Lisa_Page = (gcnew System::Windows::Forms::TabPage());
    this->Lynette_Page = (gcnew System::Windows::Forms::TabPage());
    this->Lynney_Page = (gcnew System::Windows::Forms::TabPage());
    this->Mika_Page = (gcnew System::Windows::Forms::TabPage());
    this->Mona_Page = (gcnew System::Windows::Forms::TabPage());
    this->Nahida_Page = (gcnew System::Windows::Forms::TabPage());
    this->Navia_Page = (gcnew System::Windows::Forms::TabPage());
    this->Nilou_Page = (gcnew System::Windows::Forms::TabPage());
    this->Ningguang_Page = (gcnew System::Windows::Forms::TabPage());
    this->Noelle_Page = (gcnew System::Windows::Forms::TabPage());
    this->Nuevillette_Page = (gcnew System::Windows::Forms::TabPage());
    this->Qiqi_Page = (gcnew System::Windows::Forms::TabPage());
    this->Raiden_Shogun_Page = (gcnew System::Windows::Forms::TabPage());
    this->Razor_Page = (gcnew System::Windows::Forms::TabPage());
    this->Rosaria_Page = (gcnew System::Windows::Forms::TabPage());
    this->Sangonomiya_Kokomi_Page = (gcnew System::Windows::Forms::TabPage());
    this->Sayu_Page = (gcnew System::Windows::Forms::TabPage());
    this->Sethos_Page = (gcnew System::Windows::Forms::TabPage());
    this->Shenhe_Page = (gcnew System::Windows::Forms::TabPage());
    this->Sigewinne_Page = (gcnew System::Windows::Forms::TabPage());
    this->Sucrose_Page = (gcnew System::Windows::Forms::TabPage());
    this->Thoma_Page = (gcnew System::Windows::Forms::TabPage());
    this->Tighnari_Page = (gcnew System::Windows::Forms::TabPage());
    this->Traveler_Page = (gcnew System::Windows::Forms::TabPage());
    this->Venti_Page = (gcnew System::Windows::Forms::TabPage());
    this->Wanderer_Page = (gcnew System::Windows::Forms::TabPage());
    this->Wriothesley_Page = (gcnew System::Windows::Forms::TabPage());
    this->Xiangling_Page = (gcnew System::Windows::Forms::TabPage());
    this->Xianyun_Page = (gcnew System::Windows::Forms::TabPage());
    this->Xiao_Page = (gcnew System::Windows::Forms::TabPage());
    this->Xingqiu_Page = (gcnew System::Windows::Forms::TabPage());
    this->Xinyan_Page = (gcnew System::Windows::Forms::TabPage());
    this->Yae_Miko_Page = (gcnew System::Windows::Forms::TabPage());
    this->Yanfei_Page = (gcnew System::Windows::Forms::TabPage());
    this->Yaoyao_Page = (gcnew System::Windows::Forms::TabPage());
    this->Yelan_Page = (gcnew System::Windows::Forms::TabPage());
    this->Yoimiya_Page = (gcnew System::Windows::Forms::TabPage());
    this->Yunjin_Page = (gcnew System::Windows::Forms::TabPage());
    this->Zhongli_Page = (gcnew System::Windows::Forms::TabPage());
    this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
    this->Albedo_Page->SuspendLayout();
    this->flowLayoutPanel1->SuspendLayout();
    this->flowLayoutPanel2->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_Motion_Value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_Enemy_Res))->BeginInit();
    this->tabControl2->SuspendLayout();
    this->tabPage1->SuspendLayout();
    this->flowLayoutPanel9->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_AverageDmg))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_NoCritDmg))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_WithCritDmg))->BeginInit();
    this->flowLayoutPanel7->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalATK_Before))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalDEF_Before))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalHP_Before))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalBASE_DMG_Before))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalEM_Before))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalER_Before))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalDMGPercent_Before))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalRatePercent_Before))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalCritDMG_Before))->BeginInit();
    this->tabPage2->SuspendLayout();
    this->flowLayoutPanel4->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_No_Crit_After_value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_Average_After_value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_With_Crit_After_value))->BeginInit();
    this->flowLayoutPanel13->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalCRITDMG_After))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalRatePercent_After))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalDMGPercent_After))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalER_After))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalEM_After))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalBASE_DMG_After))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalHP_After))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalDEF_After))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalATK_After))->BeginInit();
    this->tabPage3->SuspendLayout();
    this->flowLayoutPanel3->SuspendLayout();
    this->flowLayoutPanel6->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ATKPercent_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_DEFPercent_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_HPPercent_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATATK_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATDEF_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATHP_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_EM_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ERPercent_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_RatePercent_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_CRITDMG_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ATKPercent_MS_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_HPPercent_MS_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_DEFPercent_MS_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_EM_MS_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_CRITDMG_MS_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_RatePercent_MS_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_DMGPercent_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ERPercent_MS_Rolls))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ATKPercent_Value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_CRITDMG_Value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_RatePercent_Value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_DMG_Percent_Value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ER_Value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_EM_Value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATHP_Value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATDEF_Value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATATK_Value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_HPPercent_Value))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_DEFPercent_Value))->BeginInit();
    this->Characters_Page->SuspendLayout();
    this->FlowLayout_Characters->SuspendLayout();
    this->tabControl1->SuspendLayout();
    this->menuStrip1->SuspendLayout();
    this->SuspendLayout();
    // 
    // Alhaitham_Page
    // 
    this->Alhaitham_Page->BackColor = System::Drawing::Color::White;
    this->Alhaitham_Page->Location = System::Drawing::Point(8, 160);
    this->Alhaitham_Page->Margin = System::Windows::Forms::Padding(4);
    this->Alhaitham_Page->Name = L"Alhaitham_Page";
    this->Alhaitham_Page->Size = System::Drawing::Size(2518, 1321);
    this->Alhaitham_Page->TabIndex = 2;
    this->Alhaitham_Page->Text = L"Alhaitham";
    // 
    // Albedo_Page
    // 
    this->Albedo_Page->BackColor = System::Drawing::Color::White;
    this->Albedo_Page->Controls->Add(this->Albedo_tableLayoutPanel1);
    this->Albedo_Page->Controls->Add(this->flowLayoutPanel1);
    this->Albedo_Page->Location = System::Drawing::Point(8, 160);
    this->Albedo_Page->Margin = System::Windows::Forms::Padding(4);
    this->Albedo_Page->Name = L"Albedo_Page";
    this->Albedo_Page->Padding = System::Windows::Forms::Padding(4);
    this->Albedo_Page->Size = System::Drawing::Size(2518, 1321);
    this->Albedo_Page->TabIndex = 1;
    this->Albedo_Page->Text = L"Albedo";
    this->Albedo_Page->Enter += gcnew System::EventHandler(this, &MyForm::Albedo_Page_Enter);
    this->Albedo_Page->Leave += gcnew System::EventHandler(this, &MyForm::Albedo_Page_Leave);
    // 
    // Albedo_tableLayoutPanel1
    // 
    this->Albedo_tableLayoutPanel1->AutoScroll = true;
    this->Albedo_tableLayoutPanel1->AutoSize = true;
    this->Albedo_tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Albedo_tableLayoutPanel1->ColumnCount = 1;
    this->Albedo_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        50)));
    this->Albedo_tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
    this->Albedo_tableLayoutPanel1->Location = System::Drawing::Point(4, 4);
    this->Albedo_tableLayoutPanel1->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_tableLayoutPanel1->Name = L"Albedo_tableLayoutPanel1";
    this->Albedo_tableLayoutPanel1->RowCount = 45;
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
        50)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
        50)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        38)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
        19)));
    this->Albedo_tableLayoutPanel1->Size = System::Drawing::Size(0, 1313);
    this->Albedo_tableLayoutPanel1->TabIndex = 17;
    // 
    // flowLayoutPanel1
    // 
    this->flowLayoutPanel1->AutoScroll = true;
    this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::Window;
    this->flowLayoutPanel1->Controls->Add(this->flowLayoutPanel2);
    this->flowLayoutPanel1->Controls->Add(this->tabControl2);
    this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
    this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
    this->flowLayoutPanel1->Location = System::Drawing::Point(4, 4);
    this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
    this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
    this->flowLayoutPanel1->Size = System::Drawing::Size(2510, 1313);
    this->flowLayoutPanel1->TabIndex = 18;
    // 
    // flowLayoutPanel2
    // 
    this->flowLayoutPanel2->Controls->Add(this->label40);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Character_Level);
    this->flowLayoutPanel2->Controls->Add(this->label41);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Constellations);
    this->flowLayoutPanel2->Controls->Add(this->label42);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Weapons);
    this->flowLayoutPanel2->Controls->Add(this->label39);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Artifact_Set);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Motion_Value_Label);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Motion_Value);
    this->flowLayoutPanel2->Controls->Add(this->label13);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_ATK_Type);
    this->flowLayoutPanel2->Controls->Add(this->label10);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_ATK_Element);
    this->flowLayoutPanel2->Controls->Add(this->label35);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Team_Member_1);
    this->flowLayoutPanel2->Controls->Add(this->label34);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Team_Member_2);
    this->flowLayoutPanel2->Controls->Add(this->label36);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Team_Member_3);
    this->flowLayoutPanel2->Controls->Add(this->button1);
    this->flowLayoutPanel2->Controls->Add(this->label38);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_ICD_Active);
    this->flowLayoutPanel2->Controls->Add(this->label33);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Enemy_Elemental_Aura);
    this->flowLayoutPanel2->Controls->Add(this->label14);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Enemy_Level);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Enemy_Res_Label);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Enemy_Res);
    this->flowLayoutPanel2->Controls->Add(this->Albedo_Run_Optimizer);
    this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
    this->flowLayoutPanel2->Location = System::Drawing::Point(3, 3);
    this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
    this->flowLayoutPanel2->Size = System::Drawing::Size(1399, 1299);
    this->flowLayoutPanel2->TabIndex = 0;
    // 
    // label40
    // 
    this->label40->AutoSize = true;
    this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label40->Location = System::Drawing::Point(3, 0);
    this->label40->Name = L"label40";
    this->label40->Size = System::Drawing::Size(271, 50);
    this->label40->TabIndex = 48;
    this->label40->Text = L"Character Level";
    // 
    // Albedo_Character_Level
    // 
    this->Albedo_Character_Level->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->Albedo_Character_Level->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Character_Level->FormatString = L"N0";
    this->Albedo_Character_Level->FormattingEnabled = true;
    this->Albedo_Character_Level->Items->AddRange(gcnew cli::array< System::Object^  >(90) {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
            12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
            44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75,
            76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90
    });
    this->Albedo_Character_Level->Location = System::Drawing::Point(6, 56);
    this->Albedo_Character_Level->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_Character_Level->Name = L"Albedo_Character_Level";
    this->Albedo_Character_Level->Size = System::Drawing::Size(736, 59);
    this->Albedo_Character_Level->TabIndex = 10;
    this->Albedo_Character_Level->Text = L"-";
    this->Albedo_Character_Level->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Albedo_Character_Level_SelectedIndexChanged);
    // 
    // label41
    // 
    this->label41->AutoSize = true;
    this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label41->Location = System::Drawing::Point(3, 121);
    this->label41->Name = L"label41";
    this->label41->Size = System::Drawing::Size(238, 50);
    this->label41->TabIndex = 49;
    this->label41->Text = L"Constellation";
    // 
    // Albedo_Constellations
    // 
    this->Albedo_Constellations->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->Albedo_Constellations->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Constellations->FormattingEnabled = true;
    this->Albedo_Constellations->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
        L"0", L"1", L"2", L"3", L"4", L"5",
            L"6"
    });
    this->Albedo_Constellations->Location = System::Drawing::Point(6, 177);
    this->Albedo_Constellations->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_Constellations->Name = L"Albedo_Constellations";
    this->Albedo_Constellations->Size = System::Drawing::Size(736, 59);
    this->Albedo_Constellations->TabIndex = 7;
    this->Albedo_Constellations->Text = L"-";
    // 
    // label42
    // 
    this->label42->AutoSize = true;
    this->label42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label42->Location = System::Drawing::Point(3, 242);
    this->label42->Name = L"label42";
    this->label42->Size = System::Drawing::Size(159, 50);
    this->label42->TabIndex = 50;
    this->label42->Text = L"Weapon";
    // 
    // Albedo_Weapons
    // 
    this->Albedo_Weapons->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->Albedo_Weapons->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Weapons->FormattingEnabled = true;
    this->Albedo_Weapons->Items->AddRange(gcnew cli::array< System::Object^  >(170) {
        L"A Thousand Floating Dreams", L"Absolution",
            L"Akuoumaru", L"Alley Hunt", L"Amenoma Kageuchi", L"Amos Bow", L"Aqua Simulacra", L"Aquilla Favonia", L"Baizhus Signature", L"Ballad of Boundless Blue",
            L"Ballad of the Fjords", L"Beacon of Reed Sea", L"Black Tassel", L"Blackcliff Bow", L"Blackcliff Catalyst", L"Blackcliff Longsword",
            L"Blackcliff Pole", L"Blackcliff Slasher", L"Bloodtainted Greatsword", L"Calamity Queller", L"Cashflow Superstition", L"Cinnabar Spindle",
            L"Cloudforged", L"Cool Steel ", L"Crescent Pike", L"Crimson Moons Semblance", L"Dark Iron Sword", L"Deathmatch", L"Debate Club",
            L"Dialogues of the Desert Sages", L"Dodoco Tales", L"Dragons Bane", L"Dragonspine Craftable Catalyst", L"Dragonspine Spear",
            L"Elegy for the End", L"Emerald Orb", L"Engulfing Lightning", L"Everlasting Moonglow", L"Eye of Perception", L"Fading Twilight",
            L"Favonius Codex", L"Favonius Greatsword", L"Favonius Lance", L"Favonius Sword", L"Favonius Warbow", L"Ferrous Shadow", L"Festering Desire",
            L"Fillet Blade ", L"Fontaine Craftable Bow", L"Fontaine Craftable Catalyst", L"Fontaine Craftable Claymore", L"Fontaine Craftable Polearm",
            L"Fontaine Craftable Sword", L"Fontaine Fishing Sword", L"Freedom Sworn", L"Hakushin Ring", L"Halberd", L"Hamayumi", L"Haran Gepaku Futsu",
            L"Harbinger of Dawn", L"Hunters Path", L"Ibis Piercer", L"Inazuma Craftable Claymore", L"Inazuma Craftable Polearm", L"Iron Sting",
            L"Kaguras Verity", L"Key of Khaj Nisut", L"Light of Foliar Incision", L"Lions Roar", L"Lithic Blade", L"Lithic Spear", L"Lost Prayer of Sacred Winds",
            L"Luxurious Sea Lord", L"Magic Guide", L"Mailed Flower", L"Makhaira Aquamarine", L"Mappa Mare", L"Memory of Dust", L"Messenger",
            L"Missive Windspear", L"Mistsplitter Reforged", L"Mitternachts Waltz", L"Mounns Moon", L"Oathsworn Eye", L"Otherwordly Story",
            L"Physical DMG Craftable Bow", L"Polar Star", L"Portable Power Saw", L"Primordial Jade Cutter", L"Primordial Jade Winged Spear",
            L"Prospectors Drill", L"Prototype Amber", L"Prototype Archaic", L"Prototype Crescent", L"Prototype Rancour", L"Prototype Starglitter",
            L"Rainslasher", L"Range Gauge", L"Raven Bow", L"Recursive Bow", L"Redhorn Stonethresher", L"Royal Bow", L"Royal Greatsword",
            L"Royal Grimoire", L"Royal Longsword", L"Royal Spear", L"Rust", L"Sacrifical Jade", L"Sacrificial Bow", L"Sacrificial Fragments",
            L"Sacrificial Greatsword", L"Sacrificial Sword", L"Sapwood Blade", L"Scion of the Blazing Sun", L"Serpent Spine", L"Silvershower Heartstrings",
            L"Skyrider Greatsword", L"Skyward Atlas", L"Skyward Blade", L"Skyward Harp", L"Skyward Pride", L"Skyward Spine", L"Slingshot",
            L"Snow Tombed Starsilver", L"Solar Pearl", L"Song of Broken Pines", L"Splendor of Tranquill Waters", L"Staff of Homa", L"Staff of Scarlett Sands",
            L"Sumeru Craftable Bow", L"Sumeru Craftable Catalyst", L"Sumeru Craftable Claymore", L"Sumeru Craftable Polearm", L"Sumeru Fishing Bow",
            L"Summit Shaper", L"Sword of Narzissenkreuz", L"Talking Stick", L"The Alley Flash", L"The Bell", L"The Black Sword", L"The Catch",
            L"The Dockhands Assistant", L"The First Great Magic Bow", L"The Flute", L"The Stringless", L"The Unforged", L"The Viridescent Hunt",
            L"The Widsith", L"Thrilling Tales of Dragon Slayers", L"Thundering Pulse", L"Tome of Eternal Flow", L"Toukabou Shigure", L"Travelers Sword",
            L"Twin Nephrite", L"Ultimate Overlords Mega Magic Sword", L"Uraku Misigiri", L"Verdict", L"Vortex Vanquisher", L"Wanderers Signature",
            L"Wandering Everglow", L"Wavebreakers Fin", L"White Iron Sword", L"White Tassel", L"Whiteblind", L"Windblume Ode", L"Wine and Song",
            L"Wolf Fang", L"Wolfs Gravestone", L"Xianyuns Signature", L"Xiphos Moonlight"
    });
    this->Albedo_Weapons->Location = System::Drawing::Point(6, 298);
    this->Albedo_Weapons->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_Weapons->Name = L"Albedo_Weapons";
    this->Albedo_Weapons->Size = System::Drawing::Size(736, 59);
    this->Albedo_Weapons->TabIndex = 0;
    this->Albedo_Weapons->Text = L"-";
    this->Albedo_Weapons->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Albedo_Weapons_KeyPress);
    this->Albedo_Weapons->Leave += gcnew System::EventHandler(this, &MyForm::Albedo_Weapons_Lose_Focus);
    // 
    // label39
    // 
    this->label39->AutoSize = true;
    this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label39->Location = System::Drawing::Point(3, 363);
    this->label39->Name = L"label39";
    this->label39->Size = System::Drawing::Size(204, 50);
    this->label39->TabIndex = 47;
    this->label39->Text = L"Artifact Set";
    // 
    // Albedo_Artifact_Set
    // 
    this->Albedo_Artifact_Set->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->Albedo_Artifact_Set->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Artifact_Set->FormattingEnabled = true;
    this->Albedo_Artifact_Set->Items->AddRange(gcnew cli::array< System::Object^  >(38) {
        L"Thundering_Fury", L"Thundersoother",
            L"Viridescent_Venerer", L"Maidens_Beloved", L"Crimson_Witch_of_Flames", L"Lavawalker", L"Noblesse_Oblige", L"Bloodstained_Chivalry",
            L"Archaic_Petra", L"Retracting_Bolide", L"Tenacity_of_the_Millelith", L"Pale_Flame", L"Emblem_of_Severed_Fate", L"Shimenawas_Reminiscence",
            L"Husk_of_Opulent_Dreams", L"Ocean_Hued_Clam", L"Vermillion_Hereafter", L"Echoes_of_an_Offering", L"Deepwood_Memories", L"Gilded_Dreams",
            L"Flower_of_Paradise_Lost", L"Desert_Pavillion_Chronicle", L"Gladiators_Finale", L"Wanderers_Troupe", L"Nymphs_Dream", L"Vourukashas_Glow",
            L"Blizzard_Strayer", L"Heart_of_Depth", L"Scholar", L"The_Exile", L"Instructor", L"Berserker", L"Song_of_Days_Past", L"Nighttime_Whispers_in_the_Echoing_Woods",
            L"Golden_Troupe", L"Marechaussee_Hunter", L"Fragment_of_Harmonic_Whimsy", L"Unfinished_Reverie"
    });
    this->Albedo_Artifact_Set->Location = System::Drawing::Point(6, 419);
    this->Albedo_Artifact_Set->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_Artifact_Set->Name = L"Albedo_Artifact_Set";
    this->Albedo_Artifact_Set->Size = System::Drawing::Size(736, 59);
    this->Albedo_Artifact_Set->TabIndex = 1;
    this->Albedo_Artifact_Set->Text = L"-";
    // 
    // Albedo_Motion_Value_Label
    // 
    this->Albedo_Motion_Value_Label->AutoSize = true;
    this->Albedo_Motion_Value_Label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Motion_Value_Label->Location = System::Drawing::Point(3, 484);
    this->Albedo_Motion_Value_Label->Name = L"Albedo_Motion_Value_Label";
    this->Albedo_Motion_Value_Label->Size = System::Drawing::Size(730, 50);
    this->Albedo_Motion_Value_Label->TabIndex = 18;
    this->Albedo_Motion_Value_Label->Text = L"Edit Talent Multiplier (I.e. 200% = 200)         ";
    // 
    // Albedo_Motion_Value
    // 
    this->Albedo_Motion_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Motion_Value->Location = System::Drawing::Point(3, 537);
    this->Albedo_Motion_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
    this->Albedo_Motion_Value->Name = L"Albedo_Motion_Value";
    this->Albedo_Motion_Value->Size = System::Drawing::Size(739, 57);
    this->Albedo_Motion_Value->TabIndex = 17;
    // 
    // label13
    // 
    this->label13->AutoSize = true;
    this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label13->Location = System::Drawing::Point(3, 597);
    this->label13->Name = L"label13";
    this->label13->Size = System::Drawing::Size(483, 50);
    this->label13->TabIndex = 32;
    this->label13->Text = L"ATK Type (I.e. Plunge Attack)";
    // 
    // Albedo_ATK_Type
    // 
    this->Albedo_ATK_Type->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->Albedo_ATK_Type->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_ATK_Type->FormattingEnabled = true;
    this->Albedo_ATK_Type->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
        L"Normal ATK", L"Charge ATK", L"Plunge ATK",
            L"Elemental Skill", L"Elemental Burst"
    });
    this->Albedo_ATK_Type->Location = System::Drawing::Point(6, 653);
    this->Albedo_ATK_Type->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_ATK_Type->Name = L"Albedo_ATK_Type";
    this->Albedo_ATK_Type->Size = System::Drawing::Size(736, 59);
    this->Albedo_ATK_Type->TabIndex = 4;
    this->Albedo_ATK_Type->Text = L"-";
    // 
    // label10
    // 
    this->label10->AutoSize = true;
    this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label10->Location = System::Drawing::Point(3, 718);
    this->label10->Name = L"label10";
    this->label10->Size = System::Drawing::Size(225, 50);
    this->label10->TabIndex = 33;
    this->label10->Text = L"ATK Element";
    // 
    // Albedo_ATK_Element
    // 
    this->Albedo_ATK_Element->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->Albedo_ATK_Element->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_ATK_Element->FormattingEnabled = true;
    this->Albedo_ATK_Element->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
        L"Physical", L"Pyro", L"Hydro", L"Cryo",
            L"Electro", L"Dendro", L"Anemo", L"Geo"
    });
    this->Albedo_ATK_Element->Location = System::Drawing::Point(6, 774);
    this->Albedo_ATK_Element->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_ATK_Element->Name = L"Albedo_ATK_Element";
    this->Albedo_ATK_Element->Size = System::Drawing::Size(736, 59);
    this->Albedo_ATK_Element->TabIndex = 5;
    this->Albedo_ATK_Element->Text = L"-";
    // 
    // label35
    // 
    this->label35->AutoSize = true;
    this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label35->Location = System::Drawing::Point(3, 839);
    this->label35->Name = L"label35";
    this->label35->Size = System::Drawing::Size(285, 50);
    this->label35->TabIndex = 43;
    this->label35->Text = L"Team Member 1";
    // 
    // Albedo_Team_Member_1
    // 
    this->Albedo_Team_Member_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->Albedo_Team_Member_1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Team_Member_1->FormattingEnabled = true;
    this->Albedo_Team_Member_1->Items->AddRange(gcnew cli::array< System::Object^  >(83) {
        L"Null", L"Alhaitham", L"Aloy", L"Amber",
            L"Arataki Itto", L"Arlecchino", L"Baizhu", L"Barbara", L"Beidou", L"Bennett", L"Candance", L"Charlotte", L"Chevreuse", L"Childe",
            L"Chiori", L"Chongyun", L"Clorinde", L"Collei", L"Cyno", L"Dehya", L"Diluc", L"Diona", L"Dori", L"Eula", L"Faruzan", L"Fischl",
            L"Freminet", L"Furina", L"Gaming", L"Ganyu", L"Gorou", L"Heizou", L"Hu Tao", L"Jean", L"Kaeya", L"Kamisato Ayaka", L"Kamisato Ayato",
            L"Kaveh", L"Kazuha", L"Keqing", L"Kirara", L"Klee", L"Kujou Sara", L"Kuki Shinobu", L"Layla", L"Lisa", L"Lynette", L"Lynney",
            L"Mika", L"Mona", L"Nahida", L"Navia", L"Neuvillette", L"Nilou", L"Ningguang", L"Noelle", L"Qiqi", L"Raiden Shogun", L"Razor",
            L"Rosaria", L"Sangonomiya Kokomi", L"Sayu", L"Sethos", L"Shenhe", L"Sucrose", L"Thoma", L"Tighnari", L"Traveler", L"Venti", L"Wanderer",
            L"Wriothesley", L"Xiangling", L"Xianyun", L"Xiao", L"Xingqiu", L"Xinyan", L"Yae Miko", L"Yanfei", L"Yaoyao", L"Yelan", L"Yoimiya",
            L"Yunjin", L"Zhongli"
    });
    this->Albedo_Team_Member_1->Location = System::Drawing::Point(6, 895);
    this->Albedo_Team_Member_1->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_Team_Member_1->Name = L"Albedo_Team_Member_1";
    this->Albedo_Team_Member_1->Size = System::Drawing::Size(736, 59);
    this->Albedo_Team_Member_1->TabIndex = 2;
    this->Albedo_Team_Member_1->Text = L"-";
    this->Albedo_Team_Member_1->Leave += gcnew System::EventHandler(this, &MyForm::Albedo_Team_Member_1_Leave);
    // 
    // label34
    // 
    this->label34->AutoSize = true;
    this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label34->Location = System::Drawing::Point(3, 960);
    this->label34->Name = L"label34";
    this->label34->Size = System::Drawing::Size(285, 50);
    this->label34->TabIndex = 42;
    this->label34->Text = L"Team Member 2";
    // 
    // Albedo_Team_Member_2
    // 
    this->Albedo_Team_Member_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->Albedo_Team_Member_2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Team_Member_2->FormattingEnabled = true;
    this->Albedo_Team_Member_2->Items->AddRange(gcnew cli::array< System::Object^  >(83) {
        L"Null", L"Alhaitham", L"Aloy", L"Amber",
            L"Arataki Itto", L"Arlecchino", L"Baizhu", L"Barbara", L"Beidou", L"Bennett", L"Candance", L"Charlotte", L"Chevreuse", L"Childe",
            L"Chiori", L"Chongyun", L"Clorinde", L"Collei", L"Cyno", L"Dehya", L"Diluc", L"Diona", L"Dori", L"Eula", L"Faruzan", L"Fischl",
            L"Freminet", L"Furina", L"Gaming", L"Ganyu", L"Gorou", L"Heizou", L"Hu Tao", L"Jean", L"Kaeya", L"Kamisato Ayaka", L"Kamisato Ayato",
            L"Kaveh", L"Kazuha", L"Keqing", L"Kirara", L"Klee", L"Kujou Sara", L"Kuki Shinobu", L"Layla", L"Lisa", L"Lynette", L"Lynney",
            L"Mika", L"Mona", L"Nahida", L"Navia", L"Neuvillette", L"Nilou", L"Ningguang", L"Noelle", L"Qiqi", L"Raiden Shogun", L"Razor",
            L"Rosaria", L"Sangonomiya Kokomi", L"Sayu", L"Sethos", L"Shenhe", L"Sucrose", L"Thoma", L"Tighnari", L"Traveler", L"Venti", L"Wanderer",
            L"Wriothesley", L"Xiangling", L"Xianyun", L"Xiao", L"Xingqiu", L"Xinyan", L"Yae Miko", L"Yanfei", L"Yaoyao", L"Yelan", L"Yoimiya",
            L"Yunjin", L"Zhongli"
    });
    this->Albedo_Team_Member_2->Location = System::Drawing::Point(6, 1016);
    this->Albedo_Team_Member_2->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_Team_Member_2->Name = L"Albedo_Team_Member_2";
    this->Albedo_Team_Member_2->Size = System::Drawing::Size(736, 59);
    this->Albedo_Team_Member_2->TabIndex = 13;
    this->Albedo_Team_Member_2->Text = L"-";
    // 
    // label36
    // 
    this->label36->AutoSize = true;
    this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label36->Location = System::Drawing::Point(3, 1081);
    this->label36->Name = L"label36";
    this->label36->Size = System::Drawing::Size(285, 50);
    this->label36->TabIndex = 44;
    this->label36->Text = L"Team Member 3";
    // 
    // Albedo_Team_Member_3
    // 
    this->Albedo_Team_Member_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->flowLayoutPanel2->SetFlowBreak(this->Albedo_Team_Member_3, true);
    this->Albedo_Team_Member_3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Team_Member_3->FormattingEnabled = true;
    this->Albedo_Team_Member_3->Items->AddRange(gcnew cli::array< System::Object^  >(83) {
        L"Null", L"Alhaitham", L"Aloy", L"Amber",
            L"Arataki Itto", L"Arlecchino", L"Baizhu", L"Barbara", L"Beidou", L"Bennett", L"Candance", L"Charlotte", L"Chevreuse", L"Childe",
            L"Chiori", L"Chongyun", L"Clorinde", L"Collei", L"Cyno", L"Dehya", L"Diluc", L"Diona", L"Dori", L"Eula", L"Faruzan", L"Fischl",
            L"Freminet", L"Furina", L"Gaming", L"Ganyu", L"Gorou", L"Heizou", L"Hu Tao", L"Jean", L"Kaeya", L"Kamisato Ayaka", L"Kamisato Ayato",
            L"Kaveh", L"Kazuha", L"Keqing", L"Kirara", L"Klee", L"Kujou Sara", L"Kuki Shinobu", L"Layla", L"Lisa", L"Lynette", L"Lynney",
            L"Mika", L"Mona", L"Nahida", L"Navia", L"Neuvillette", L"Nilou", L"Ningguang", L"Noelle", L"Qiqi", L"Raiden Shogun", L"Razor",
            L"Rosaria", L"Sangonomiya Kokomi", L"Sayu", L"Sethos", L"Shenhe", L"Sucrose", L"Thoma", L"Tighnari", L"Traveler", L"Venti", L"Wanderer",
            L"Wriothesley", L"Xiangling", L"Xianyun", L"Xiao", L"Xingqiu", L"Xinyan", L"Yae Miko", L"Yanfei", L"Yaoyao", L"Yelan", L"Yoimiya",
            L"Yunjin", L"Zhongli"
    });
    this->Albedo_Team_Member_3->Location = System::Drawing::Point(6, 1137);
    this->Albedo_Team_Member_3->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_Team_Member_3->Name = L"Albedo_Team_Member_3";
    this->Albedo_Team_Member_3->Size = System::Drawing::Size(736, 59);
    this->Albedo_Team_Member_3->TabIndex = 14;
    this->Albedo_Team_Member_3->Text = L"-";
    // 
    // button1
    // 
    this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
    this->button1->Location = System::Drawing::Point(751, 3);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(638, 60);
    this->button1->TabIndex = 51;
    this->button1->Text = L"Click to Edit Buffs";
    this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    this->button1->UseVisualStyleBackColor = true;
    this->button1->Click += gcnew System::EventHandler(this, &MyForm::Buffs_Page_Popup);
    // 
    // label38
    // 
    this->label38->AutoSize = true;
    this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label38->Location = System::Drawing::Point(751, 66);
    this->label38->Name = L"label38";
    this->label38->Size = System::Drawing::Size(508, 50);
    this->label38->TabIndex = 46;
    this->label38->Text = L"Elemental Reactions Allowed\?";
    // 
    // Albedo_ICD_Active
    // 
    this->Albedo_ICD_Active->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->Albedo_ICD_Active->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_ICD_Active->FormattingEnabled = true;
    this->Albedo_ICD_Active->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
    this->Albedo_ICD_Active->Location = System::Drawing::Point(754, 122);
    this->Albedo_ICD_Active->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_ICD_Active->Name = L"Albedo_ICD_Active";
    this->Albedo_ICD_Active->Size = System::Drawing::Size(635, 59);
    this->Albedo_ICD_Active->TabIndex = 37;
    this->Albedo_ICD_Active->Text = L"-";
    // 
    // label33
    // 
    this->label33->AutoSize = true;
    this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label33->Location = System::Drawing::Point(751, 187);
    this->label33->Name = L"label33";
    this->label33->Size = System::Drawing::Size(388, 50);
    this->label33->TabIndex = 41;
    this->label33->Text = L"Enemy Elemental Aura";
    // 
    // Albedo_Enemy_Elemental_Aura
    // 
    this->Albedo_Enemy_Elemental_Aura->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->Albedo_Enemy_Elemental_Aura->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->Albedo_Enemy_Elemental_Aura->FormattingEnabled = true;
    this->Albedo_Enemy_Elemental_Aura->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
        L"Null", L"Pyro", L"Burning",
            L"Hydro", L"Cryo", L"Frozen", L"Electro", L"Dendro", L"Quicken"
    });
    this->Albedo_Enemy_Elemental_Aura->Location = System::Drawing::Point(754, 243);
    this->Albedo_Enemy_Elemental_Aura->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_Enemy_Elemental_Aura->Name = L"Albedo_Enemy_Elemental_Aura";
    this->Albedo_Enemy_Elemental_Aura->Size = System::Drawing::Size(635, 59);
    this->Albedo_Enemy_Elemental_Aura->TabIndex = 35;
    this->Albedo_Enemy_Elemental_Aura->Text = L"-";
    // 
    // label14
    // 
    this->label14->AutoSize = true;
    this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label14->Location = System::Drawing::Point(751, 308);
    this->label14->Name = L"label14";
    this->label14->Size = System::Drawing::Size(223, 50);
    this->label14->TabIndex = 40;
    this->label14->Text = L"Enemy Level";
    // 
    // Albedo_Enemy_Level
    // 
    this->Albedo_Enemy_Level->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->Albedo_Enemy_Level->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Enemy_Level->FormattingEnabled = true;
    this->Albedo_Enemy_Level->Items->AddRange(gcnew cli::array< System::Object^  >(100) {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
            13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
            45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76,
            77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100
    });
    this->Albedo_Enemy_Level->Location = System::Drawing::Point(754, 364);
    this->Albedo_Enemy_Level->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_Enemy_Level->Name = L"Albedo_Enemy_Level";
    this->Albedo_Enemy_Level->Size = System::Drawing::Size(635, 59);
    this->Albedo_Enemy_Level->TabIndex = 36;
    this->Albedo_Enemy_Level->Text = L"-";
    // 
    // Albedo_Enemy_Res_Label
    // 
    this->Albedo_Enemy_Res_Label->AutoSize = true;
    this->Albedo_Enemy_Res_Label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Enemy_Res_Label->Location = System::Drawing::Point(751, 429);
    this->Albedo_Enemy_Res_Label->Name = L"Albedo_Enemy_Res_Label";
    this->Albedo_Enemy_Res_Label->Size = System::Drawing::Size(638, 50);
    this->Albedo_Enemy_Res_Label->TabIndex = 38;
    this->Albedo_Enemy_Res_Label->Text = L"Enemy Base Resistance (I.e. 10% = 10)";
    // 
    // Albedo_Enemy_Res
    // 
    this->Albedo_Enemy_Res->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Enemy_Res->Location = System::Drawing::Point(751, 482);
    this->Albedo_Enemy_Res->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
    this->Albedo_Enemy_Res->Name = L"Albedo_Enemy_Res";
    this->Albedo_Enemy_Res->Size = System::Drawing::Size(638, 57);
    this->Albedo_Enemy_Res->TabIndex = 39;
    // 
    // Albedo_Run_Optimizer
    // 
    this->Albedo_Run_Optimizer->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Albedo_Run_Optimizer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->flowLayoutPanel2->SetFlowBreak(this->Albedo_Run_Optimizer, true);
    this->Albedo_Run_Optimizer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_Run_Optimizer->Location = System::Drawing::Point(754, 548);
    this->Albedo_Run_Optimizer->Margin = System::Windows::Forms::Padding(6);
    this->Albedo_Run_Optimizer->Name = L"Albedo_Run_Optimizer";
    this->Albedo_Run_Optimizer->Size = System::Drawing::Size(635, 77);
    this->Albedo_Run_Optimizer->TabIndex = 15;
    this->Albedo_Run_Optimizer->Text = L"Click to Run Optimizer";
    this->Albedo_Run_Optimizer->TextAlign = System::Drawing::ContentAlignment::TopCenter;
    this->Albedo_Run_Optimizer->UseVisualStyleBackColor = true;
    this->Albedo_Run_Optimizer->Click += gcnew System::EventHandler(this, &MyForm::Albedo_Run_Optimizer_Click);
    // 
    // tabControl2
    // 
    this->tabControl2->Controls->Add(this->tabPage1);
    this->tabControl2->Controls->Add(this->tabPage2);
    this->tabControl2->Controls->Add(this->tabPage3);
    this->tabControl2->Location = System::Drawing::Point(1408, 3);
    this->tabControl2->Name = L"tabControl2";
    this->tabControl2->SelectedIndex = 0;
    this->tabControl2->Size = System::Drawing::Size(1079, 1307);
    this->tabControl2->TabIndex = 29;
    // 
    // tabPage1
    // 
    this->tabPage1->Controls->Add(this->flowLayoutPanel9);
    this->tabPage1->Location = System::Drawing::Point(8, 46);
    this->tabPage1->Name = L"tabPage1";
    this->tabPage1->Padding = System::Windows::Forms::Padding(3);
    this->tabPage1->Size = System::Drawing::Size(1063, 1253);
    this->tabPage1->TabIndex = 0;
    this->tabPage1->Text = L"DMG: Before Optimization";
    this->tabPage1->UseVisualStyleBackColor = true;
    // 
    // flowLayoutPanel9
    // 
    this->flowLayoutPanel9->Controls->Add(this->NoCrit);
    this->flowLayoutPanel9->Controls->Add(this->Albedo_AverageDmg);
    this->flowLayoutPanel9->Controls->Add(this->Average);
    this->flowLayoutPanel9->Controls->Add(this->Albedo_NoCritDmg);
    this->flowLayoutPanel9->Controls->Add(this->WithCrit);
    this->flowLayoutPanel9->Controls->Add(this->Albedo_WithCritDmg);
    this->flowLayoutPanel9->Controls->Add(this->flowLayoutPanel7);
    this->flowLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
    this->flowLayoutPanel9->Location = System::Drawing::Point(3, 3);
    this->flowLayoutPanel9->Name = L"flowLayoutPanel9";
    this->flowLayoutPanel9->Size = System::Drawing::Size(1057, 1247);
    this->flowLayoutPanel9->TabIndex = 501;
    // 
    // NoCrit
    // 
    this->NoCrit->AutoSize = true;
    this->NoCrit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->NoCrit->Location = System::Drawing::Point(3, 0);
    this->NoCrit->Name = L"NoCrit";
    this->NoCrit->Size = System::Drawing::Size(160, 50);
    this->NoCrit->TabIndex = 20;
    this->NoCrit->Text = L"No Crit  ";
    // 
    // Albedo_AverageDmg
    // 
    this->Albedo_AverageDmg->Enabled = false;
    this->flowLayoutPanel9->SetFlowBreak(this->Albedo_AverageDmg, true);
    this->Albedo_AverageDmg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_AverageDmg->InterceptArrowKeys = false;
    this->Albedo_AverageDmg->Location = System::Drawing::Point(169, 3);
    this->Albedo_AverageDmg->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_AverageDmg->Name = L"Albedo_AverageDmg";
    this->Albedo_AverageDmg->ReadOnly = true;
    this->Albedo_AverageDmg->Size = System::Drawing::Size(173, 57);
    this->Albedo_AverageDmg->TabIndex = 26;
    // 
    // Average
    // 
    this->Average->AutoSize = true;
    this->Average->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Average->Location = System::Drawing::Point(3, 63);
    this->Average->Name = L"Average";
    this->Average->Size = System::Drawing::Size(165, 50);
    this->Average->TabIndex = 21;
    this->Average->Text = L"Average ";
    // 
    // Albedo_NoCritDmg
    // 
    this->Albedo_NoCritDmg->Enabled = false;
    this->flowLayoutPanel9->SetFlowBreak(this->Albedo_NoCritDmg, true);
    this->Albedo_NoCritDmg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_NoCritDmg->InterceptArrowKeys = false;
    this->Albedo_NoCritDmg->Location = System::Drawing::Point(174, 66);
    this->Albedo_NoCritDmg->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_NoCritDmg->Name = L"Albedo_NoCritDmg";
    this->Albedo_NoCritDmg->ReadOnly = true;
    this->Albedo_NoCritDmg->Size = System::Drawing::Size(168, 57);
    this->Albedo_NoCritDmg->TabIndex = 24;
    // 
    // WithCrit
    // 
    this->WithCrit->AutoSize = true;
    this->WithCrit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->WithCrit->Location = System::Drawing::Point(3, 126);
    this->WithCrit->Name = L"WithCrit";
    this->WithCrit->Size = System::Drawing::Size(168, 50);
    this->WithCrit->TabIndex = 22;
    this->WithCrit->Text = L"With Crit";
    // 
    // Albedo_WithCritDmg
    // 
    this->Albedo_WithCritDmg->Enabled = false;
    this->flowLayoutPanel9->SetFlowBreak(this->Albedo_WithCritDmg, true);
    this->Albedo_WithCritDmg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_WithCritDmg->InterceptArrowKeys = false;
    this->Albedo_WithCritDmg->Location = System::Drawing::Point(177, 129);
    this->Albedo_WithCritDmg->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_WithCritDmg->Name = L"Albedo_WithCritDmg";
    this->Albedo_WithCritDmg->ReadOnly = true;
    this->Albedo_WithCritDmg->Size = System::Drawing::Size(165, 57);
    this->Albedo_WithCritDmg->TabIndex = 27;
    // 
    // flowLayoutPanel7
    // 
    this->flowLayoutPanel7->Controls->Add(this->label1);
    this->flowLayoutPanel7->Controls->Add(this->label3);
    this->flowLayoutPanel7->Controls->Add(this->label4);
    this->flowLayoutPanel7->Controls->Add(this->label24);
    this->flowLayoutPanel7->Controls->Add(this->label9);
    this->flowLayoutPanel7->Controls->Add(this->label15);
    this->flowLayoutPanel7->Controls->Add(this->label16);
    this->flowLayoutPanel7->Controls->Add(this->label17);
    this->flowLayoutPanel7->Controls->Add(this->label18);
    this->flowLayoutPanel7->Controls->Add(this->Albedo_TotalATK_Before);
    this->flowLayoutPanel7->Controls->Add(this->Albedo_TotalDEF_Before);
    this->flowLayoutPanel7->Controls->Add(this->Albedo_TotalHP_Before);
    this->flowLayoutPanel7->Controls->Add(this->Albedo_TotalBASE_DMG_Before);
    this->flowLayoutPanel7->Controls->Add(this->Albedo_TotalEM_Before);
    this->flowLayoutPanel7->Controls->Add(this->Albedo_TotalER_Before);
    this->flowLayoutPanel7->Controls->Add(this->Albedo_TotalDMGPercent_Before);
    this->flowLayoutPanel7->Controls->Add(this->Albedo_TotalRatePercent_Before);
    this->flowLayoutPanel7->Controls->Add(this->Albedo_TotalCritDMG_Before);
    this->flowLayoutPanel7->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
    this->flowLayoutPanel7->Location = System::Drawing::Point(3, 192);
    this->flowLayoutPanel7->Name = L"flowLayoutPanel7";
    this->flowLayoutPanel7->Size = System::Drawing::Size(676, 547);
    this->flowLayoutPanel7->TabIndex = 48;
    // 
    // label1
    // 
    this->label1->AutoSize = true;
    this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label1->Location = System::Drawing::Point(3, 0);
    this->label1->Name = L"label1";
    this->label1->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label1->Size = System::Drawing::Size(152, 59);
    this->label1->TabIndex = 29;
    this->label1->Text = L"Total ATK";
    this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label3
    // 
    this->label3->AutoSize = true;
    this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label3->Location = System::Drawing::Point(3, 59);
    this->label3->Name = L"label3";
    this->label3->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label3->Size = System::Drawing::Size(151, 59);
    this->label3->TabIndex = 30;
    this->label3->Text = L"Total DEF";
    this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label4
    // 
    this->label4->AutoSize = true;
    this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label4->Location = System::Drawing::Point(3, 118);
    this->label4->Name = L"label4";
    this->label4->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label4->Size = System::Drawing::Size(138, 59);
    this->label4->TabIndex = 31;
    this->label4->Text = L"Total HP";
    this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label24
    // 
    this->label24->AutoSize = true;
    this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label24->Location = System::Drawing::Point(3, 177);
    this->label24->Name = L"label24";
    this->label24->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label24->Size = System::Drawing::Size(284, 59);
    this->label24->TabIndex = 43;
    this->label24->Text = L"Total Scaling Value";
    this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label9
    // 
    this->label9->AutoSize = true;
    this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label9->Location = System::Drawing::Point(3, 236);
    this->label9->Name = L"label9";
    this->label9->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label9->Size = System::Drawing::Size(142, 59);
    this->label9->TabIndex = 32;
    this->label9->Text = L"Total EM";
    this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label15
    // 
    this->label15->AutoSize = true;
    this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label15->Location = System::Drawing::Point(3, 295);
    this->label15->Name = L"label15";
    this->label15->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label15->Size = System::Drawing::Size(158, 59);
    this->label15->TabIndex = 37;
    this->label15->Text = L"Total ER%";
    this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label16
    // 
    this->label16->AutoSize = true;
    this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label16->Location = System::Drawing::Point(3, 354);
    this->label16->Name = L"label16";
    this->label16->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label16->Size = System::Drawing::Size(196, 59);
    this->label16->TabIndex = 42;
    this->label16->Text = L"Total DMG%";
    this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label17
    // 
    this->label17->AutoSize = true;
    this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label17->Location = System::Drawing::Point(3, 413);
    this->label17->Name = L"label17";
    this->label17->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label17->Size = System::Drawing::Size(219, 59);
    this->label17->TabIndex = 34;
    this->label17->Text = L"Total Crit Rate";
    this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label18
    // 
    this->label18->AutoSize = true;
    this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label18->Location = System::Drawing::Point(3, 472);
    this->label18->Name = L"label18";
    this->label18->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label18->Size = System::Drawing::Size(229, 59);
    this->label18->TabIndex = 38;
    this->label18->Text = L"Total Crit DMG";
    this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // Albedo_TotalATK_Before
    // 
    this->Albedo_TotalATK_Before->Enabled = false;
    this->Albedo_TotalATK_Before->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalATK_Before->InterceptArrowKeys = false;
    this->Albedo_TotalATK_Before->Location = System::Drawing::Point(290, 0);
    this->Albedo_TotalATK_Before->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalATK_Before->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalATK_Before->Name = L"Albedo_TotalATK_Before";
    this->Albedo_TotalATK_Before->ReadOnly = true;
    this->Albedo_TotalATK_Before->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalATK_Before->TabIndex = 51;
    // 
    // Albedo_TotalDEF_Before
    // 
    this->Albedo_TotalDEF_Before->Enabled = false;
    this->Albedo_TotalDEF_Before->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalDEF_Before->InterceptArrowKeys = false;
    this->Albedo_TotalDEF_Before->Location = System::Drawing::Point(290, 50);
    this->Albedo_TotalDEF_Before->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalDEF_Before->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalDEF_Before->Name = L"Albedo_TotalDEF_Before";
    this->Albedo_TotalDEF_Before->ReadOnly = true;
    this->Albedo_TotalDEF_Before->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalDEF_Before->TabIndex = 52;
    // 
    // Albedo_TotalHP_Before
    // 
    this->Albedo_TotalHP_Before->Enabled = false;
    this->Albedo_TotalHP_Before->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalHP_Before->InterceptArrowKeys = false;
    this->Albedo_TotalHP_Before->Location = System::Drawing::Point(290, 100);
    this->Albedo_TotalHP_Before->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalHP_Before->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalHP_Before->Name = L"Albedo_TotalHP_Before";
    this->Albedo_TotalHP_Before->ReadOnly = true;
    this->Albedo_TotalHP_Before->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalHP_Before->TabIndex = 53;
    // 
    // Albedo_TotalBASE_DMG_Before
    // 
    this->Albedo_TotalBASE_DMG_Before->Enabled = false;
    this->Albedo_TotalBASE_DMG_Before->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalBASE_DMG_Before->InterceptArrowKeys = false;
    this->Albedo_TotalBASE_DMG_Before->Location = System::Drawing::Point(290, 150);
    this->Albedo_TotalBASE_DMG_Before->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalBASE_DMG_Before->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalBASE_DMG_Before->Name = L"Albedo_TotalBASE_DMG_Before";
    this->Albedo_TotalBASE_DMG_Before->ReadOnly = true;
    this->Albedo_TotalBASE_DMG_Before->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalBASE_DMG_Before->TabIndex = 59;
    // 
    // Albedo_TotalEM_Before
    // 
    this->Albedo_TotalEM_Before->Enabled = false;
    this->Albedo_TotalEM_Before->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalEM_Before->InterceptArrowKeys = false;
    this->Albedo_TotalEM_Before->Location = System::Drawing::Point(290, 200);
    this->Albedo_TotalEM_Before->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalEM_Before->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalEM_Before->Name = L"Albedo_TotalEM_Before";
    this->Albedo_TotalEM_Before->ReadOnly = true;
    this->Albedo_TotalEM_Before->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalEM_Before->TabIndex = 58;
    // 
    // Albedo_TotalER_Before
    // 
    this->Albedo_TotalER_Before->Enabled = false;
    this->Albedo_TotalER_Before->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalER_Before->InterceptArrowKeys = false;
    this->Albedo_TotalER_Before->Location = System::Drawing::Point(290, 250);
    this->Albedo_TotalER_Before->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalER_Before->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalER_Before->Name = L"Albedo_TotalER_Before";
    this->Albedo_TotalER_Before->ReadOnly = true;
    this->Albedo_TotalER_Before->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalER_Before->TabIndex = 57;
    // 
    // Albedo_TotalDMGPercent_Before
    // 
    this->Albedo_TotalDMGPercent_Before->Enabled = false;
    this->Albedo_TotalDMGPercent_Before->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalDMGPercent_Before->InterceptArrowKeys = false;
    this->Albedo_TotalDMGPercent_Before->Location = System::Drawing::Point(290, 300);
    this->Albedo_TotalDMGPercent_Before->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalDMGPercent_Before->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalDMGPercent_Before->Name = L"Albedo_TotalDMGPercent_Before";
    this->Albedo_TotalDMGPercent_Before->ReadOnly = true;
    this->Albedo_TotalDMGPercent_Before->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalDMGPercent_Before->TabIndex = 56;
    // 
    // Albedo_TotalRatePercent_Before
    // 
    this->Albedo_TotalRatePercent_Before->Enabled = false;
    this->Albedo_TotalRatePercent_Before->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalRatePercent_Before->InterceptArrowKeys = false;
    this->Albedo_TotalRatePercent_Before->Location = System::Drawing::Point(290, 350);
    this->Albedo_TotalRatePercent_Before->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalRatePercent_Before->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalRatePercent_Before->Name = L"Albedo_TotalRatePercent_Before";
    this->Albedo_TotalRatePercent_Before->ReadOnly = true;
    this->Albedo_TotalRatePercent_Before->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalRatePercent_Before->TabIndex = 54;
    // 
    // Albedo_TotalCritDMG_Before
    // 
    this->Albedo_TotalCritDMG_Before->Enabled = false;
    this->Albedo_TotalCritDMG_Before->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalCritDMG_Before->InterceptArrowKeys = false;
    this->Albedo_TotalCritDMG_Before->Location = System::Drawing::Point(290, 400);
    this->Albedo_TotalCritDMG_Before->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalCritDMG_Before->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalCritDMG_Before->Name = L"Albedo_TotalCritDMG_Before";
    this->Albedo_TotalCritDMG_Before->ReadOnly = true;
    this->Albedo_TotalCritDMG_Before->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalCritDMG_Before->TabIndex = 55;
    // 
    // tabPage2
    // 
    this->tabPage2->Controls->Add(this->flowLayoutPanel4);
    this->tabPage2->Location = System::Drawing::Point(8, 46);
    this->tabPage2->Name = L"tabPage2";
    this->tabPage2->Padding = System::Windows::Forms::Padding(3);
    this->tabPage2->Size = System::Drawing::Size(1063, 1253);
    this->tabPage2->TabIndex = 1;
    this->tabPage2->Text = L"DMG: After Optimization";
    this->tabPage2->UseVisualStyleBackColor = true;
    // 
    // flowLayoutPanel4
    // 
    this->flowLayoutPanel4->Controls->Add(this->No_Crit_After);
    this->flowLayoutPanel4->Controls->Add(this->Albedo_No_Crit_After_value);
    this->flowLayoutPanel4->Controls->Add(this->Average_After);
    this->flowLayoutPanel4->Controls->Add(this->Albedo_Average_After_value);
    this->flowLayoutPanel4->Controls->Add(this->With_Crit_After);
    this->flowLayoutPanel4->Controls->Add(this->Albedo_With_Crit_After_value);
    this->flowLayoutPanel4->Controls->Add(this->flowLayoutPanel13);
    this->flowLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
    this->flowLayoutPanel4->Location = System::Drawing::Point(3, 3);
    this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
    this->flowLayoutPanel4->Size = System::Drawing::Size(1057, 1247);
    this->flowLayoutPanel4->TabIndex = 28;
    // 
    // No_Crit_After
    // 
    this->No_Crit_After->AutoSize = true;
    this->No_Crit_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->No_Crit_After->Location = System::Drawing::Point(3, 0);
    this->No_Crit_After->Name = L"No_Crit_After";
    this->No_Crit_After->Size = System::Drawing::Size(160, 50);
    this->No_Crit_After->TabIndex = 20;
    this->No_Crit_After->Text = L"No Crit  ";
    // 
    // Albedo_No_Crit_After_value
    // 
    this->Albedo_No_Crit_After_value->Enabled = false;
    this->flowLayoutPanel4->SetFlowBreak(this->Albedo_No_Crit_After_value, true);
    this->Albedo_No_Crit_After_value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->Albedo_No_Crit_After_value->InterceptArrowKeys = false;
    this->Albedo_No_Crit_After_value->Location = System::Drawing::Point(169, 3);
    this->Albedo_No_Crit_After_value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_No_Crit_After_value->Name = L"Albedo_No_Crit_After_value";
    this->Albedo_No_Crit_After_value->ReadOnly = true;
    this->Albedo_No_Crit_After_value->Size = System::Drawing::Size(173, 57);
    this->Albedo_No_Crit_After_value->TabIndex = 24;
    // 
    // Average_After
    // 
    this->Average_After->AutoSize = true;
    this->Average_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Average_After->Location = System::Drawing::Point(3, 63);
    this->Average_After->Name = L"Average_After";
    this->Average_After->Size = System::Drawing::Size(165, 50);
    this->Average_After->TabIndex = 21;
    this->Average_After->Text = L"Average ";
    // 
    // Albedo_Average_After_value
    // 
    this->Albedo_Average_After_value->Enabled = false;
    this->flowLayoutPanel4->SetFlowBreak(this->Albedo_Average_After_value, true);
    this->Albedo_Average_After_value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->Albedo_Average_After_value->InterceptArrowKeys = false;
    this->Albedo_Average_After_value->Location = System::Drawing::Point(174, 66);
    this->Albedo_Average_After_value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_Average_After_value->Name = L"Albedo_Average_After_value";
    this->Albedo_Average_After_value->ReadOnly = true;
    this->Albedo_Average_After_value->Size = System::Drawing::Size(168, 57);
    this->Albedo_Average_After_value->TabIndex = 26;
    // 
    // With_Crit_After
    // 
    this->With_Crit_After->AutoSize = true;
    this->With_Crit_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->With_Crit_After->Location = System::Drawing::Point(3, 126);
    this->With_Crit_After->Name = L"With_Crit_After";
    this->With_Crit_After->Size = System::Drawing::Size(168, 50);
    this->With_Crit_After->TabIndex = 22;
    this->With_Crit_After->Text = L"With Crit";
    // 
    // Albedo_With_Crit_After_value
    // 
    this->Albedo_With_Crit_After_value->Enabled = false;
    this->flowLayoutPanel4->SetFlowBreak(this->Albedo_With_Crit_After_value, true);
    this->Albedo_With_Crit_After_value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->Albedo_With_Crit_After_value->InterceptArrowKeys = false;
    this->Albedo_With_Crit_After_value->Location = System::Drawing::Point(177, 129);
    this->Albedo_With_Crit_After_value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_With_Crit_After_value->Name = L"Albedo_With_Crit_After_value";
    this->Albedo_With_Crit_After_value->ReadOnly = true;
    this->Albedo_With_Crit_After_value->Size = System::Drawing::Size(165, 57);
    this->Albedo_With_Crit_After_value->TabIndex = 27;
    // 
    // flowLayoutPanel13
    // 
    this->flowLayoutPanel13->Controls->Add(this->label5);
    this->flowLayoutPanel13->Controls->Add(this->label6);
    this->flowLayoutPanel13->Controls->Add(this->label8);
    this->flowLayoutPanel13->Controls->Add(this->label25);
    this->flowLayoutPanel13->Controls->Add(this->label19);
    this->flowLayoutPanel13->Controls->Add(this->label20);
    this->flowLayoutPanel13->Controls->Add(this->label21);
    this->flowLayoutPanel13->Controls->Add(this->label22);
    this->flowLayoutPanel13->Controls->Add(this->label23);
    this->flowLayoutPanel13->Controls->Add(this->Albedo_TotalCRITDMG_After);
    this->flowLayoutPanel13->Controls->Add(this->Albedo_TotalRatePercent_After);
    this->flowLayoutPanel13->Controls->Add(this->Albedo_TotalDMGPercent_After);
    this->flowLayoutPanel13->Controls->Add(this->Albedo_TotalER_After);
    this->flowLayoutPanel13->Controls->Add(this->Albedo_TotalEM_After);
    this->flowLayoutPanel13->Controls->Add(this->Albedo_TotalBASE_DMG_After);
    this->flowLayoutPanel13->Controls->Add(this->Albedo_TotalHP_After);
    this->flowLayoutPanel13->Controls->Add(this->Albedo_TotalDEF_After);
    this->flowLayoutPanel13->Controls->Add(this->Albedo_TotalATK_After);
    this->flowLayoutPanel13->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
    this->flowLayoutPanel13->Location = System::Drawing::Point(3, 192);
    this->flowLayoutPanel13->Name = L"flowLayoutPanel13";
    this->flowLayoutPanel13->Size = System::Drawing::Size(670, 554);
    this->flowLayoutPanel13->TabIndex = 48;
    // 
    // label5
    // 
    this->label5->AutoSize = true;
    this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label5->Location = System::Drawing::Point(3, 0);
    this->label5->Name = L"label5";
    this->label5->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label5->Size = System::Drawing::Size(152, 59);
    this->label5->TabIndex = 29;
    this->label5->Text = L"Total ATK";
    this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label6
    // 
    this->label6->AutoSize = true;
    this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label6->Location = System::Drawing::Point(3, 59);
    this->label6->Name = L"label6";
    this->label6->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label6->Size = System::Drawing::Size(151, 59);
    this->label6->TabIndex = 30;
    this->label6->Text = L"Total DEF";
    this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label8
    // 
    this->label8->AutoSize = true;
    this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label8->Location = System::Drawing::Point(3, 118);
    this->label8->Name = L"label8";
    this->label8->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label8->Size = System::Drawing::Size(138, 59);
    this->label8->TabIndex = 31;
    this->label8->Text = L"Total HP";
    this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label25
    // 
    this->label25->AutoSize = true;
    this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label25->Location = System::Drawing::Point(3, 177);
    this->label25->Name = L"label25";
    this->label25->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label25->Size = System::Drawing::Size(284, 59);
    this->label25->TabIndex = 44;
    this->label25->Text = L"Total Scaling Value";
    this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label19
    // 
    this->label19->AutoSize = true;
    this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label19->Location = System::Drawing::Point(3, 236);
    this->label19->Name = L"label19";
    this->label19->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label19->Size = System::Drawing::Size(142, 59);
    this->label19->TabIndex = 32;
    this->label19->Text = L"Total EM";
    this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label20
    // 
    this->label20->AutoSize = true;
    this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label20->Location = System::Drawing::Point(3, 295);
    this->label20->Name = L"label20";
    this->label20->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label20->Size = System::Drawing::Size(158, 59);
    this->label20->TabIndex = 37;
    this->label20->Text = L"Total ER%";
    this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label21
    // 
    this->label21->AutoSize = true;
    this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label21->Location = System::Drawing::Point(3, 354);
    this->label21->Name = L"label21";
    this->label21->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label21->Size = System::Drawing::Size(196, 59);
    this->label21->TabIndex = 42;
    this->label21->Text = L"Total DMG%";
    this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label22
    // 
    this->label22->AutoSize = true;
    this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label22->Location = System::Drawing::Point(3, 413);
    this->label22->Name = L"label22";
    this->label22->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label22->Size = System::Drawing::Size(219, 59);
    this->label22->TabIndex = 34;
    this->label22->Text = L"Total Crit Rate";
    this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label23
    // 
    this->label23->AutoSize = true;
    this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label23->Location = System::Drawing::Point(3, 472);
    this->label23->Name = L"label23";
    this->label23->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label23->Size = System::Drawing::Size(229, 59);
    this->label23->TabIndex = 38;
    this->label23->Text = L"Total Crit DMG";
    this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // Albedo_TotalCRITDMG_After
    // 
    this->Albedo_TotalCRITDMG_After->Enabled = false;
    this->Albedo_TotalCRITDMG_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalCRITDMG_After->InterceptArrowKeys = false;
    this->Albedo_TotalCRITDMG_After->Location = System::Drawing::Point(290, 0);
    this->Albedo_TotalCRITDMG_After->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalCRITDMG_After->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalCRITDMG_After->Name = L"Albedo_TotalCRITDMG_After";
    this->Albedo_TotalCRITDMG_After->ReadOnly = true;
    this->Albedo_TotalCRITDMG_After->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalCRITDMG_After->TabIndex = 55;
    // 
    // Albedo_TotalRatePercent_After
    // 
    this->Albedo_TotalRatePercent_After->Enabled = false;
    this->Albedo_TotalRatePercent_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalRatePercent_After->InterceptArrowKeys = false;
    this->Albedo_TotalRatePercent_After->Location = System::Drawing::Point(290, 50);
    this->Albedo_TotalRatePercent_After->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalRatePercent_After->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalRatePercent_After->Name = L"Albedo_TotalRatePercent_After";
    this->Albedo_TotalRatePercent_After->ReadOnly = true;
    this->Albedo_TotalRatePercent_After->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalRatePercent_After->TabIndex = 54;
    // 
    // Albedo_TotalDMGPercent_After
    // 
    this->Albedo_TotalDMGPercent_After->Enabled = false;
    this->Albedo_TotalDMGPercent_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalDMGPercent_After->InterceptArrowKeys = false;
    this->Albedo_TotalDMGPercent_After->Location = System::Drawing::Point(290, 100);
    this->Albedo_TotalDMGPercent_After->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalDMGPercent_After->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalDMGPercent_After->Name = L"Albedo_TotalDMGPercent_After";
    this->Albedo_TotalDMGPercent_After->ReadOnly = true;
    this->Albedo_TotalDMGPercent_After->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalDMGPercent_After->TabIndex = 56;
    // 
    // Albedo_TotalER_After
    // 
    this->Albedo_TotalER_After->Enabled = false;
    this->Albedo_TotalER_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalER_After->InterceptArrowKeys = false;
    this->Albedo_TotalER_After->Location = System::Drawing::Point(290, 150);
    this->Albedo_TotalER_After->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalER_After->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalER_After->Name = L"Albedo_TotalER_After";
    this->Albedo_TotalER_After->ReadOnly = true;
    this->Albedo_TotalER_After->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalER_After->TabIndex = 57;
    // 
    // Albedo_TotalEM_After
    // 
    this->Albedo_TotalEM_After->Enabled = false;
    this->Albedo_TotalEM_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalEM_After->InterceptArrowKeys = false;
    this->Albedo_TotalEM_After->Location = System::Drawing::Point(290, 200);
    this->Albedo_TotalEM_After->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalEM_After->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalEM_After->Name = L"Albedo_TotalEM_After";
    this->Albedo_TotalEM_After->ReadOnly = true;
    this->Albedo_TotalEM_After->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalEM_After->TabIndex = 58;
    // 
    // Albedo_TotalBASE_DMG_After
    // 
    this->Albedo_TotalBASE_DMG_After->Enabled = false;
    this->Albedo_TotalBASE_DMG_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalBASE_DMG_After->InterceptArrowKeys = false;
    this->Albedo_TotalBASE_DMG_After->Location = System::Drawing::Point(290, 250);
    this->Albedo_TotalBASE_DMG_After->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalBASE_DMG_After->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalBASE_DMG_After->Name = L"Albedo_TotalBASE_DMG_After";
    this->Albedo_TotalBASE_DMG_After->ReadOnly = true;
    this->Albedo_TotalBASE_DMG_After->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalBASE_DMG_After->TabIndex = 59;
    // 
    // Albedo_TotalHP_After
    // 
    this->Albedo_TotalHP_After->Enabled = false;
    this->Albedo_TotalHP_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalHP_After->InterceptArrowKeys = false;
    this->Albedo_TotalHP_After->Location = System::Drawing::Point(290, 300);
    this->Albedo_TotalHP_After->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalHP_After->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalHP_After->Name = L"Albedo_TotalHP_After";
    this->Albedo_TotalHP_After->ReadOnly = true;
    this->Albedo_TotalHP_After->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalHP_After->TabIndex = 53;
    // 
    // Albedo_TotalDEF_After
    // 
    this->Albedo_TotalDEF_After->Enabled = false;
    this->Albedo_TotalDEF_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalDEF_After->InterceptArrowKeys = false;
    this->Albedo_TotalDEF_After->Location = System::Drawing::Point(290, 350);
    this->Albedo_TotalDEF_After->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalDEF_After->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalDEF_After->Name = L"Albedo_TotalDEF_After";
    this->Albedo_TotalDEF_After->ReadOnly = true;
    this->Albedo_TotalDEF_After->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalDEF_After->TabIndex = 52;
    // 
    // Albedo_TotalATK_After
    // 
    this->Albedo_TotalATK_After->Enabled = false;
    this->Albedo_TotalATK_After->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_TotalATK_After->InterceptArrowKeys = false;
    this->Albedo_TotalATK_After->Location = System::Drawing::Point(290, 400);
    this->Albedo_TotalATK_After->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_TotalATK_After->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_TotalATK_After->Name = L"Albedo_TotalATK_After";
    this->Albedo_TotalATK_After->ReadOnly = true;
    this->Albedo_TotalATK_After->Size = System::Drawing::Size(168, 50);
    this->Albedo_TotalATK_After->TabIndex = 51;
    // 
    // tabPage3
    // 
    this->tabPage3->Controls->Add(this->flowLayoutPanel3);
    this->tabPage3->Location = System::Drawing::Point(8, 46);
    this->tabPage3->Name = L"tabPage3";
    this->tabPage3->Padding = System::Windows::Forms::Padding(3);
    this->tabPage3->Size = System::Drawing::Size(1063, 1253);
    this->tabPage3->TabIndex = 2;
    this->tabPage3->Text = L"Roll Totals/Roll Values: Sub & Main Stats";
    this->tabPage3->UseVisualStyleBackColor = true;
    // 
    // flowLayoutPanel3
    // 
    this->flowLayoutPanel3->Controls->Add(this->flowLayoutPanel6);
    this->flowLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
    this->flowLayoutPanel3->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
    this->flowLayoutPanel3->Location = System::Drawing::Point(3, 3);
    this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
    this->flowLayoutPanel3->Size = System::Drawing::Size(1057, 1247);
    this->flowLayoutPanel3->TabIndex = 26;
    // 
    // flowLayoutPanel6
    // 
    this->flowLayoutPanel6->Controls->Add(this->label27);
    this->flowLayoutPanel6->Controls->Add(this->label2);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_DEFPercent_Rolls_label);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_HPPercent_Rolls_label);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_FlatATK_label);
    this->flowLayoutPanel6->Controls->Add(this->label11);
    this->flowLayoutPanel6->Controls->Add(this->label12);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_EM_Rolls_label);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_ERPercent_Rolls_label);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_DMGPercent_Rolls_label);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_RatePercent_Rolls_label);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_CRITDMG_Rolls_label);
    this->flowLayoutPanel6->Controls->Add(this->label26);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_ATKPercent_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_DEFPercent_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_HPPercent_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_FLATATK_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_FLATDEF_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_FLATHP_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_EM_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_ERPercent_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->label7);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_RatePercent_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_CRITDMG_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->label28);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_ATKPercent_MS_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_HPPercent_MS_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_DEFPercent_MS_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->label30);
    this->flowLayoutPanel6->Controls->Add(this->label31);
    this->flowLayoutPanel6->Controls->Add(this->label32);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_EM_MS_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_CRITDMG_MS_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_RatePercent_MS_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_DMGPercent_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_ERPercent_MS_Rolls);
    this->flowLayoutPanel6->Controls->Add(this->label29);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_ATKPercent_Value);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_CRITDMG_Value);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_RatePercent_Value);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_DMG_Percent_Value);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_ER_Value);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_EM_Value);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_FLATHP_Value);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_FLATDEF_Value);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_FLATATK_Value);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_HPPercent_Value);
    this->flowLayoutPanel6->Controls->Add(this->Albedo_DEFPercent_Value);
    this->flowLayoutPanel3->SetFlowBreak(this->flowLayoutPanel6, true);
    this->flowLayoutPanel6->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
    this->flowLayoutPanel6->Location = System::Drawing::Point(3, 3);
    this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
    this->flowLayoutPanel6->Size = System::Drawing::Size(829, 925);
    this->flowLayoutPanel6->TabIndex = 47;
    // 
    // label27
    // 
    this->label27->AutoSize = true;
    this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label27->Location = System::Drawing::Point(0, 0);
    this->label27->Margin = System::Windows::Forms::Padding(0);
    this->label27->Name = L"label27";
    this->label27->Padding = System::Windows::Forms::Padding(30, 2, 30, 2);
    this->label27->Size = System::Drawing::Size(116, 49);
    this->label27->TabIndex = 54;
    this->label27->Text = L"    ";
    this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // label2
    // 
    this->label2->AutoSize = true;
    this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label2->Location = System::Drawing::Point(3, 49);
    this->label2->Name = L"label2";
    this->label2->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label2->Size = System::Drawing::Size(94, 59);
    this->label2->TabIndex = 29;
    this->label2->Text = L"Atk%";
    this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // Albedo_DEFPercent_Rolls_label
    // 
    this->Albedo_DEFPercent_Rolls_label->AutoSize = true;
    this->Albedo_DEFPercent_Rolls_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_DEFPercent_Rolls_label->Location = System::Drawing::Point(3, 108);
    this->Albedo_DEFPercent_Rolls_label->Name = L"Albedo_DEFPercent_Rolls_label";
    this->Albedo_DEFPercent_Rolls_label->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->Albedo_DEFPercent_Rolls_label->Size = System::Drawing::Size(100, 59);
    this->Albedo_DEFPercent_Rolls_label->TabIndex = 30;
    this->Albedo_DEFPercent_Rolls_label->Text = L"DEF%";
    this->Albedo_DEFPercent_Rolls_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // Albedo_HPPercent_Rolls_label
    // 
    this->Albedo_HPPercent_Rolls_label->AutoSize = true;
    this->Albedo_HPPercent_Rolls_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_HPPercent_Rolls_label->Location = System::Drawing::Point(3, 167);
    this->Albedo_HPPercent_Rolls_label->Name = L"Albedo_HPPercent_Rolls_label";
    this->Albedo_HPPercent_Rolls_label->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->Albedo_HPPercent_Rolls_label->Size = System::Drawing::Size(87, 59);
    this->Albedo_HPPercent_Rolls_label->TabIndex = 31;
    this->Albedo_HPPercent_Rolls_label->Text = L"HP%";
    this->Albedo_HPPercent_Rolls_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // Albedo_FlatATK_label
    // 
    this->Albedo_FlatATK_label->AutoSize = true;
    this->Albedo_FlatATK_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_FlatATK_label->Location = System::Drawing::Point(3, 226);
    this->Albedo_FlatATK_label->Name = L"Albedo_FlatATK_label";
    this->Albedo_FlatATK_label->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->Albedo_FlatATK_label->Size = System::Drawing::Size(135, 59);
    this->Albedo_FlatATK_label->TabIndex = 39;
    this->Albedo_FlatATK_label->Text = L"Flat ATK";
    this->Albedo_FlatATK_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label11
    // 
    this->label11->AutoSize = true;
    this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label11->Location = System::Drawing::Point(3, 285);
    this->label11->Name = L"label11";
    this->label11->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label11->Size = System::Drawing::Size(134, 59);
    this->label11->TabIndex = 40;
    this->label11->Text = L"Flat DEF";
    this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label12
    // 
    this->label12->AutoSize = true;
    this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label12->Location = System::Drawing::Point(3, 344);
    this->label12->Name = L"label12";
    this->label12->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label12->Size = System::Drawing::Size(121, 59);
    this->label12->TabIndex = 41;
    this->label12->Text = L"Flat HP";
    this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // Albedo_EM_Rolls_label
    // 
    this->Albedo_EM_Rolls_label->AutoSize = true;
    this->Albedo_EM_Rolls_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_EM_Rolls_label->Location = System::Drawing::Point(3, 403);
    this->Albedo_EM_Rolls_label->Name = L"Albedo_EM_Rolls_label";
    this->Albedo_EM_Rolls_label->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->Albedo_EM_Rolls_label->Size = System::Drawing::Size(65, 59);
    this->Albedo_EM_Rolls_label->TabIndex = 32;
    this->Albedo_EM_Rolls_label->Text = L"EM";
    this->Albedo_EM_Rolls_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // Albedo_ERPercent_Rolls_label
    // 
    this->Albedo_ERPercent_Rolls_label->AutoSize = true;
    this->Albedo_ERPercent_Rolls_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_ERPercent_Rolls_label->Location = System::Drawing::Point(3, 462);
    this->Albedo_ERPercent_Rolls_label->Name = L"Albedo_ERPercent_Rolls_label";
    this->Albedo_ERPercent_Rolls_label->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->Albedo_ERPercent_Rolls_label->Size = System::Drawing::Size(81, 59);
    this->Albedo_ERPercent_Rolls_label->TabIndex = 37;
    this->Albedo_ERPercent_Rolls_label->Text = L"ER%";
    this->Albedo_ERPercent_Rolls_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // Albedo_DMGPercent_Rolls_label
    // 
    this->Albedo_DMGPercent_Rolls_label->AutoSize = true;
    this->Albedo_DMGPercent_Rolls_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_DMGPercent_Rolls_label->Location = System::Drawing::Point(3, 521);
    this->Albedo_DMGPercent_Rolls_label->Name = L"Albedo_DMGPercent_Rolls_label";
    this->Albedo_DMGPercent_Rolls_label->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->Albedo_DMGPercent_Rolls_label->Size = System::Drawing::Size(119, 59);
    this->Albedo_DMGPercent_Rolls_label->TabIndex = 42;
    this->Albedo_DMGPercent_Rolls_label->Text = L"DMG%";
    this->Albedo_DMGPercent_Rolls_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // Albedo_RatePercent_Rolls_label
    // 
    this->Albedo_RatePercent_Rolls_label->AutoSize = true;
    this->Albedo_RatePercent_Rolls_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_RatePercent_Rolls_label->Location = System::Drawing::Point(3, 580);
    this->Albedo_RatePercent_Rolls_label->Name = L"Albedo_RatePercent_Rolls_label";
    this->Albedo_RatePercent_Rolls_label->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->Albedo_RatePercent_Rolls_label->Size = System::Drawing::Size(142, 59);
    this->Albedo_RatePercent_Rolls_label->TabIndex = 34;
    this->Albedo_RatePercent_Rolls_label->Text = L"Crit Rate";
    this->Albedo_RatePercent_Rolls_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // Albedo_CRITDMG_Rolls_label
    // 
    this->Albedo_CRITDMG_Rolls_label->AutoSize = true;
    this->flowLayoutPanel6->SetFlowBreak(this->Albedo_CRITDMG_Rolls_label, true);
    this->Albedo_CRITDMG_Rolls_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_CRITDMG_Rolls_label->Location = System::Drawing::Point(3, 639);
    this->Albedo_CRITDMG_Rolls_label->Name = L"Albedo_CRITDMG_Rolls_label";
    this->Albedo_CRITDMG_Rolls_label->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->Albedo_CRITDMG_Rolls_label->Size = System::Drawing::Size(152, 59);
    this->Albedo_CRITDMG_Rolls_label->TabIndex = 38;
    this->Albedo_CRITDMG_Rolls_label->Text = L"Crit DMG";
    this->Albedo_CRITDMG_Rolls_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // label26
    // 
    this->label26->AutoSize = true;
    this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label26->Location = System::Drawing::Point(158, 0);
    this->label26->Margin = System::Windows::Forms::Padding(0);
    this->label26->Name = L"label26";
    this->label26->Size = System::Drawing::Size(137, 45);
    this->label26->TabIndex = 53;
    this->label26->Text = L"Sub Stat";
    this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // Albedo_ATKPercent_Rolls
    // 
    this->Albedo_ATKPercent_Rolls->Enabled = false;
    this->Albedo_ATKPercent_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_ATKPercent_Rolls->InterceptArrowKeys = false;
    this->Albedo_ATKPercent_Rolls->Location = System::Drawing::Point(158, 45);
    this->Albedo_ATKPercent_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_ATKPercent_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_ATKPercent_Rolls->Name = L"Albedo_ATKPercent_Rolls";
    this->Albedo_ATKPercent_Rolls->ReadOnly = true;
    this->Albedo_ATKPercent_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_ATKPercent_Rolls->TabIndex = 55;
    // 
    // Albedo_DEFPercent_Rolls
    // 
    this->Albedo_DEFPercent_Rolls->Enabled = false;
    this->Albedo_DEFPercent_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_DEFPercent_Rolls->InterceptArrowKeys = false;
    this->Albedo_DEFPercent_Rolls->Location = System::Drawing::Point(158, 95);
    this->Albedo_DEFPercent_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_DEFPercent_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_DEFPercent_Rolls->Name = L"Albedo_DEFPercent_Rolls";
    this->Albedo_DEFPercent_Rolls->ReadOnly = true;
    this->Albedo_DEFPercent_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_DEFPercent_Rolls->TabIndex = 56;
    // 
    // Albedo_HPPercent_Rolls
    // 
    this->Albedo_HPPercent_Rolls->Enabled = false;
    this->Albedo_HPPercent_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_HPPercent_Rolls->InterceptArrowKeys = false;
    this->Albedo_HPPercent_Rolls->Location = System::Drawing::Point(158, 145);
    this->Albedo_HPPercent_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_HPPercent_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_HPPercent_Rolls->Name = L"Albedo_HPPercent_Rolls";
    this->Albedo_HPPercent_Rolls->ReadOnly = true;
    this->Albedo_HPPercent_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_HPPercent_Rolls->TabIndex = 57;
    // 
    // Albedo_FLATATK_Rolls
    // 
    this->Albedo_FLATATK_Rolls->Enabled = false;
    this->Albedo_FLATATK_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_FLATATK_Rolls->InterceptArrowKeys = false;
    this->Albedo_FLATATK_Rolls->Location = System::Drawing::Point(158, 195);
    this->Albedo_FLATATK_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_FLATATK_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_FLATATK_Rolls->Name = L"Albedo_FLATATK_Rolls";
    this->Albedo_FLATATK_Rolls->ReadOnly = true;
    this->Albedo_FLATATK_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_FLATATK_Rolls->TabIndex = 64;
    // 
    // Albedo_FLATDEF_Rolls
    // 
    this->Albedo_FLATDEF_Rolls->Enabled = false;
    this->Albedo_FLATDEF_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_FLATDEF_Rolls->InterceptArrowKeys = false;
    this->Albedo_FLATDEF_Rolls->Location = System::Drawing::Point(158, 245);
    this->Albedo_FLATDEF_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_FLATDEF_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_FLATDEF_Rolls->Name = L"Albedo_FLATDEF_Rolls";
    this->Albedo_FLATDEF_Rolls->ReadOnly = true;
    this->Albedo_FLATDEF_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_FLATDEF_Rolls->TabIndex = 63;
    // 
    // Albedo_FLATHP_Rolls
    // 
    this->Albedo_FLATHP_Rolls->Enabled = false;
    this->Albedo_FLATHP_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_FLATHP_Rolls->InterceptArrowKeys = false;
    this->Albedo_FLATHP_Rolls->Location = System::Drawing::Point(158, 295);
    this->Albedo_FLATHP_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_FLATHP_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_FLATHP_Rolls->Name = L"Albedo_FLATHP_Rolls";
    this->Albedo_FLATHP_Rolls->ReadOnly = true;
    this->Albedo_FLATHP_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_FLATHP_Rolls->TabIndex = 62;
    // 
    // Albedo_EM_Rolls
    // 
    this->Albedo_EM_Rolls->Enabled = false;
    this->Albedo_EM_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_EM_Rolls->InterceptArrowKeys = false;
    this->Albedo_EM_Rolls->Location = System::Drawing::Point(158, 345);
    this->Albedo_EM_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_EM_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_EM_Rolls->Name = L"Albedo_EM_Rolls";
    this->Albedo_EM_Rolls->ReadOnly = true;
    this->Albedo_EM_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_EM_Rolls->TabIndex = 58;
    // 
    // Albedo_ERPercent_Rolls
    // 
    this->Albedo_ERPercent_Rolls->Enabled = false;
    this->Albedo_ERPercent_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_ERPercent_Rolls->InterceptArrowKeys = false;
    this->Albedo_ERPercent_Rolls->Location = System::Drawing::Point(158, 395);
    this->Albedo_ERPercent_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_ERPercent_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_ERPercent_Rolls->Name = L"Albedo_ERPercent_Rolls";
    this->Albedo_ERPercent_Rolls->ReadOnly = true;
    this->Albedo_ERPercent_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_ERPercent_Rolls->TabIndex = 61;
    // 
    // label7
    // 
    this->label7->AutoSize = true;
    this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label7->Location = System::Drawing::Point(158, 445);
    this->label7->Margin = System::Windows::Forms::Padding(0);
    this->label7->Name = L"label7";
    this->label7->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label7->Size = System::Drawing::Size(146, 59);
    this->label7->TabIndex = 65;
    this->label7->Text = L"              ";
    this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // Albedo_RatePercent_Rolls
    // 
    this->Albedo_RatePercent_Rolls->Enabled = false;
    this->Albedo_RatePercent_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_RatePercent_Rolls->InterceptArrowKeys = false;
    this->Albedo_RatePercent_Rolls->Location = System::Drawing::Point(158, 504);
    this->Albedo_RatePercent_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_RatePercent_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_RatePercent_Rolls->Name = L"Albedo_RatePercent_Rolls";
    this->Albedo_RatePercent_Rolls->ReadOnly = true;
    this->Albedo_RatePercent_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_RatePercent_Rolls->TabIndex = 59;
    // 
    // Albedo_CRITDMG_Rolls
    // 
    this->Albedo_CRITDMG_Rolls->Enabled = false;
    this->flowLayoutPanel6->SetFlowBreak(this->Albedo_CRITDMG_Rolls, true);
    this->Albedo_CRITDMG_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_CRITDMG_Rolls->InterceptArrowKeys = false;
    this->Albedo_CRITDMG_Rolls->Location = System::Drawing::Point(158, 554);
    this->Albedo_CRITDMG_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_CRITDMG_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_CRITDMG_Rolls->Name = L"Albedo_CRITDMG_Rolls";
    this->Albedo_CRITDMG_Rolls->ReadOnly = true;
    this->Albedo_CRITDMG_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_CRITDMG_Rolls->TabIndex = 60;
    // 
    // label28
    // 
    this->label28->AutoSize = true;
    this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label28->Location = System::Drawing::Point(326, 0);
    this->label28->Margin = System::Windows::Forms::Padding(0);
    this->label28->Name = L"label28";
    this->label28->Size = System::Drawing::Size(154, 45);
    this->label28->TabIndex = 55;
    this->label28->Text = L"Main Stat";
    this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // Albedo_ATKPercent_MS_Rolls
    // 
    this->Albedo_ATKPercent_MS_Rolls->Enabled = false;
    this->Albedo_ATKPercent_MS_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_ATKPercent_MS_Rolls->InterceptArrowKeys = false;
    this->Albedo_ATKPercent_MS_Rolls->Location = System::Drawing::Point(326, 45);
    this->Albedo_ATKPercent_MS_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_ATKPercent_MS_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_ATKPercent_MS_Rolls->Name = L"Albedo_ATKPercent_MS_Rolls";
    this->Albedo_ATKPercent_MS_Rolls->ReadOnly = true;
    this->Albedo_ATKPercent_MS_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_ATKPercent_MS_Rolls->TabIndex = 44;
    // 
    // Albedo_HPPercent_MS_Rolls
    // 
    this->Albedo_HPPercent_MS_Rolls->Enabled = false;
    this->Albedo_HPPercent_MS_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_HPPercent_MS_Rolls->InterceptArrowKeys = false;
    this->Albedo_HPPercent_MS_Rolls->Location = System::Drawing::Point(326, 95);
    this->Albedo_HPPercent_MS_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_HPPercent_MS_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_HPPercent_MS_Rolls->Name = L"Albedo_HPPercent_MS_Rolls";
    this->Albedo_HPPercent_MS_Rolls->ReadOnly = true;
    this->Albedo_HPPercent_MS_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_HPPercent_MS_Rolls->TabIndex = 42;
    // 
    // Albedo_DEFPercent_MS_Rolls
    // 
    this->Albedo_DEFPercent_MS_Rolls->Enabled = false;
    this->Albedo_DEFPercent_MS_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_DEFPercent_MS_Rolls->InterceptArrowKeys = false;
    this->Albedo_DEFPercent_MS_Rolls->Location = System::Drawing::Point(326, 145);
    this->Albedo_DEFPercent_MS_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_DEFPercent_MS_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_DEFPercent_MS_Rolls->Name = L"Albedo_DEFPercent_MS_Rolls";
    this->Albedo_DEFPercent_MS_Rolls->ReadOnly = true;
    this->Albedo_DEFPercent_MS_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_DEFPercent_MS_Rolls->TabIndex = 43;
    // 
    // label30
    // 
    this->label30->AutoSize = true;
    this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label30->Location = System::Drawing::Point(326, 195);
    this->label30->Margin = System::Windows::Forms::Padding(0);
    this->label30->Name = L"label30";
    this->label30->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label30->Size = System::Drawing::Size(119, 59);
    this->label30->TabIndex = 66;
    this->label30->Text = L"           ";
    this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // label31
    // 
    this->label31->AutoSize = true;
    this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label31->Location = System::Drawing::Point(326, 254);
    this->label31->Margin = System::Windows::Forms::Padding(0);
    this->label31->Name = L"label31";
    this->label31->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label31->Size = System::Drawing::Size(128, 59);
    this->label31->TabIndex = 67;
    this->label31->Text = L"            ";
    this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // label32
    // 
    this->label32->AutoSize = true;
    this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label32->Location = System::Drawing::Point(326, 313);
    this->label32->Margin = System::Windows::Forms::Padding(0);
    this->label32->Name = L"label32";
    this->label32->Padding = System::Windows::Forms::Padding(0, 7, 0, 7);
    this->label32->Size = System::Drawing::Size(110, 59);
    this->label32->TabIndex = 68;
    this->label32->Text = L"          ";
    this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // Albedo_EM_MS_Rolls
    // 
    this->Albedo_EM_MS_Rolls->Enabled = false;
    this->Albedo_EM_MS_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_EM_MS_Rolls->InterceptArrowKeys = false;
    this->Albedo_EM_MS_Rolls->Location = System::Drawing::Point(326, 372);
    this->Albedo_EM_MS_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_EM_MS_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_EM_MS_Rolls->Name = L"Albedo_EM_MS_Rolls";
    this->Albedo_EM_MS_Rolls->ReadOnly = true;
    this->Albedo_EM_MS_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_EM_MS_Rolls->TabIndex = 45;
    // 
    // Albedo_CRITDMG_MS_Rolls
    // 
    this->Albedo_CRITDMG_MS_Rolls->Enabled = false;
    this->Albedo_CRITDMG_MS_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_CRITDMG_MS_Rolls->InterceptArrowKeys = false;
    this->Albedo_CRITDMG_MS_Rolls->Location = System::Drawing::Point(326, 422);
    this->Albedo_CRITDMG_MS_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_CRITDMG_MS_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_CRITDMG_MS_Rolls->Name = L"Albedo_CRITDMG_MS_Rolls";
    this->Albedo_CRITDMG_MS_Rolls->ReadOnly = true;
    this->Albedo_CRITDMG_MS_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_CRITDMG_MS_Rolls->TabIndex = 28;
    // 
    // Albedo_RatePercent_MS_Rolls
    // 
    this->Albedo_RatePercent_MS_Rolls->Enabled = false;
    this->Albedo_RatePercent_MS_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_RatePercent_MS_Rolls->InterceptArrowKeys = false;
    this->Albedo_RatePercent_MS_Rolls->Location = System::Drawing::Point(326, 472);
    this->Albedo_RatePercent_MS_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_RatePercent_MS_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_RatePercent_MS_Rolls->Name = L"Albedo_RatePercent_MS_Rolls";
    this->Albedo_RatePercent_MS_Rolls->ReadOnly = true;
    this->Albedo_RatePercent_MS_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_RatePercent_MS_Rolls->TabIndex = 39;
    // 
    // Albedo_DMGPercent_Rolls
    // 
    this->Albedo_DMGPercent_Rolls->Enabled = false;
    this->Albedo_DMGPercent_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_DMGPercent_Rolls->InterceptArrowKeys = false;
    this->Albedo_DMGPercent_Rolls->Location = System::Drawing::Point(326, 522);
    this->Albedo_DMGPercent_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_DMGPercent_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_DMGPercent_Rolls->Name = L"Albedo_DMGPercent_Rolls";
    this->Albedo_DMGPercent_Rolls->ReadOnly = true;
    this->Albedo_DMGPercent_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_DMGPercent_Rolls->TabIndex = 46;
    // 
    // Albedo_ERPercent_MS_Rolls
    // 
    this->Albedo_ERPercent_MS_Rolls->Enabled = false;
    this->flowLayoutPanel6->SetFlowBreak(this->Albedo_ERPercent_MS_Rolls, true);
    this->Albedo_ERPercent_MS_Rolls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_ERPercent_MS_Rolls->InterceptArrowKeys = false;
    this->Albedo_ERPercent_MS_Rolls->Location = System::Drawing::Point(326, 572);
    this->Albedo_ERPercent_MS_Rolls->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_ERPercent_MS_Rolls->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_ERPercent_MS_Rolls->Name = L"Albedo_ERPercent_MS_Rolls";
    this->Albedo_ERPercent_MS_Rolls->ReadOnly = true;
    this->Albedo_ERPercent_MS_Rolls->Size = System::Drawing::Size(168, 50);
    this->Albedo_ERPercent_MS_Rolls->TabIndex = 41;
    // 
    // label29
    // 
    this->label29->AutoSize = true;
    this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label29->Location = System::Drawing::Point(494, 0);
    this->label29->Margin = System::Windows::Forms::Padding(0);
    this->label29->Name = L"label29";
    this->label29->Size = System::Drawing::Size(173, 45);
    this->label29->TabIndex = 56;
    this->label29->Text = L"Roll Values";
    this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // Albedo_ATKPercent_Value
    // 
    this->Albedo_ATKPercent_Value->Enabled = false;
    this->Albedo_ATKPercent_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_ATKPercent_Value->InterceptArrowKeys = false;
    this->Albedo_ATKPercent_Value->Location = System::Drawing::Point(494, 45);
    this->Albedo_ATKPercent_Value->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_ATKPercent_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_ATKPercent_Value->Name = L"Albedo_ATKPercent_Value";
    this->Albedo_ATKPercent_Value->ReadOnly = true;
    this->Albedo_ATKPercent_Value->Size = System::Drawing::Size(168, 50);
    this->Albedo_ATKPercent_Value->TabIndex = 28;
    // 
    // Albedo_CRITDMG_Value
    // 
    this->Albedo_CRITDMG_Value->Enabled = false;
    this->Albedo_CRITDMG_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_CRITDMG_Value->InterceptArrowKeys = false;
    this->Albedo_CRITDMG_Value->Location = System::Drawing::Point(494, 95);
    this->Albedo_CRITDMG_Value->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_CRITDMG_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_CRITDMG_Value->Name = L"Albedo_CRITDMG_Value";
    this->Albedo_CRITDMG_Value->ReadOnly = true;
    this->Albedo_CRITDMG_Value->Size = System::Drawing::Size(168, 50);
    this->Albedo_CRITDMG_Value->TabIndex = 44;
    // 
    // Albedo_RatePercent_Value
    // 
    this->Albedo_RatePercent_Value->Enabled = false;
    this->Albedo_RatePercent_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_RatePercent_Value->InterceptArrowKeys = false;
    this->Albedo_RatePercent_Value->Location = System::Drawing::Point(494, 145);
    this->Albedo_RatePercent_Value->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_RatePercent_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_RatePercent_Value->Name = L"Albedo_RatePercent_Value";
    this->Albedo_RatePercent_Value->ReadOnly = true;
    this->Albedo_RatePercent_Value->Size = System::Drawing::Size(168, 50);
    this->Albedo_RatePercent_Value->TabIndex = 43;
    // 
    // Albedo_DMG_Percent_Value
    // 
    this->Albedo_DMG_Percent_Value->Enabled = false;
    this->Albedo_DMG_Percent_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_DMG_Percent_Value->InterceptArrowKeys = false;
    this->Albedo_DMG_Percent_Value->Location = System::Drawing::Point(494, 195);
    this->Albedo_DMG_Percent_Value->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_DMG_Percent_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_DMG_Percent_Value->Name = L"Albedo_DMG_Percent_Value";
    this->Albedo_DMG_Percent_Value->ReadOnly = true;
    this->Albedo_DMG_Percent_Value->Size = System::Drawing::Size(168, 50);
    this->Albedo_DMG_Percent_Value->TabIndex = 50;
    // 
    // Albedo_ER_Value
    // 
    this->Albedo_ER_Value->Enabled = false;
    this->Albedo_ER_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_ER_Value->InterceptArrowKeys = false;
    this->Albedo_ER_Value->Location = System::Drawing::Point(494, 245);
    this->Albedo_ER_Value->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_ER_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_ER_Value->Name = L"Albedo_ER_Value";
    this->Albedo_ER_Value->ReadOnly = true;
    this->Albedo_ER_Value->Size = System::Drawing::Size(168, 50);
    this->Albedo_ER_Value->TabIndex = 45;
    // 
    // Albedo_EM_Value
    // 
    this->Albedo_EM_Value->Enabled = false;
    this->Albedo_EM_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_EM_Value->InterceptArrowKeys = false;
    this->Albedo_EM_Value->Location = System::Drawing::Point(494, 295);
    this->Albedo_EM_Value->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_EM_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_EM_Value->Name = L"Albedo_EM_Value";
    this->Albedo_EM_Value->ReadOnly = true;
    this->Albedo_EM_Value->Size = System::Drawing::Size(168, 50);
    this->Albedo_EM_Value->TabIndex = 41;
    // 
    // Albedo_FLATHP_Value
    // 
    this->Albedo_FLATHP_Value->Enabled = false;
    this->Albedo_FLATHP_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_FLATHP_Value->InterceptArrowKeys = false;
    this->Albedo_FLATHP_Value->Location = System::Drawing::Point(494, 345);
    this->Albedo_FLATHP_Value->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_FLATHP_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_FLATHP_Value->Name = L"Albedo_FLATHP_Value";
    this->Albedo_FLATHP_Value->ReadOnly = true;
    this->Albedo_FLATHP_Value->Size = System::Drawing::Size(168, 50);
    this->Albedo_FLATHP_Value->TabIndex = 47;
    // 
    // Albedo_FLATDEF_Value
    // 
    this->Albedo_FLATDEF_Value->Enabled = false;
    this->Albedo_FLATDEF_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_FLATDEF_Value->InterceptArrowKeys = false;
    this->Albedo_FLATDEF_Value->Location = System::Drawing::Point(494, 395);
    this->Albedo_FLATDEF_Value->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_FLATDEF_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_FLATDEF_Value->Name = L"Albedo_FLATDEF_Value";
    this->Albedo_FLATDEF_Value->ReadOnly = true;
    this->Albedo_FLATDEF_Value->Size = System::Drawing::Size(168, 50);
    this->Albedo_FLATDEF_Value->TabIndex = 48;
    // 
    // Albedo_FLATATK_Value
    // 
    this->Albedo_FLATATK_Value->Enabled = false;
    this->Albedo_FLATATK_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_FLATATK_Value->InterceptArrowKeys = false;
    this->Albedo_FLATATK_Value->Location = System::Drawing::Point(494, 445);
    this->Albedo_FLATATK_Value->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_FLATATK_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_FLATATK_Value->Name = L"Albedo_FLATATK_Value";
    this->Albedo_FLATATK_Value->ReadOnly = true;
    this->Albedo_FLATATK_Value->Size = System::Drawing::Size(168, 50);
    this->Albedo_FLATATK_Value->TabIndex = 49;
    // 
    // Albedo_HPPercent_Value
    // 
    this->Albedo_HPPercent_Value->Enabled = false;
    this->Albedo_HPPercent_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_HPPercent_Value->InterceptArrowKeys = false;
    this->Albedo_HPPercent_Value->Location = System::Drawing::Point(494, 495);
    this->Albedo_HPPercent_Value->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_HPPercent_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_HPPercent_Value->Name = L"Albedo_HPPercent_Value";
    this->Albedo_HPPercent_Value->ReadOnly = true;
    this->Albedo_HPPercent_Value->Size = System::Drawing::Size(168, 50);
    this->Albedo_HPPercent_Value->TabIndex = 40;
    // 
    // Albedo_DEFPercent_Value
    // 
    this->Albedo_DEFPercent_Value->Enabled = false;
    this->Albedo_DEFPercent_Value->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo_DEFPercent_Value->InterceptArrowKeys = false;
    this->Albedo_DEFPercent_Value->Location = System::Drawing::Point(494, 545);
    this->Albedo_DEFPercent_Value->Margin = System::Windows::Forms::Padding(0);
    this->Albedo_DEFPercent_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
    this->Albedo_DEFPercent_Value->Name = L"Albedo_DEFPercent_Value";
    this->Albedo_DEFPercent_Value->ReadOnly = true;
    this->Albedo_DEFPercent_Value->Size = System::Drawing::Size(168, 50);
    this->Albedo_DEFPercent_Value->TabIndex = 39;
    // 
    // Characters_Page
    // 
    this->Characters_Page->BackColor = System::Drawing::Color::Transparent;
    this->Characters_Page->Controls->Add(this->FlowLayout_Characters);
    this->Characters_Page->Location = System::Drawing::Point(8, 160);
    this->Characters_Page->Margin = System::Windows::Forms::Padding(4);
    this->Characters_Page->Name = L"Characters_Page";
    this->Characters_Page->Padding = System::Windows::Forms::Padding(4);
    this->Characters_Page->Size = System::Drawing::Size(2518, 1321);
    this->Characters_Page->TabIndex = 0;
    this->Characters_Page->Text = L"Characters";
    // 
    // FlowLayout_Characters
    // 
    this->FlowLayout_Characters->AutoScroll = true;
    this->FlowLayout_Characters->AutoSize = true;
    this->FlowLayout_Characters->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->FlowLayout_Characters->Controls->Add(this->Albedo);
    this->FlowLayout_Characters->Controls->Add(this->Alhaitham);
    this->FlowLayout_Characters->Controls->Add(this->Aloy);
    this->FlowLayout_Characters->Controls->Add(this->Amber);
    this->FlowLayout_Characters->Controls->Add(this->Arataki_Itto);
    this->FlowLayout_Characters->Controls->Add(this->Arlecchino);
    this->FlowLayout_Characters->Controls->Add(this->Baizhu);
    this->FlowLayout_Characters->Controls->Add(this->Barbara);
    this->FlowLayout_Characters->Controls->Add(this->Beidou);
    this->FlowLayout_Characters->Controls->Add(this->Bennett);
    this->FlowLayout_Characters->Controls->Add(this->Candance);
    this->FlowLayout_Characters->Controls->Add(this->Charlotte);
    this->FlowLayout_Characters->Controls->Add(this->Chevreuse);
    this->FlowLayout_Characters->Controls->Add(this->Childe);
    this->FlowLayout_Characters->Controls->Add(this->Chiori);
    this->FlowLayout_Characters->Controls->Add(this->Chongyun);
    this->FlowLayout_Characters->Controls->Add(this->Clorinde);
    this->FlowLayout_Characters->Controls->Add(this->Collei);
    this->FlowLayout_Characters->Controls->Add(this->Cyno);
    this->FlowLayout_Characters->Controls->Add(this->Dehya);
    this->FlowLayout_Characters->Controls->Add(this->Diluc);
    this->FlowLayout_Characters->Controls->Add(this->Diona);
    this->FlowLayout_Characters->Controls->Add(this->Dori);
    this->FlowLayout_Characters->Controls->Add(this->Eula);
    this->FlowLayout_Characters->Controls->Add(this->Faruzan);
    this->FlowLayout_Characters->Controls->Add(this->Fischl);
    this->FlowLayout_Characters->Controls->Add(this->Freminet);
    this->FlowLayout_Characters->Controls->Add(this->Furina);
    this->FlowLayout_Characters->Controls->Add(this->Gaming);
    this->FlowLayout_Characters->Controls->Add(this->Ganyu);
    this->FlowLayout_Characters->Controls->Add(this->Gorou);
    this->FlowLayout_Characters->Controls->Add(this->Heizou);
    this->FlowLayout_Characters->Controls->Add(this->Hu_Tao);
    this->FlowLayout_Characters->Controls->Add(this->Jean);
    this->FlowLayout_Characters->Controls->Add(this->Kaeya);
    this->FlowLayout_Characters->Controls->Add(this->Kamisato_Ayaka);
    this->FlowLayout_Characters->Controls->Add(this->Kamisato_Ayato);
    this->FlowLayout_Characters->Controls->Add(this->Kaveh);
    this->FlowLayout_Characters->Controls->Add(this->Kazuha);
    this->FlowLayout_Characters->Controls->Add(this->Keqing);
    this->FlowLayout_Characters->Controls->Add(this->Kirara);
    this->FlowLayout_Characters->Controls->Add(this->Klee);
    this->FlowLayout_Characters->Controls->Add(this->Kujou_Sara);
    this->FlowLayout_Characters->Controls->Add(this->Kuki_Shinobu);
    this->FlowLayout_Characters->Controls->Add(this->Layla);
    this->FlowLayout_Characters->Controls->Add(this->Lisa);
    this->FlowLayout_Characters->Controls->Add(this->Lynette);
    this->FlowLayout_Characters->Controls->Add(this->Lynney);
    this->FlowLayout_Characters->Controls->Add(this->Mika);
    this->FlowLayout_Characters->Controls->Add(this->Mona);
    this->FlowLayout_Characters->Controls->Add(this->Nahida);
    this->FlowLayout_Characters->Controls->Add(this->Navia);
    this->FlowLayout_Characters->Controls->Add(this->Neuvillette);
    this->FlowLayout_Characters->Controls->Add(this->Nilou);
    this->FlowLayout_Characters->Controls->Add(this->Ningguang);
    this->FlowLayout_Characters->Controls->Add(this->Noelle);
    this->FlowLayout_Characters->Controls->Add(this->Qiqi);
    this->FlowLayout_Characters->Controls->Add(this->Raiden_Shogun);
    this->FlowLayout_Characters->Controls->Add(this->Razor);
    this->FlowLayout_Characters->Controls->Add(this->Rosaria);
    this->FlowLayout_Characters->Controls->Add(this->Sangonomiya_Kokomi);
    this->FlowLayout_Characters->Controls->Add(this->Sayu);
    this->FlowLayout_Characters->Controls->Add(this->Sethos);
    this->FlowLayout_Characters->Controls->Add(this->Shenhe);
    this->FlowLayout_Characters->Controls->Add(this->Sucrose);
    this->FlowLayout_Characters->Controls->Add(this->Thoma);
    this->FlowLayout_Characters->Controls->Add(this->Tighnari);
    this->FlowLayout_Characters->Controls->Add(this->Traveler);
    this->FlowLayout_Characters->Controls->Add(this->Venti);
    this->FlowLayout_Characters->Controls->Add(this->Wanderer);
    this->FlowLayout_Characters->Controls->Add(this->Wriothesley);
    this->FlowLayout_Characters->Controls->Add(this->Xiangling);
    this->FlowLayout_Characters->Controls->Add(this->Xianyun);
    this->FlowLayout_Characters->Controls->Add(this->Xiao);
    this->FlowLayout_Characters->Controls->Add(this->Xingqiu);
    this->FlowLayout_Characters->Controls->Add(this->Xinyan);
    this->FlowLayout_Characters->Controls->Add(this->Yae_Miko);
    this->FlowLayout_Characters->Controls->Add(this->Yanfei);
    this->FlowLayout_Characters->Controls->Add(this->Yaoyao);
    this->FlowLayout_Characters->Controls->Add(this->Yelan);
    this->FlowLayout_Characters->Controls->Add(this->Yoimiya);
    this->FlowLayout_Characters->Controls->Add(this->Yunjin);
    this->FlowLayout_Characters->Controls->Add(this->Zhongli);
    this->FlowLayout_Characters->Dock = System::Windows::Forms::DockStyle::Fill;
    this->FlowLayout_Characters->Location = System::Drawing::Point(4, 4);
    this->FlowLayout_Characters->Margin = System::Windows::Forms::Padding(4);
    this->FlowLayout_Characters->Name = L"FlowLayout_Characters";
    this->FlowLayout_Characters->Size = System::Drawing::Size(2510, 1313);
    this->FlowLayout_Characters->TabIndex = 3;
    // 
    // Albedo
    // 
    this->Albedo->AutoSize = true;
    this->Albedo->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Albedo->BackColor = System::Drawing::SystemColors::Control;
    this->Albedo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Albedo->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Albedo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Albedo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Albedo.Image")));
    this->Albedo->Location = System::Drawing::Point(4, 4);
    this->Albedo->Margin = System::Windows::Forms::Padding(4);
    this->Albedo->Name = L"Albedo";
    this->Albedo->Size = System::Drawing::Size(262, 318);
    this->Albedo->TabIndex = 2;
    this->Albedo->Text = L"Albedo";
    this->Albedo->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Albedo->UseVisualStyleBackColor = false;
    this->Albedo->Click += gcnew System::EventHandler(this, &MyForm::Albedo_Click);
    // 
    // Alhaitham
    // 
    this->Alhaitham->AutoSize = true;
    this->Alhaitham->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Alhaitham->BackColor = System::Drawing::SystemColors::Control;
    this->Alhaitham->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Alhaitham->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Alhaitham->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Alhaitham->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Alhaitham.Image")));
    this->Alhaitham->Location = System::Drawing::Point(274, 4);
    this->Alhaitham->Margin = System::Windows::Forms::Padding(4);
    this->Alhaitham->Name = L"Alhaitham";
    this->Alhaitham->Size = System::Drawing::Size(262, 318);
    this->Alhaitham->TabIndex = 3;
    this->Alhaitham->Text = L"Alhaitham";
    this->Alhaitham->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Alhaitham->UseVisualStyleBackColor = false;
    this->Alhaitham->Click += gcnew System::EventHandler(this, &MyForm::Alhaitham_Click);
    // 
    // Aloy
    // 
    this->Aloy->AutoSize = true;
    this->Aloy->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Aloy->BackColor = System::Drawing::SystemColors::Control;
    this->Aloy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Aloy->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Aloy->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Aloy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Aloy.Image")));
    this->Aloy->Location = System::Drawing::Point(544, 4);
    this->Aloy->Margin = System::Windows::Forms::Padding(4);
    this->Aloy->Name = L"Aloy";
    this->Aloy->Size = System::Drawing::Size(262, 318);
    this->Aloy->TabIndex = 4;
    this->Aloy->Text = L"Aloy";
    this->Aloy->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Aloy->UseVisualStyleBackColor = false;
    this->Aloy->Click += gcnew System::EventHandler(this, &MyForm::Aloy_Click);
    // 
    // Amber
    // 
    this->Amber->AutoSize = true;
    this->Amber->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Amber->BackColor = System::Drawing::SystemColors::Control;
    this->Amber->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Amber->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Amber->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Amber->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Amber.Image")));
    this->Amber->Location = System::Drawing::Point(814, 4);
    this->Amber->Margin = System::Windows::Forms::Padding(4);
    this->Amber->Name = L"Amber";
    this->Amber->Size = System::Drawing::Size(262, 318);
    this->Amber->TabIndex = 5;
    this->Amber->Text = L"Amber";
    this->Amber->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Amber->UseVisualStyleBackColor = false;
    this->Amber->Click += gcnew System::EventHandler(this, &MyForm::Amber_Click);
    // 
    // Arataki_Itto
    // 
    this->Arataki_Itto->AutoSize = true;
    this->Arataki_Itto->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Arataki_Itto->BackColor = System::Drawing::SystemColors::Control;
    this->Arataki_Itto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Arataki_Itto->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Arataki_Itto->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Arataki_Itto->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Arataki_Itto.Image")));
    this->Arataki_Itto->Location = System::Drawing::Point(1084, 4);
    this->Arataki_Itto->Margin = System::Windows::Forms::Padding(4);
    this->Arataki_Itto->Name = L"Arataki_Itto";
    this->Arataki_Itto->Size = System::Drawing::Size(262, 318);
    this->Arataki_Itto->TabIndex = 37;
    this->Arataki_Itto->Text = L"Arataki Itto";
    this->Arataki_Itto->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Arataki_Itto->UseVisualStyleBackColor = false;
    this->Arataki_Itto->Click += gcnew System::EventHandler(this, &MyForm::Arataki_Itto_Click);
    // 
    // Arlecchino
    // 
    this->Arlecchino->AutoSize = true;
    this->Arlecchino->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Arlecchino->BackColor = System::Drawing::SystemColors::Control;
    this->Arlecchino->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Arlecchino->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Arlecchino->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Arlecchino->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Arlecchino.Image")));
    this->Arlecchino->Location = System::Drawing::Point(1354, 4);
    this->Arlecchino->Margin = System::Windows::Forms::Padding(4);
    this->Arlecchino->Name = L"Arlecchino";
    this->Arlecchino->Size = System::Drawing::Size(262, 318);
    this->Arlecchino->TabIndex = 6;
    this->Arlecchino->Text = L"Arlecchino";
    this->Arlecchino->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Arlecchino->UseVisualStyleBackColor = false;
    this->Arlecchino->Click += gcnew System::EventHandler(this, &MyForm::Arlecchino_Click);
    // 
    // Baizhu
    // 
    this->Baizhu->AutoSize = true;
    this->Baizhu->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Baizhu->BackColor = System::Drawing::SystemColors::Control;
    this->Baizhu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Baizhu->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Baizhu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Baizhu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Baizhu.Image")));
    this->Baizhu->Location = System::Drawing::Point(1624, 4);
    this->Baizhu->Margin = System::Windows::Forms::Padding(4);
    this->Baizhu->Name = L"Baizhu";
    this->Baizhu->Size = System::Drawing::Size(262, 318);
    this->Baizhu->TabIndex = 9;
    this->Baizhu->Text = L"Baizhu";
    this->Baizhu->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Baizhu->UseVisualStyleBackColor = false;
    this->Baizhu->Click += gcnew System::EventHandler(this, &MyForm::Baizhu_Click);
    // 
    // Barbara
    // 
    this->Barbara->AutoSize = true;
    this->Barbara->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Barbara->BackColor = System::Drawing::SystemColors::Control;
    this->Barbara->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Barbara->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Barbara->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Barbara->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Barbara.Image")));
    this->Barbara->Location = System::Drawing::Point(1894, 4);
    this->Barbara->Margin = System::Windows::Forms::Padding(4);
    this->Barbara->Name = L"Barbara";
    this->Barbara->Size = System::Drawing::Size(262, 318);
    this->Barbara->TabIndex = 11;
    this->Barbara->Text = L"Barbara";
    this->Barbara->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Barbara->UseVisualStyleBackColor = false;
    this->Barbara->Click += gcnew System::EventHandler(this, &MyForm::Barbara_Click);
    // 
    // Beidou
    // 
    this->Beidou->AutoSize = true;
    this->Beidou->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Beidou->BackColor = System::Drawing::SystemColors::Control;
    this->Beidou->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Beidou->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Beidou->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Beidou->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Beidou.Image")));
    this->Beidou->Location = System::Drawing::Point(2164, 4);
    this->Beidou->Margin = System::Windows::Forms::Padding(4);
    this->Beidou->Name = L"Beidou";
    this->Beidou->Size = System::Drawing::Size(262, 318);
    this->Beidou->TabIndex = 12;
    this->Beidou->Text = L"Beidou";
    this->Beidou->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Beidou->UseVisualStyleBackColor = false;
    this->Beidou->Click += gcnew System::EventHandler(this, &MyForm::Beidou_Click);
    // 
    // Bennett
    // 
    this->Bennett->AutoSize = true;
    this->Bennett->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Bennett->BackColor = System::Drawing::SystemColors::Control;
    this->Bennett->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Bennett->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Bennett->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Bennett->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bennett.Image")));
    this->Bennett->Location = System::Drawing::Point(4, 330);
    this->Bennett->Margin = System::Windows::Forms::Padding(4);
    this->Bennett->Name = L"Bennett";
    this->Bennett->Size = System::Drawing::Size(262, 318);
    this->Bennett->TabIndex = 13;
    this->Bennett->Text = L"Bennett";
    this->Bennett->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Bennett->UseVisualStyleBackColor = false;
    this->Bennett->Click += gcnew System::EventHandler(this, &MyForm::Bennett_Click);
    // 
    // Candance
    // 
    this->Candance->AutoSize = true;
    this->Candance->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Candance->BackColor = System::Drawing::SystemColors::Control;
    this->Candance->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Candance->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Candance->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Candance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Candance.Image")));
    this->Candance->Location = System::Drawing::Point(274, 330);
    this->Candance->Margin = System::Windows::Forms::Padding(4);
    this->Candance->Name = L"Candance";
    this->Candance->Size = System::Drawing::Size(262, 318);
    this->Candance->TabIndex = 14;
    this->Candance->Text = L"Candace";
    this->Candance->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Candance->UseVisualStyleBackColor = false;
    this->Candance->Click += gcnew System::EventHandler(this, &MyForm::Candance_Click);
    // 
    // Charlotte
    // 
    this->Charlotte->AutoSize = true;
    this->Charlotte->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Charlotte->BackColor = System::Drawing::SystemColors::Control;
    this->Charlotte->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Charlotte->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Charlotte->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Charlotte->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Charlotte.Image")));
    this->Charlotte->Location = System::Drawing::Point(544, 330);
    this->Charlotte->Margin = System::Windows::Forms::Padding(4);
    this->Charlotte->Name = L"Charlotte";
    this->Charlotte->Size = System::Drawing::Size(262, 318);
    this->Charlotte->TabIndex = 15;
    this->Charlotte->Text = L"Charlotte";
    this->Charlotte->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Charlotte->UseVisualStyleBackColor = false;
    this->Charlotte->Click += gcnew System::EventHandler(this, &MyForm::Charlotte_Click);
    // 
    // Chevreuse
    // 
    this->Chevreuse->AutoSize = true;
    this->Chevreuse->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Chevreuse->BackColor = System::Drawing::SystemColors::Control;
    this->Chevreuse->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Chevreuse->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Chevreuse->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Chevreuse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Chevreuse.Image")));
    this->Chevreuse->Location = System::Drawing::Point(814, 330);
    this->Chevreuse->Margin = System::Windows::Forms::Padding(4);
    this->Chevreuse->Name = L"Chevreuse";
    this->Chevreuse->Size = System::Drawing::Size(262, 318);
    this->Chevreuse->TabIndex = 16;
    this->Chevreuse->Text = L"Chevreuse";
    this->Chevreuse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Chevreuse->UseVisualStyleBackColor = false;
    this->Chevreuse->Click += gcnew System::EventHandler(this, &MyForm::Chevreuse_Click);
    // 
    // Childe
    // 
    this->Childe->AutoSize = true;
    this->Childe->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Childe->BackColor = System::Drawing::SystemColors::Control;
    this->Childe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Childe->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Childe->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Childe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Childe.Image")));
    this->Childe->Location = System::Drawing::Point(1084, 330);
    this->Childe->Margin = System::Windows::Forms::Padding(4);
    this->Childe->Name = L"Childe";
    this->Childe->Size = System::Drawing::Size(262, 318);
    this->Childe->TabIndex = 138;
    this->Childe->Text = L"Childe";
    this->Childe->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Childe->UseVisualStyleBackColor = false;
    this->Childe->Click += gcnew System::EventHandler(this, &MyForm::Childe_Click);
    // 
    // Chiori
    // 
    this->Chiori->AutoSize = true;
    this->Chiori->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Chiori->BackColor = System::Drawing::SystemColors::Control;
    this->Chiori->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Chiori->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Chiori->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Chiori->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Chiori.Image")));
    this->Chiori->Location = System::Drawing::Point(1354, 330);
    this->Chiori->Margin = System::Windows::Forms::Padding(4);
    this->Chiori->Name = L"Chiori";
    this->Chiori->Size = System::Drawing::Size(262, 318);
    this->Chiori->TabIndex = 139;
    this->Chiori->Text = L"Chiori";
    this->Chiori->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Chiori->UseVisualStyleBackColor = false;
    this->Chiori->Click += gcnew System::EventHandler(this, &MyForm::Chiori_Click);
    // 
    // Chongyun
    // 
    this->Chongyun->AutoSize = true;
    this->Chongyun->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Chongyun->BackColor = System::Drawing::SystemColors::Control;
    this->Chongyun->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Chongyun->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Chongyun->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Chongyun->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Chongyun.Image")));
    this->Chongyun->Location = System::Drawing::Point(1624, 330);
    this->Chongyun->Margin = System::Windows::Forms::Padding(4);
    this->Chongyun->Name = L"Chongyun";
    this->Chongyun->Size = System::Drawing::Size(262, 318);
    this->Chongyun->TabIndex = 140;
    this->Chongyun->Text = L"Chongyun";
    this->Chongyun->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Chongyun->UseVisualStyleBackColor = false;
    this->Chongyun->Click += gcnew System::EventHandler(this, &MyForm::Chongyun_Click);
    // 
    // Clorinde
    // 
    this->Clorinde->AutoSize = true;
    this->Clorinde->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Clorinde->BackColor = System::Drawing::SystemColors::Control;
    this->Clorinde->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Clorinde->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Clorinde->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Clorinde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Clorinde.Image")));
    this->Clorinde->Location = System::Drawing::Point(1894, 330);
    this->Clorinde->Margin = System::Windows::Forms::Padding(4);
    this->Clorinde->Name = L"Clorinde";
    this->Clorinde->Size = System::Drawing::Size(262, 318);
    this->Clorinde->TabIndex = 141;
    this->Clorinde->Text = L"Clorinde";
    this->Clorinde->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Clorinde->UseVisualStyleBackColor = false;
    this->Clorinde->Click += gcnew System::EventHandler(this, &MyForm::Clorinde_Click);
    // 
    // Collei
    // 
    this->Collei->AutoSize = true;
    this->Collei->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Collei->BackColor = System::Drawing::SystemColors::Control;
    this->Collei->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Collei->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Collei->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Collei->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Collei.Image")));
    this->Collei->Location = System::Drawing::Point(2164, 330);
    this->Collei->Margin = System::Windows::Forms::Padding(4);
    this->Collei->Name = L"Collei";
    this->Collei->Size = System::Drawing::Size(262, 318);
    this->Collei->TabIndex = 142;
    this->Collei->Text = L"Collei";
    this->Collei->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Collei->UseVisualStyleBackColor = false;
    this->Collei->Click += gcnew System::EventHandler(this, &MyForm::Collei_Click);
    // 
    // Cyno
    // 
    this->Cyno->AutoSize = true;
    this->Cyno->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Cyno->BackColor = System::Drawing::SystemColors::Control;
    this->Cyno->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Cyno->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Cyno->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Cyno->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cyno.Image")));
    this->Cyno->Location = System::Drawing::Point(4, 656);
    this->Cyno->Margin = System::Windows::Forms::Padding(4);
    this->Cyno->Name = L"Cyno";
    this->Cyno->Size = System::Drawing::Size(262, 318);
    this->Cyno->TabIndex = 143;
    this->Cyno->Text = L"Cyno";
    this->Cyno->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Cyno->UseVisualStyleBackColor = false;
    this->Cyno->Click += gcnew System::EventHandler(this, &MyForm::Cyno_Click);
    // 
    // Dehya
    // 
    this->Dehya->AutoSize = true;
    this->Dehya->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Dehya->BackColor = System::Drawing::SystemColors::Control;
    this->Dehya->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Dehya->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Dehya->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Dehya->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Dehya.Image")));
    this->Dehya->Location = System::Drawing::Point(274, 656);
    this->Dehya->Margin = System::Windows::Forms::Padding(4);
    this->Dehya->Name = L"Dehya";
    this->Dehya->Size = System::Drawing::Size(262, 318);
    this->Dehya->TabIndex = 144;
    this->Dehya->Text = L"Dehya";
    this->Dehya->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Dehya->UseVisualStyleBackColor = false;
    this->Dehya->Click += gcnew System::EventHandler(this, &MyForm::Dehya_Click);
    // 
    // Diluc
    // 
    this->Diluc->AutoSize = true;
    this->Diluc->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Diluc->BackColor = System::Drawing::SystemColors::Control;
    this->Diluc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Diluc->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Diluc->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Diluc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Diluc.Image")));
    this->Diluc->Location = System::Drawing::Point(544, 656);
    this->Diluc->Margin = System::Windows::Forms::Padding(4);
    this->Diluc->Name = L"Diluc";
    this->Diluc->Size = System::Drawing::Size(262, 318);
    this->Diluc->TabIndex = 145;
    this->Diluc->Text = L"Diluc";
    this->Diluc->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Diluc->UseVisualStyleBackColor = false;
    this->Diluc->Click += gcnew System::EventHandler(this, &MyForm::Diluc_Click);
    // 
    // Diona
    // 
    this->Diona->AutoSize = true;
    this->Diona->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Diona->BackColor = System::Drawing::SystemColors::Control;
    this->Diona->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Diona->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Diona->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Diona->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Diona.Image")));
    this->Diona->Location = System::Drawing::Point(814, 656);
    this->Diona->Margin = System::Windows::Forms::Padding(4);
    this->Diona->Name = L"Diona";
    this->Diona->Size = System::Drawing::Size(262, 318);
    this->Diona->TabIndex = 146;
    this->Diona->Text = L"Diona";
    this->Diona->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Diona->UseVisualStyleBackColor = false;
    this->Diona->Click += gcnew System::EventHandler(this, &MyForm::Diona_Click);
    // 
    // Dori
    // 
    this->Dori->AutoSize = true;
    this->Dori->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Dori->BackColor = System::Drawing::SystemColors::Control;
    this->Dori->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Dori->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Dori->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Dori->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Dori.Image")));
    this->Dori->Location = System::Drawing::Point(1084, 656);
    this->Dori->Margin = System::Windows::Forms::Padding(4);
    this->Dori->Name = L"Dori";
    this->Dori->Size = System::Drawing::Size(262, 318);
    this->Dori->TabIndex = 147;
    this->Dori->Text = L"Dori";
    this->Dori->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Dori->UseVisualStyleBackColor = false;
    this->Dori->Click += gcnew System::EventHandler(this, &MyForm::Dori_Click);
    // 
    // Eula
    // 
    this->Eula->AutoSize = true;
    this->Eula->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Eula->BackColor = System::Drawing::SystemColors::Control;
    this->Eula->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Eula->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Eula->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Eula->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Eula.Image")));
    this->Eula->Location = System::Drawing::Point(1354, 656);
    this->Eula->Margin = System::Windows::Forms::Padding(4);
    this->Eula->Name = L"Eula";
    this->Eula->Size = System::Drawing::Size(262, 318);
    this->Eula->TabIndex = 148;
    this->Eula->Text = L"Eula";
    this->Eula->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Eula->UseVisualStyleBackColor = false;
    this->Eula->Click += gcnew System::EventHandler(this, &MyForm::Eula_Click);
    // 
    // Faruzan
    // 
    this->Faruzan->AutoSize = true;
    this->Faruzan->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Faruzan->BackColor = System::Drawing::SystemColors::Control;
    this->Faruzan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Faruzan->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Faruzan->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Faruzan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Faruzan.Image")));
    this->Faruzan->Location = System::Drawing::Point(1624, 656);
    this->Faruzan->Margin = System::Windows::Forms::Padding(4);
    this->Faruzan->Name = L"Faruzan";
    this->Faruzan->Size = System::Drawing::Size(262, 318);
    this->Faruzan->TabIndex = 149;
    this->Faruzan->Text = L"Faruzan";
    this->Faruzan->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Faruzan->UseVisualStyleBackColor = false;
    this->Faruzan->Click += gcnew System::EventHandler(this, &MyForm::Faruzan_Click);
    // 
    // Fischl
    // 
    this->Fischl->AutoSize = true;
    this->Fischl->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Fischl->BackColor = System::Drawing::SystemColors::Control;
    this->Fischl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Fischl->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Fischl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Fischl->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Fischl.Image")));
    this->Fischl->Location = System::Drawing::Point(1894, 656);
    this->Fischl->Margin = System::Windows::Forms::Padding(4);
    this->Fischl->Name = L"Fischl";
    this->Fischl->Size = System::Drawing::Size(262, 318);
    this->Fischl->TabIndex = 150;
    this->Fischl->Text = L"Fischl";
    this->Fischl->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Fischl->UseVisualStyleBackColor = false;
    this->Fischl->Click += gcnew System::EventHandler(this, &MyForm::Fischl_Click);
    // 
    // Freminet
    // 
    this->Freminet->AutoSize = true;
    this->Freminet->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Freminet->BackColor = System::Drawing::SystemColors::Control;
    this->Freminet->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Freminet->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Freminet->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Freminet->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Freminet.Image")));
    this->Freminet->Location = System::Drawing::Point(2164, 656);
    this->Freminet->Margin = System::Windows::Forms::Padding(4);
    this->Freminet->Name = L"Freminet";
    this->Freminet->Size = System::Drawing::Size(262, 318);
    this->Freminet->TabIndex = 151;
    this->Freminet->Text = L"Freminet";
    this->Freminet->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Freminet->UseVisualStyleBackColor = false;
    this->Freminet->Click += gcnew System::EventHandler(this, &MyForm::Freminet_Click);
    // 
    // Furina
    // 
    this->Furina->AutoSize = true;
    this->Furina->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Furina->BackColor = System::Drawing::SystemColors::Control;
    this->Furina->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Furina->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Furina->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Furina->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Furina.Image")));
    this->Furina->Location = System::Drawing::Point(4, 982);
    this->Furina->Margin = System::Windows::Forms::Padding(4);
    this->Furina->Name = L"Furina";
    this->Furina->Size = System::Drawing::Size(262, 318);
    this->Furina->TabIndex = 152;
    this->Furina->Text = L"Furina";
    this->Furina->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Furina->UseVisualStyleBackColor = false;
    this->Furina->Click += gcnew System::EventHandler(this, &MyForm::Furina_Click);
    // 
    // Gaming
    // 
    this->Gaming->AutoSize = true;
    this->Gaming->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Gaming->BackColor = System::Drawing::SystemColors::Control;
    this->Gaming->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Gaming->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Gaming->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Gaming->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Gaming.Image")));
    this->Gaming->Location = System::Drawing::Point(274, 982);
    this->Gaming->Margin = System::Windows::Forms::Padding(4);
    this->Gaming->Name = L"Gaming";
    this->Gaming->Size = System::Drawing::Size(262, 318);
    this->Gaming->TabIndex = 153;
    this->Gaming->Text = L"Gaming";
    this->Gaming->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Gaming->UseVisualStyleBackColor = false;
    this->Gaming->Click += gcnew System::EventHandler(this, &MyForm::Gaming_Click);
    // 
    // Ganyu
    // 
    this->Ganyu->AutoSize = true;
    this->Ganyu->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Ganyu->BackColor = System::Drawing::SystemColors::Control;
    this->Ganyu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Ganyu->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Ganyu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Ganyu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ganyu.Image")));
    this->Ganyu->Location = System::Drawing::Point(544, 982);
    this->Ganyu->Margin = System::Windows::Forms::Padding(4);
    this->Ganyu->Name = L"Ganyu";
    this->Ganyu->Size = System::Drawing::Size(262, 318);
    this->Ganyu->TabIndex = 154;
    this->Ganyu->Text = L"Ganyu";
    this->Ganyu->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Ganyu->UseVisualStyleBackColor = false;
    this->Ganyu->Click += gcnew System::EventHandler(this, &MyForm::Ganyu_Click);
    // 
    // Gorou
    // 
    this->Gorou->AutoSize = true;
    this->Gorou->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Gorou->BackColor = System::Drawing::SystemColors::Control;
    this->Gorou->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Gorou->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Gorou->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Gorou->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Gorou.Image")));
    this->Gorou->Location = System::Drawing::Point(814, 982);
    this->Gorou->Margin = System::Windows::Forms::Padding(4);
    this->Gorou->Name = L"Gorou";
    this->Gorou->Size = System::Drawing::Size(262, 318);
    this->Gorou->TabIndex = 155;
    this->Gorou->Text = L"Gorou";
    this->Gorou->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Gorou->UseVisualStyleBackColor = false;
    this->Gorou->Click += gcnew System::EventHandler(this, &MyForm::Gorou_Click);
    // 
    // Heizou
    // 
    this->Heizou->AutoSize = true;
    this->Heizou->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Heizou->BackColor = System::Drawing::SystemColors::Control;
    this->Heizou->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Heizou->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Heizou->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Heizou->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Heizou.Image")));
    this->Heizou->Location = System::Drawing::Point(1084, 982);
    this->Heizou->Margin = System::Windows::Forms::Padding(4);
    this->Heizou->Name = L"Heizou";
    this->Heizou->Size = System::Drawing::Size(262, 318);
    this->Heizou->TabIndex = 156;
    this->Heizou->Text = L"Heizou";
    this->Heizou->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Heizou->UseVisualStyleBackColor = false;
    this->Heizou->Click += gcnew System::EventHandler(this, &MyForm::Heizou_Click);
    // 
    // Hu_Tao
    // 
    this->Hu_Tao->AutoSize = true;
    this->Hu_Tao->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Hu_Tao->BackColor = System::Drawing::SystemColors::Control;
    this->Hu_Tao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Hu_Tao->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Hu_Tao->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Hu_Tao->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Hu_Tao.Image")));
    this->Hu_Tao->Location = System::Drawing::Point(1354, 982);
    this->Hu_Tao->Margin = System::Windows::Forms::Padding(4);
    this->Hu_Tao->Name = L"Hu_Tao";
    this->Hu_Tao->Size = System::Drawing::Size(262, 318);
    this->Hu_Tao->TabIndex = 157;
    this->Hu_Tao->Text = L"Hu Tao";
    this->Hu_Tao->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Hu_Tao->UseVisualStyleBackColor = false;
    this->Hu_Tao->Click += gcnew System::EventHandler(this, &MyForm::Hu_Tao_Click);
    // 
    // Jean
    // 
    this->Jean->AutoSize = true;
    this->Jean->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Jean->BackColor = System::Drawing::SystemColors::Control;
    this->Jean->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Jean->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Jean->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Jean->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Jean.Image")));
    this->Jean->Location = System::Drawing::Point(1624, 982);
    this->Jean->Margin = System::Windows::Forms::Padding(4);
    this->Jean->Name = L"Jean";
    this->Jean->Size = System::Drawing::Size(262, 318);
    this->Jean->TabIndex = 158;
    this->Jean->Text = L"Jean";
    this->Jean->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Jean->UseVisualStyleBackColor = false;
    this->Jean->Click += gcnew System::EventHandler(this, &MyForm::Jean_Click);
    // 
    // Kaeya
    // 
    this->Kaeya->AutoSize = true;
    this->Kaeya->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Kaeya->BackColor = System::Drawing::SystemColors::Control;
    this->Kaeya->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Kaeya->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Kaeya->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Kaeya->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Kaeya.Image")));
    this->Kaeya->Location = System::Drawing::Point(1894, 982);
    this->Kaeya->Margin = System::Windows::Forms::Padding(4);
    this->Kaeya->Name = L"Kaeya";
    this->Kaeya->Size = System::Drawing::Size(262, 318);
    this->Kaeya->TabIndex = 161;
    this->Kaeya->Text = L"Kaeya";
    this->Kaeya->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Kaeya->UseVisualStyleBackColor = false;
    this->Kaeya->Click += gcnew System::EventHandler(this, &MyForm::Kaeya_Click);
    // 
    // Kamisato_Ayaka
    // 
    this->Kamisato_Ayaka->AutoSize = true;
    this->Kamisato_Ayaka->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Kamisato_Ayaka->BackColor = System::Drawing::SystemColors::Control;
    this->Kamisato_Ayaka->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Kamisato_Ayaka->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Kamisato_Ayaka->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Kamisato_Ayaka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Kamisato_Ayaka.Image")));
    this->Kamisato_Ayaka->Location = System::Drawing::Point(2164, 982);
    this->Kamisato_Ayaka->Margin = System::Windows::Forms::Padding(4);
    this->Kamisato_Ayaka->Name = L"Kamisato_Ayaka";
    this->Kamisato_Ayaka->Size = System::Drawing::Size(301, 318);
    this->Kamisato_Ayaka->TabIndex = 159;
    this->Kamisato_Ayaka->Text = L"Kamisato Ayaka";
    this->Kamisato_Ayaka->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Kamisato_Ayaka->UseVisualStyleBackColor = false;
    this->Kamisato_Ayaka->Click += gcnew System::EventHandler(this, &MyForm::Kamisato_Ayaka_Click);
    // 
    // Kamisato_Ayato
    // 
    this->Kamisato_Ayato->AutoSize = true;
    this->Kamisato_Ayato->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Kamisato_Ayato->BackColor = System::Drawing::SystemColors::Control;
    this->Kamisato_Ayato->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Kamisato_Ayato->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Kamisato_Ayato->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Kamisato_Ayato->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Kamisato_Ayato.Image")));
    this->Kamisato_Ayato->Location = System::Drawing::Point(4, 1308);
    this->Kamisato_Ayato->Margin = System::Windows::Forms::Padding(4);
    this->Kamisato_Ayato->Name = L"Kamisato_Ayato";
    this->Kamisato_Ayato->Size = System::Drawing::Size(297, 318);
    this->Kamisato_Ayato->TabIndex = 160;
    this->Kamisato_Ayato->Text = L"Kamisato Ayato";
    this->Kamisato_Ayato->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Kamisato_Ayato->UseVisualStyleBackColor = false;
    this->Kamisato_Ayato->Click += gcnew System::EventHandler(this, &MyForm::Kamisato_Ayato_Click);
    // 
    // Kaveh
    // 
    this->Kaveh->AutoSize = true;
    this->Kaveh->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Kaveh->BackColor = System::Drawing::SystemColors::Control;
    this->Kaveh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Kaveh->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Kaveh->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Kaveh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Kaveh.Image")));
    this->Kaveh->Location = System::Drawing::Point(309, 1308);
    this->Kaveh->Margin = System::Windows::Forms::Padding(4);
    this->Kaveh->Name = L"Kaveh";
    this->Kaveh->Size = System::Drawing::Size(262, 318);
    this->Kaveh->TabIndex = 162;
    this->Kaveh->Text = L"Kaveh";
    this->Kaveh->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Kaveh->UseVisualStyleBackColor = false;
    this->Kaveh->Click += gcnew System::EventHandler(this, &MyForm::Kaveh_Click);
    // 
    // Kazuha
    // 
    this->Kazuha->AutoSize = true;
    this->Kazuha->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Kazuha->BackColor = System::Drawing::SystemColors::Control;
    this->Kazuha->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Kazuha->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Kazuha->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Kazuha->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Kazuha.Image")));
    this->Kazuha->Location = System::Drawing::Point(579, 1308);
    this->Kazuha->Margin = System::Windows::Forms::Padding(4);
    this->Kazuha->Name = L"Kazuha";
    this->Kazuha->Size = System::Drawing::Size(262, 318);
    this->Kazuha->TabIndex = 163;
    this->Kazuha->Text = L"Kazuha";
    this->Kazuha->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Kazuha->UseVisualStyleBackColor = false;
    this->Kazuha->Click += gcnew System::EventHandler(this, &MyForm::Kazuha_Click);
    // 
    // Keqing
    // 
    this->Keqing->AutoSize = true;
    this->Keqing->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Keqing->BackColor = System::Drawing::SystemColors::Control;
    this->Keqing->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Keqing->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Keqing->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Keqing->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Keqing.Image")));
    this->Keqing->Location = System::Drawing::Point(849, 1308);
    this->Keqing->Margin = System::Windows::Forms::Padding(4);
    this->Keqing->Name = L"Keqing";
    this->Keqing->Size = System::Drawing::Size(262, 318);
    this->Keqing->TabIndex = 164;
    this->Keqing->Text = L"Keqing";
    this->Keqing->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Keqing->UseVisualStyleBackColor = false;
    this->Keqing->Click += gcnew System::EventHandler(this, &MyForm::Keqing_Click);
    // 
    // Kirara
    // 
    this->Kirara->AutoSize = true;
    this->Kirara->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Kirara->BackColor = System::Drawing::SystemColors::Control;
    this->Kirara->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Kirara->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Kirara->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Kirara->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Kirara.Image")));
    this->Kirara->Location = System::Drawing::Point(1119, 1308);
    this->Kirara->Margin = System::Windows::Forms::Padding(4);
    this->Kirara->Name = L"Kirara";
    this->Kirara->Size = System::Drawing::Size(262, 318);
    this->Kirara->TabIndex = 175;
    this->Kirara->Text = L"Kirara";
    this->Kirara->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Kirara->UseVisualStyleBackColor = false;
    this->Kirara->Click += gcnew System::EventHandler(this, &MyForm::Kirara_Click);
    // 
    // Klee
    // 
    this->Klee->AutoSize = true;
    this->Klee->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Klee->BackColor = System::Drawing::SystemColors::Control;
    this->Klee->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Klee->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Klee->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Klee->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Klee.Image")));
    this->Klee->Location = System::Drawing::Point(1389, 1308);
    this->Klee->Margin = System::Windows::Forms::Padding(4);
    this->Klee->Name = L"Klee";
    this->Klee->Size = System::Drawing::Size(262, 318);
    this->Klee->TabIndex = 183;
    this->Klee->Text = L"Klee";
    this->Klee->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Klee->UseVisualStyleBackColor = false;
    this->Klee->Click += gcnew System::EventHandler(this, &MyForm::Klee_Click);
    // 
    // Kujou_Sara
    // 
    this->Kujou_Sara->AutoSize = true;
    this->Kujou_Sara->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Kujou_Sara->BackColor = System::Drawing::SystemColors::Control;
    this->Kujou_Sara->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Kujou_Sara->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Kujou_Sara->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Kujou_Sara->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Kujou_Sara.Image")));
    this->Kujou_Sara->Location = System::Drawing::Point(1659, 1308);
    this->Kujou_Sara->Margin = System::Windows::Forms::Padding(4);
    this->Kujou_Sara->Name = L"Kujou_Sara";
    this->Kujou_Sara->Size = System::Drawing::Size(262, 318);
    this->Kujou_Sara->TabIndex = 192;
    this->Kujou_Sara->Text = L"Kujou Sara";
    this->Kujou_Sara->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Kujou_Sara->UseVisualStyleBackColor = false;
    this->Kujou_Sara->Click += gcnew System::EventHandler(this, &MyForm::Kujou_Sara_Click);
    // 
    // Kuki_Shinobu
    // 
    this->Kuki_Shinobu->AutoSize = true;
    this->Kuki_Shinobu->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Kuki_Shinobu->BackColor = System::Drawing::SystemColors::Control;
    this->Kuki_Shinobu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Kuki_Shinobu->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Kuki_Shinobu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Kuki_Shinobu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Kuki_Shinobu.Image")));
    this->Kuki_Shinobu->Location = System::Drawing::Point(1929, 1308);
    this->Kuki_Shinobu->Margin = System::Windows::Forms::Padding(4);
    this->Kuki_Shinobu->Name = L"Kuki_Shinobu";
    this->Kuki_Shinobu->Size = System::Drawing::Size(262, 318);
    this->Kuki_Shinobu->TabIndex = 193;
    this->Kuki_Shinobu->Text = L"Kuki Shinobu";
    this->Kuki_Shinobu->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Kuki_Shinobu->UseVisualStyleBackColor = false;
    this->Kuki_Shinobu->Click += gcnew System::EventHandler(this, &MyForm::Kuki_Shinobu_Click);
    // 
    // Layla
    // 
    this->Layla->AutoSize = true;
    this->Layla->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Layla->BackColor = System::Drawing::SystemColors::Control;
    this->Layla->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Layla->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Layla->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Layla->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Layla.Image")));
    this->Layla->Location = System::Drawing::Point(2199, 1308);
    this->Layla->Margin = System::Windows::Forms::Padding(4);
    this->Layla->Name = L"Layla";
    this->Layla->Size = System::Drawing::Size(262, 318);
    this->Layla->TabIndex = 194;
    this->Layla->Text = L"Layla";
    this->Layla->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Layla->UseVisualStyleBackColor = false;
    this->Layla->Click += gcnew System::EventHandler(this, &MyForm::Layla_Click);
    // 
    // Lisa
    // 
    this->Lisa->AutoSize = true;
    this->Lisa->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Lisa->BackColor = System::Drawing::SystemColors::Control;
    this->Lisa->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Lisa->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Lisa->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Lisa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lisa.Image")));
    this->Lisa->Location = System::Drawing::Point(4, 1634);
    this->Lisa->Margin = System::Windows::Forms::Padding(4);
    this->Lisa->Name = L"Lisa";
    this->Lisa->Size = System::Drawing::Size(262, 318);
    this->Lisa->TabIndex = 202;
    this->Lisa->Text = L"Lisa";
    this->Lisa->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Lisa->UseVisualStyleBackColor = false;
    this->Lisa->Click += gcnew System::EventHandler(this, &MyForm::Lisa_Click);
    // 
    // Lynette
    // 
    this->Lynette->AutoSize = true;
    this->Lynette->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Lynette->BackColor = System::Drawing::SystemColors::Control;
    this->Lynette->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Lynette->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Lynette->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Lynette->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lynette.Image")));
    this->Lynette->Location = System::Drawing::Point(274, 1634);
    this->Lynette->Margin = System::Windows::Forms::Padding(4);
    this->Lynette->Name = L"Lynette";
    this->Lynette->Size = System::Drawing::Size(262, 318);
    this->Lynette->TabIndex = 209;
    this->Lynette->Text = L"Lynette";
    this->Lynette->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Lynette->UseVisualStyleBackColor = false;
    this->Lynette->Click += gcnew System::EventHandler(this, &MyForm::Lynette_Click);
    // 
    // Lynney
    // 
    this->Lynney->AutoSize = true;
    this->Lynney->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Lynney->BackColor = System::Drawing::SystemColors::Control;
    this->Lynney->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Lynney->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Lynney->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Lynney->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lynney.Image")));
    this->Lynney->Location = System::Drawing::Point(544, 1634);
    this->Lynney->Margin = System::Windows::Forms::Padding(4);
    this->Lynney->Name = L"Lynney";
    this->Lynney->Size = System::Drawing::Size(262, 318);
    this->Lynney->TabIndex = 210;
    this->Lynney->Text = L"Lynney";
    this->Lynney->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Lynney->UseVisualStyleBackColor = false;
    this->Lynney->Click += gcnew System::EventHandler(this, &MyForm::Lynney_Click);
    // 
    // Mika
    // 
    this->Mika->AutoSize = true;
    this->Mika->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Mika->BackColor = System::Drawing::SystemColors::Control;
    this->Mika->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Mika->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Mika->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Mika->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mika.Image")));
    this->Mika->Location = System::Drawing::Point(814, 1634);
    this->Mika->Margin = System::Windows::Forms::Padding(4);
    this->Mika->Name = L"Mika";
    this->Mika->Size = System::Drawing::Size(262, 318);
    this->Mika->TabIndex = 211;
    this->Mika->Text = L"Mika";
    this->Mika->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Mika->UseVisualStyleBackColor = false;
    this->Mika->Click += gcnew System::EventHandler(this, &MyForm::Mika_Click);
    // 
    // Mona
    // 
    this->Mona->AutoSize = true;
    this->Mona->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Mona->BackColor = System::Drawing::SystemColors::Control;
    this->Mona->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Mona->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Mona->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Mona->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mona.Image")));
    this->Mona->Location = System::Drawing::Point(1084, 1634);
    this->Mona->Margin = System::Windows::Forms::Padding(4);
    this->Mona->Name = L"Mona";
    this->Mona->Size = System::Drawing::Size(262, 318);
    this->Mona->TabIndex = 212;
    this->Mona->Text = L"Mona";
    this->Mona->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Mona->UseVisualStyleBackColor = false;
    this->Mona->Click += gcnew System::EventHandler(this, &MyForm::Mona_Click);
    // 
    // Nahida
    // 
    this->Nahida->AutoSize = true;
    this->Nahida->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Nahida->BackColor = System::Drawing::SystemColors::Control;
    this->Nahida->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Nahida->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Nahida->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Nahida->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nahida.Image")));
    this->Nahida->Location = System::Drawing::Point(1354, 1634);
    this->Nahida->Margin = System::Windows::Forms::Padding(4);
    this->Nahida->Name = L"Nahida";
    this->Nahida->Size = System::Drawing::Size(262, 318);
    this->Nahida->TabIndex = 213;
    this->Nahida->Text = L"Nahida";
    this->Nahida->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Nahida->UseVisualStyleBackColor = false;
    this->Nahida->Click += gcnew System::EventHandler(this, &MyForm::Nahida_Click);
    // 
    // Navia
    // 
    this->Navia->AutoSize = true;
    this->Navia->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Navia->BackColor = System::Drawing::SystemColors::Control;
    this->Navia->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Navia->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Navia->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Navia->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Navia.Image")));
    this->Navia->Location = System::Drawing::Point(1624, 1634);
    this->Navia->Margin = System::Windows::Forms::Padding(4);
    this->Navia->Name = L"Navia";
    this->Navia->Size = System::Drawing::Size(262, 318);
    this->Navia->TabIndex = 214;
    this->Navia->Text = L"Navia";
    this->Navia->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Navia->UseVisualStyleBackColor = false;
    this->Navia->Click += gcnew System::EventHandler(this, &MyForm::Navia_Click);
    // 
    // Neuvillette
    // 
    this->Neuvillette->AutoSize = true;
    this->Neuvillette->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Neuvillette->BackColor = System::Drawing::SystemColors::Control;
    this->Neuvillette->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Neuvillette->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Neuvillette->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Neuvillette->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Neuvillette.Image")));
    this->Neuvillette->Location = System::Drawing::Point(1894, 1634);
    this->Neuvillette->Margin = System::Windows::Forms::Padding(4);
    this->Neuvillette->Name = L"Neuvillette";
    this->Neuvillette->Size = System::Drawing::Size(262, 318);
    this->Neuvillette->TabIndex = 227;
    this->Neuvillette->Text = L"Neuvillette";
    this->Neuvillette->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Neuvillette->UseVisualStyleBackColor = false;
    this->Neuvillette->Click += gcnew System::EventHandler(this, &MyForm::Neuvillette_Click);
    // 
    // Nilou
    // 
    this->Nilou->AutoSize = true;
    this->Nilou->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Nilou->BackColor = System::Drawing::SystemColors::Control;
    this->Nilou->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Nilou->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Nilou->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Nilou->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nilou.Image")));
    this->Nilou->Location = System::Drawing::Point(2164, 1634);
    this->Nilou->Margin = System::Windows::Forms::Padding(4);
    this->Nilou->Name = L"Nilou";
    this->Nilou->Size = System::Drawing::Size(262, 318);
    this->Nilou->TabIndex = 278;
    this->Nilou->Text = L"Nilou";
    this->Nilou->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Nilou->UseVisualStyleBackColor = false;
    this->Nilou->Click += gcnew System::EventHandler(this, &MyForm::Nilou_Click);
    // 
    // Ningguang
    // 
    this->Ningguang->AutoSize = true;
    this->Ningguang->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Ningguang->BackColor = System::Drawing::SystemColors::Control;
    this->Ningguang->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Ningguang->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Ningguang->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Ningguang->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ningguang.Image")));
    this->Ningguang->Location = System::Drawing::Point(4, 1960);
    this->Ningguang->Margin = System::Windows::Forms::Padding(4);
    this->Ningguang->Name = L"Ningguang";
    this->Ningguang->Size = System::Drawing::Size(262, 318);
    this->Ningguang->TabIndex = 279;
    this->Ningguang->Text = L"Ningguang";
    this->Ningguang->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Ningguang->UseVisualStyleBackColor = false;
    this->Ningguang->Click += gcnew System::EventHandler(this, &MyForm::Ningguang_Click);
    // 
    // Noelle
    // 
    this->Noelle->AutoSize = true;
    this->Noelle->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Noelle->BackColor = System::Drawing::SystemColors::Control;
    this->Noelle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Noelle->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Noelle->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Noelle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Noelle.Image")));
    this->Noelle->Location = System::Drawing::Point(274, 1960);
    this->Noelle->Margin = System::Windows::Forms::Padding(4);
    this->Noelle->Name = L"Noelle";
    this->Noelle->Size = System::Drawing::Size(262, 318);
    this->Noelle->TabIndex = 280;
    this->Noelle->Text = L"Noelle";
    this->Noelle->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Noelle->UseVisualStyleBackColor = false;
    this->Noelle->Click += gcnew System::EventHandler(this, &MyForm::Noelle_Click);
    // 
    // Qiqi
    // 
    this->Qiqi->AutoSize = true;
    this->Qiqi->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Qiqi->BackColor = System::Drawing::SystemColors::Control;
    this->Qiqi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Qiqi->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Qiqi->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Qiqi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Qiqi.Image")));
    this->Qiqi->Location = System::Drawing::Point(544, 1960);
    this->Qiqi->Margin = System::Windows::Forms::Padding(4);
    this->Qiqi->Name = L"Qiqi";
    this->Qiqi->Size = System::Drawing::Size(262, 318);
    this->Qiqi->TabIndex = 282;
    this->Qiqi->Text = L"Qiqi";
    this->Qiqi->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Qiqi->UseVisualStyleBackColor = false;
    this->Qiqi->Click += gcnew System::EventHandler(this, &MyForm::Qiqi_Click);
    // 
    // Raiden_Shogun
    // 
    this->Raiden_Shogun->AutoSize = true;
    this->Raiden_Shogun->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Raiden_Shogun->BackColor = System::Drawing::SystemColors::Control;
    this->Raiden_Shogun->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Raiden_Shogun->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Raiden_Shogun->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Raiden_Shogun->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Raiden_Shogun.Image")));
    this->Raiden_Shogun->Location = System::Drawing::Point(814, 1960);
    this->Raiden_Shogun->Margin = System::Windows::Forms::Padding(4);
    this->Raiden_Shogun->Name = L"Raiden_Shogun";
    this->Raiden_Shogun->Size = System::Drawing::Size(279, 318);
    this->Raiden_Shogun->TabIndex = 281;
    this->Raiden_Shogun->Text = L"Raiden Shogun";
    this->Raiden_Shogun->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Raiden_Shogun->UseVisualStyleBackColor = false;
    this->Raiden_Shogun->Click += gcnew System::EventHandler(this, &MyForm::Raiden_Shogun_Click);
    // 
    // Razor
    // 
    this->Razor->AutoSize = true;
    this->Razor->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Razor->BackColor = System::Drawing::SystemColors::Control;
    this->Razor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Razor->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Razor->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Razor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Razor.Image")));
    this->Razor->Location = System::Drawing::Point(1101, 1960);
    this->Razor->Margin = System::Windows::Forms::Padding(4);
    this->Razor->Name = L"Razor";
    this->Razor->Size = System::Drawing::Size(262, 318);
    this->Razor->TabIndex = 283;
    this->Razor->Text = L"Razor";
    this->Razor->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Razor->UseVisualStyleBackColor = false;
    this->Razor->Click += gcnew System::EventHandler(this, &MyForm::Razor_Click);
    // 
    // Rosaria
    // 
    this->Rosaria->AutoSize = true;
    this->Rosaria->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Rosaria->BackColor = System::Drawing::SystemColors::Control;
    this->Rosaria->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Rosaria->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Rosaria->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Rosaria->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Rosaria.Image")));
    this->Rosaria->Location = System::Drawing::Point(1371, 1960);
    this->Rosaria->Margin = System::Windows::Forms::Padding(4);
    this->Rosaria->Name = L"Rosaria";
    this->Rosaria->Size = System::Drawing::Size(262, 318);
    this->Rosaria->TabIndex = 284;
    this->Rosaria->Text = L"Rosaria";
    this->Rosaria->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Rosaria->UseVisualStyleBackColor = false;
    this->Rosaria->Click += gcnew System::EventHandler(this, &MyForm::Rosaria_Click);
    // 
    // Sangonomiya_Kokomi
    // 
    this->Sangonomiya_Kokomi->AutoSize = true;
    this->Sangonomiya_Kokomi->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Sangonomiya_Kokomi->BackColor = System::Drawing::SystemColors::Control;
    this->Sangonomiya_Kokomi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Sangonomiya_Kokomi->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Sangonomiya_Kokomi->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Sangonomiya_Kokomi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sangonomiya_Kokomi.Image")));
    this->Sangonomiya_Kokomi->Location = System::Drawing::Point(1641, 1960);
    this->Sangonomiya_Kokomi->Margin = System::Windows::Forms::Padding(4);
    this->Sangonomiya_Kokomi->Name = L"Sangonomiya_Kokomi";
    this->Sangonomiya_Kokomi->Size = System::Drawing::Size(380, 318);
    this->Sangonomiya_Kokomi->TabIndex = 285;
    this->Sangonomiya_Kokomi->Text = L"Sangonomiya Kokomi";
    this->Sangonomiya_Kokomi->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Sangonomiya_Kokomi->UseVisualStyleBackColor = false;
    this->Sangonomiya_Kokomi->Click += gcnew System::EventHandler(this, &MyForm::Sangonomiya_Kokomi_Click);
    // 
    // Sayu
    // 
    this->Sayu->AutoSize = true;
    this->Sayu->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Sayu->BackColor = System::Drawing::SystemColors::Control;
    this->Sayu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Sayu->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Sayu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Sayu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sayu.Image")));
    this->Sayu->Location = System::Drawing::Point(2029, 1960);
    this->Sayu->Margin = System::Windows::Forms::Padding(4);
    this->Sayu->Name = L"Sayu";
    this->Sayu->Size = System::Drawing::Size(262, 318);
    this->Sayu->TabIndex = 286;
    this->Sayu->Text = L"Sayu";
    this->Sayu->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Sayu->UseVisualStyleBackColor = false;
    this->Sayu->Click += gcnew System::EventHandler(this, &MyForm::Sayu_Click);
    // 
    // Sethos
    // 
    this->Sethos->AutoSize = true;
    this->Sethos->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Sethos->BackColor = System::Drawing::SystemColors::Control;
    this->Sethos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Sethos->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Sethos->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Sethos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sethos.Image")));
    this->Sethos->Location = System::Drawing::Point(4, 2286);
    this->Sethos->Margin = System::Windows::Forms::Padding(4);
    this->Sethos->Name = L"Sethos";
    this->Sethos->Size = System::Drawing::Size(262, 318);
    this->Sethos->TabIndex = 287;
    this->Sethos->Text = L"Sethos";
    this->Sethos->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Sethos->UseVisualStyleBackColor = false;
    this->Sethos->Click += gcnew System::EventHandler(this, &MyForm::Sethos_Click);
    // 
    // Shenhe
    // 
    this->Shenhe->AutoSize = true;
    this->Shenhe->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Shenhe->BackColor = System::Drawing::SystemColors::Control;
    this->Shenhe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Shenhe->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Shenhe->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Shenhe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Shenhe.Image")));
    this->Shenhe->Location = System::Drawing::Point(274, 2286);
    this->Shenhe->Margin = System::Windows::Forms::Padding(4);
    this->Shenhe->Name = L"Shenhe";
    this->Shenhe->Size = System::Drawing::Size(262, 318);
    this->Shenhe->TabIndex = 288;
    this->Shenhe->Text = L"Shenhe";
    this->Shenhe->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Shenhe->UseVisualStyleBackColor = false;
    this->Shenhe->Click += gcnew System::EventHandler(this, &MyForm::Shenhe_Click);
    // 
    // Sucrose
    // 
    this->Sucrose->AutoSize = true;
    this->Sucrose->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Sucrose->BackColor = System::Drawing::SystemColors::Control;
    this->Sucrose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Sucrose->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Sucrose->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Sucrose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sucrose.Image")));
    this->Sucrose->Location = System::Drawing::Point(544, 2286);
    this->Sucrose->Margin = System::Windows::Forms::Padding(4);
    this->Sucrose->Name = L"Sucrose";
    this->Sucrose->Size = System::Drawing::Size(262, 318);
    this->Sucrose->TabIndex = 289;
    this->Sucrose->Text = L"Sucrose";
    this->Sucrose->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Sucrose->UseVisualStyleBackColor = false;
    this->Sucrose->Click += gcnew System::EventHandler(this, &MyForm::Sucrose_Click);
    // 
    // Thoma
    // 
    this->Thoma->AutoSize = true;
    this->Thoma->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Thoma->BackColor = System::Drawing::SystemColors::Control;
    this->Thoma->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Thoma->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Thoma->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Thoma->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Thoma.Image")));
    this->Thoma->Location = System::Drawing::Point(814, 2286);
    this->Thoma->Margin = System::Windows::Forms::Padding(4);
    this->Thoma->Name = L"Thoma";
    this->Thoma->Size = System::Drawing::Size(262, 318);
    this->Thoma->TabIndex = 290;
    this->Thoma->Text = L"Thoma";
    this->Thoma->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Thoma->UseVisualStyleBackColor = false;
    this->Thoma->Click += gcnew System::EventHandler(this, &MyForm::Thoma_Click);
    // 
    // Tighnari
    // 
    this->Tighnari->AutoSize = true;
    this->Tighnari->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Tighnari->BackColor = System::Drawing::SystemColors::Control;
    this->Tighnari->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Tighnari->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Tighnari->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Tighnari->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tighnari.Image")));
    this->Tighnari->Location = System::Drawing::Point(1084, 2286);
    this->Tighnari->Margin = System::Windows::Forms::Padding(4);
    this->Tighnari->Name = L"Tighnari";
    this->Tighnari->Size = System::Drawing::Size(262, 318);
    this->Tighnari->TabIndex = 291;
    this->Tighnari->Text = L"Tighnari";
    this->Tighnari->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Tighnari->UseVisualStyleBackColor = false;
    this->Tighnari->Click += gcnew System::EventHandler(this, &MyForm::Tighnari_Click);
    // 
    // Traveler
    // 
    this->Traveler->AutoSize = true;
    this->Traveler->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Traveler->BackColor = System::Drawing::SystemColors::Control;
    this->Traveler->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Traveler->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Traveler->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Traveler->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Traveler.Image")));
    this->Traveler->Location = System::Drawing::Point(1354, 2286);
    this->Traveler->Margin = System::Windows::Forms::Padding(4);
    this->Traveler->Name = L"Traveler";
    this->Traveler->Size = System::Drawing::Size(262, 318);
    this->Traveler->TabIndex = 292;
    this->Traveler->Text = L"Traveler";
    this->Traveler->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Traveler->UseVisualStyleBackColor = false;
    this->Traveler->Click += gcnew System::EventHandler(this, &MyForm::Traveler_Click);
    // 
    // Venti
    // 
    this->Venti->AutoSize = true;
    this->Venti->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Venti->BackColor = System::Drawing::SystemColors::Control;
    this->Venti->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Venti->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Venti->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Venti->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Venti.Image")));
    this->Venti->Location = System::Drawing::Point(1624, 2286);
    this->Venti->Margin = System::Windows::Forms::Padding(4);
    this->Venti->Name = L"Venti";
    this->Venti->Size = System::Drawing::Size(262, 318);
    this->Venti->TabIndex = 293;
    this->Venti->Text = L"Venti";
    this->Venti->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Venti->UseVisualStyleBackColor = false;
    this->Venti->Click += gcnew System::EventHandler(this, &MyForm::Venti_Click);
    // 
    // Wanderer
    // 
    this->Wanderer->AutoSize = true;
    this->Wanderer->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Wanderer->BackColor = System::Drawing::SystemColors::Control;
    this->Wanderer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Wanderer->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Wanderer->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Wanderer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Wanderer.Image")));
    this->Wanderer->Location = System::Drawing::Point(1894, 2286);
    this->Wanderer->Margin = System::Windows::Forms::Padding(4);
    this->Wanderer->Name = L"Wanderer";
    this->Wanderer->Size = System::Drawing::Size(262, 318);
    this->Wanderer->TabIndex = 294;
    this->Wanderer->Text = L"Wanderer";
    this->Wanderer->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Wanderer->UseVisualStyleBackColor = false;
    this->Wanderer->Click += gcnew System::EventHandler(this, &MyForm::Wanderer_Click);
    // 
    // Wriothesley
    // 
    this->Wriothesley->AutoSize = true;
    this->Wriothesley->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Wriothesley->BackColor = System::Drawing::SystemColors::Control;
    this->Wriothesley->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Wriothesley->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Wriothesley->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Wriothesley->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Wriothesley.Image")));
    this->Wriothesley->Location = System::Drawing::Point(2164, 2286);
    this->Wriothesley->Margin = System::Windows::Forms::Padding(4);
    this->Wriothesley->Name = L"Wriothesley";
    this->Wriothesley->Size = System::Drawing::Size(262, 318);
    this->Wriothesley->TabIndex = 295;
    this->Wriothesley->Text = L"Wriothesley";
    this->Wriothesley->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Wriothesley->UseVisualStyleBackColor = false;
    this->Wriothesley->Click += gcnew System::EventHandler(this, &MyForm::Wriothesley_Click);
    // 
    // Xiangling
    // 
    this->Xiangling->AutoSize = true;
    this->Xiangling->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Xiangling->BackColor = System::Drawing::SystemColors::Control;
    this->Xiangling->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Xiangling->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Xiangling->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Xiangling->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Xiangling.Image")));
    this->Xiangling->Location = System::Drawing::Point(4, 2612);
    this->Xiangling->Margin = System::Windows::Forms::Padding(4);
    this->Xiangling->Name = L"Xiangling";
    this->Xiangling->Size = System::Drawing::Size(262, 318);
    this->Xiangling->TabIndex = 296;
    this->Xiangling->Text = L"Xiangling";
    this->Xiangling->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Xiangling->UseVisualStyleBackColor = false;
    this->Xiangling->Click += gcnew System::EventHandler(this, &MyForm::Xiangling_Click);
    // 
    // Xianyun
    // 
    this->Xianyun->AutoSize = true;
    this->Xianyun->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Xianyun->BackColor = System::Drawing::SystemColors::Control;
    this->Xianyun->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Xianyun->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Xianyun->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Xianyun->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Xianyun.Image")));
    this->Xianyun->Location = System::Drawing::Point(274, 2612);
    this->Xianyun->Margin = System::Windows::Forms::Padding(4);
    this->Xianyun->Name = L"Xianyun";
    this->Xianyun->Size = System::Drawing::Size(262, 318);
    this->Xianyun->TabIndex = 297;
    this->Xianyun->Text = L"Xianyun";
    this->Xianyun->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Xianyun->UseVisualStyleBackColor = false;
    this->Xianyun->Click += gcnew System::EventHandler(this, &MyForm::Xianyun_Click);
    // 
    // Xiao
    // 
    this->Xiao->AutoSize = true;
    this->Xiao->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Xiao->BackColor = System::Drawing::SystemColors::Control;
    this->Xiao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Xiao->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Xiao->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Xiao->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Xiao.Image")));
    this->Xiao->Location = System::Drawing::Point(544, 2612);
    this->Xiao->Margin = System::Windows::Forms::Padding(4);
    this->Xiao->Name = L"Xiao";
    this->Xiao->Size = System::Drawing::Size(262, 318);
    this->Xiao->TabIndex = 298;
    this->Xiao->Text = L"Xiao";
    this->Xiao->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Xiao->UseVisualStyleBackColor = false;
    this->Xiao->Click += gcnew System::EventHandler(this, &MyForm::Xiao_Click);
    // 
    // Xingqiu
    // 
    this->Xingqiu->AutoSize = true;
    this->Xingqiu->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Xingqiu->BackColor = System::Drawing::SystemColors::Control;
    this->Xingqiu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Xingqiu->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Xingqiu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Xingqiu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Xingqiu.Image")));
    this->Xingqiu->Location = System::Drawing::Point(814, 2612);
    this->Xingqiu->Margin = System::Windows::Forms::Padding(4);
    this->Xingqiu->Name = L"Xingqiu";
    this->Xingqiu->Size = System::Drawing::Size(262, 318);
    this->Xingqiu->TabIndex = 299;
    this->Xingqiu->Text = L"Xingqiu";
    this->Xingqiu->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Xingqiu->UseVisualStyleBackColor = false;
    this->Xingqiu->Click += gcnew System::EventHandler(this, &MyForm::Xingqiu_Click);
    // 
    // Xinyan
    // 
    this->Xinyan->AutoSize = true;
    this->Xinyan->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Xinyan->BackColor = System::Drawing::SystemColors::Control;
    this->Xinyan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Xinyan->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Xinyan->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Xinyan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Xinyan.Image")));
    this->Xinyan->Location = System::Drawing::Point(1084, 2612);
    this->Xinyan->Margin = System::Windows::Forms::Padding(4);
    this->Xinyan->Name = L"Xinyan";
    this->Xinyan->Size = System::Drawing::Size(262, 318);
    this->Xinyan->TabIndex = 300;
    this->Xinyan->Text = L"Xinyan";
    this->Xinyan->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Xinyan->UseVisualStyleBackColor = false;
    this->Xinyan->Click += gcnew System::EventHandler(this, &MyForm::Xinyan_Click);
    // 
    // Yae_Miko
    // 
    this->Yae_Miko->AutoSize = true;
    this->Yae_Miko->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Yae_Miko->BackColor = System::Drawing::SystemColors::Control;
    this->Yae_Miko->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Yae_Miko->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Yae_Miko->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Yae_Miko->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Yae_Miko.Image")));
    this->Yae_Miko->Location = System::Drawing::Point(1354, 2612);
    this->Yae_Miko->Margin = System::Windows::Forms::Padding(4);
    this->Yae_Miko->Name = L"Yae_Miko";
    this->Yae_Miko->Size = System::Drawing::Size(262, 318);
    this->Yae_Miko->TabIndex = 301;
    this->Yae_Miko->Text = L"Yae Miko";
    this->Yae_Miko->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Yae_Miko->UseVisualStyleBackColor = false;
    this->Yae_Miko->Click += gcnew System::EventHandler(this, &MyForm::Yae_Miko_Click);
    // 
    // Yanfei
    // 
    this->Yanfei->AutoSize = true;
    this->Yanfei->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Yanfei->BackColor = System::Drawing::SystemColors::Control;
    this->Yanfei->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Yanfei->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Yanfei->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Yanfei->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Yanfei.Image")));
    this->Yanfei->Location = System::Drawing::Point(1624, 2612);
    this->Yanfei->Margin = System::Windows::Forms::Padding(4);
    this->Yanfei->Name = L"Yanfei";
    this->Yanfei->Size = System::Drawing::Size(262, 318);
    this->Yanfei->TabIndex = 302;
    this->Yanfei->Text = L"Yanfei";
    this->Yanfei->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Yanfei->UseVisualStyleBackColor = false;
    this->Yanfei->Click += gcnew System::EventHandler(this, &MyForm::Yanfei_Click);
    // 
    // Yaoyao
    // 
    this->Yaoyao->AutoSize = true;
    this->Yaoyao->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Yaoyao->BackColor = System::Drawing::SystemColors::Control;
    this->Yaoyao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Yaoyao->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Yaoyao->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Yaoyao->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Yaoyao.Image")));
    this->Yaoyao->Location = System::Drawing::Point(1894, 2612);
    this->Yaoyao->Margin = System::Windows::Forms::Padding(4);
    this->Yaoyao->Name = L"Yaoyao";
    this->Yaoyao->Size = System::Drawing::Size(262, 318);
    this->Yaoyao->TabIndex = 303;
    this->Yaoyao->Text = L"Yaoyao";
    this->Yaoyao->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Yaoyao->UseVisualStyleBackColor = false;
    this->Yaoyao->Click += gcnew System::EventHandler(this, &MyForm::Yaoyao_Click);
    // 
    // Yelan
    // 
    this->Yelan->AutoSize = true;
    this->Yelan->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Yelan->BackColor = System::Drawing::SystemColors::Control;
    this->Yelan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Yelan->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Yelan->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Yelan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Yelan.Image")));
    this->Yelan->Location = System::Drawing::Point(2164, 2612);
    this->Yelan->Margin = System::Windows::Forms::Padding(4);
    this->Yelan->Name = L"Yelan";
    this->Yelan->Size = System::Drawing::Size(262, 318);
    this->Yelan->TabIndex = 304;
    this->Yelan->Text = L"Yelan";
    this->Yelan->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Yelan->UseVisualStyleBackColor = false;
    this->Yelan->Click += gcnew System::EventHandler(this, &MyForm::Yelan_Click);
    // 
    // Yoimiya
    // 
    this->Yoimiya->AutoSize = true;
    this->Yoimiya->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Yoimiya->BackColor = System::Drawing::SystemColors::Control;
    this->Yoimiya->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Yoimiya->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Yoimiya->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Yoimiya->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Yoimiya.Image")));
    this->Yoimiya->Location = System::Drawing::Point(4, 2938);
    this->Yoimiya->Margin = System::Windows::Forms::Padding(4);
    this->Yoimiya->Name = L"Yoimiya";
    this->Yoimiya->Size = System::Drawing::Size(262, 318);
    this->Yoimiya->TabIndex = 305;
    this->Yoimiya->Text = L"Yoimiya";
    this->Yoimiya->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Yoimiya->UseVisualStyleBackColor = false;
    this->Yoimiya->Click += gcnew System::EventHandler(this, &MyForm::Yoimiya_Click);
    // 
    // Yunjin
    // 
    this->Yunjin->AutoSize = true;
    this->Yunjin->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Yunjin->BackColor = System::Drawing::SystemColors::Control;
    this->Yunjin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Yunjin->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Yunjin->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Yunjin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Yunjin.Image")));
    this->Yunjin->Location = System::Drawing::Point(274, 2938);
    this->Yunjin->Margin = System::Windows::Forms::Padding(4);
    this->Yunjin->Name = L"Yunjin";
    this->Yunjin->Size = System::Drawing::Size(262, 318);
    this->Yunjin->TabIndex = 306;
    this->Yunjin->Text = L"Yunjin";
    this->Yunjin->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Yunjin->UseVisualStyleBackColor = false;
    this->Yunjin->Click += gcnew System::EventHandler(this, &MyForm::Yunjin_Click);
    // 
    // Zhongli
    // 
    this->Zhongli->AutoSize = true;
    this->Zhongli->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->Zhongli->BackColor = System::Drawing::SystemColors::Control;
    this->Zhongli->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->Zhongli->DialogResult = System::Windows::Forms::DialogResult::Yes;
    this->Zhongli->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Zhongli->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Zhongli.Image")));
    this->Zhongli->Location = System::Drawing::Point(544, 2938);
    this->Zhongli->Margin = System::Windows::Forms::Padding(4);
    this->Zhongli->Name = L"Zhongli";
    this->Zhongli->Size = System::Drawing::Size(262, 318);
    this->Zhongli->TabIndex = 307;
    this->Zhongli->Text = L"Zhongli";
    this->Zhongli->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
    this->Zhongli->UseVisualStyleBackColor = false;
    this->Zhongli->Click += gcnew System::EventHandler(this, &MyForm::Zhongli_Click);
    // 
    // tabControl1
    // 
    this->tabControl1->Controls->Add(this->Characters_Page);
    this->tabControl1->Controls->Add(this->Albedo_Page);
    this->tabControl1->Controls->Add(this->Alhaitham_Page);
    this->tabControl1->Controls->Add(this->Aloy_Page);
    this->tabControl1->Controls->Add(this->Amber_Page);
    this->tabControl1->Controls->Add(this->Arataki_Itto_Page);
    this->tabControl1->Controls->Add(this->Arlecchino_Page);
    this->tabControl1->Controls->Add(this->Baizhu_Page);
    this->tabControl1->Controls->Add(this->Barbara_Page);
    this->tabControl1->Controls->Add(this->Beidou_Page);
    this->tabControl1->Controls->Add(this->Bennett_Page);
    this->tabControl1->Controls->Add(this->Candace_Page);
    this->tabControl1->Controls->Add(this->Charlotte_Page);
    this->tabControl1->Controls->Add(this->Chevreuse_Page);
    this->tabControl1->Controls->Add(this->Childe_Page);
    this->tabControl1->Controls->Add(this->Chiori_Page);
    this->tabControl1->Controls->Add(this->Chongyun_Page);
    this->tabControl1->Controls->Add(this->Clorinde_Page);
    this->tabControl1->Controls->Add(this->Collei_Page);
    this->tabControl1->Controls->Add(this->Cyno_Page);
    this->tabControl1->Controls->Add(this->Dehya_Page);
    this->tabControl1->Controls->Add(this->Diluc_Page);
    this->tabControl1->Controls->Add(this->Diona_Page);
    this->tabControl1->Controls->Add(this->Dori_Page);
    this->tabControl1->Controls->Add(this->Eula_Page);
    this->tabControl1->Controls->Add(this->Faruzan_Page);
    this->tabControl1->Controls->Add(this->Fischl_Page);
    this->tabControl1->Controls->Add(this->Freminet_Page);
    this->tabControl1->Controls->Add(this->Furina_Page);
    this->tabControl1->Controls->Add(this->Gaming_Page);
    this->tabControl1->Controls->Add(this->Ganyu_Page);
    this->tabControl1->Controls->Add(this->Gorou_Page);
    this->tabControl1->Controls->Add(this->Heizou_Page);
    this->tabControl1->Controls->Add(this->Hu_Tao_Page);
    this->tabControl1->Controls->Add(this->Jean_Page);
    this->tabControl1->Controls->Add(this->Kaeya_Page);
    this->tabControl1->Controls->Add(this->Kamisato_Ayaka_Page);
    this->tabControl1->Controls->Add(this->Kamisato_Ayato_Page);
    this->tabControl1->Controls->Add(this->Kaveh_Page);
    this->tabControl1->Controls->Add(this->Kazuha_Page);
    this->tabControl1->Controls->Add(this->Keqing_Page);
    this->tabControl1->Controls->Add(this->Kirara_Page);
    this->tabControl1->Controls->Add(this->Klee_Page);
    this->tabControl1->Controls->Add(this->Kujou_Sara_Page);
    this->tabControl1->Controls->Add(this->Kuki_Shinobu_Page);
    this->tabControl1->Controls->Add(this->Layla_Page);
    this->tabControl1->Controls->Add(this->Lisa_Page);
    this->tabControl1->Controls->Add(this->Lynette_Page);
    this->tabControl1->Controls->Add(this->Lynney_Page);
    this->tabControl1->Controls->Add(this->Mika_Page);
    this->tabControl1->Controls->Add(this->Mona_Page);
    this->tabControl1->Controls->Add(this->Nahida_Page);
    this->tabControl1->Controls->Add(this->Navia_Page);
    this->tabControl1->Controls->Add(this->Nilou_Page);
    this->tabControl1->Controls->Add(this->Ningguang_Page);
    this->tabControl1->Controls->Add(this->Noelle_Page);
    this->tabControl1->Controls->Add(this->Nuevillette_Page);
    this->tabControl1->Controls->Add(this->Qiqi_Page);
    this->tabControl1->Controls->Add(this->Raiden_Shogun_Page);
    this->tabControl1->Controls->Add(this->Razor_Page);
    this->tabControl1->Controls->Add(this->Rosaria_Page);
    this->tabControl1->Controls->Add(this->Sangonomiya_Kokomi_Page);
    this->tabControl1->Controls->Add(this->Sayu_Page);
    this->tabControl1->Controls->Add(this->Sethos_Page);
    this->tabControl1->Controls->Add(this->Shenhe_Page);
    this->tabControl1->Controls->Add(this->Sigewinne_Page);
    this->tabControl1->Controls->Add(this->Sucrose_Page);
    this->tabControl1->Controls->Add(this->Thoma_Page);
    this->tabControl1->Controls->Add(this->Tighnari_Page);
    this->tabControl1->Controls->Add(this->Traveler_Page);
    this->tabControl1->Controls->Add(this->Venti_Page);
    this->tabControl1->Controls->Add(this->Wanderer_Page);
    this->tabControl1->Controls->Add(this->Wriothesley_Page);
    this->tabControl1->Controls->Add(this->Xiangling_Page);
    this->tabControl1->Controls->Add(this->Xianyun_Page);
    this->tabControl1->Controls->Add(this->Xiao_Page);
    this->tabControl1->Controls->Add(this->Xingqiu_Page);
    this->tabControl1->Controls->Add(this->Xinyan_Page);
    this->tabControl1->Controls->Add(this->Yae_Miko_Page);
    this->tabControl1->Controls->Add(this->Yanfei_Page);
    this->tabControl1->Controls->Add(this->Yaoyao_Page);
    this->tabControl1->Controls->Add(this->Yelan_Page);
    this->tabControl1->Controls->Add(this->Yoimiya_Page);
    this->tabControl1->Controls->Add(this->Yunjin_Page);
    this->tabControl1->Controls->Add(this->Zhongli_Page);
    this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
    this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->tabControl1->Location = System::Drawing::Point(0, 40);
    this->tabControl1->Margin = System::Windows::Forms::Padding(4);
    this->tabControl1->Multiline = true;
    this->tabControl1->Name = L"tabControl1";
    this->tabControl1->SelectedIndex = 0;
    this->tabControl1->Size = System::Drawing::Size(2534, 1489);
    this->tabControl1->TabIndex = 500;
    // 
    // Aloy_Page
    // 
    this->Aloy_Page->Location = System::Drawing::Point(8, 160);
    this->Aloy_Page->Margin = System::Windows::Forms::Padding(6);
    this->Aloy_Page->Name = L"Aloy_Page";
    this->Aloy_Page->Padding = System::Windows::Forms::Padding(6);
    this->Aloy_Page->Size = System::Drawing::Size(2518, 1321);
    this->Aloy_Page->TabIndex = 2;
    this->Aloy_Page->Text = L"Aloy";
    this->Aloy_Page->UseVisualStyleBackColor = true;
    // 
    // Amber_Page
    // 
    this->Amber_Page->Location = System::Drawing::Point(8, 160);
    this->Amber_Page->Margin = System::Windows::Forms::Padding(6);
    this->Amber_Page->Name = L"Amber_Page";
    this->Amber_Page->Padding = System::Windows::Forms::Padding(6);
    this->Amber_Page->Size = System::Drawing::Size(2518, 1321);
    this->Amber_Page->TabIndex = 4;
    this->Amber_Page->Text = L"Amber";
    this->Amber_Page->UseVisualStyleBackColor = true;
    // 
    // Arataki_Itto_Page
    // 
    this->Arataki_Itto_Page->Location = System::Drawing::Point(8, 160);
    this->Arataki_Itto_Page->Margin = System::Windows::Forms::Padding(6);
    this->Arataki_Itto_Page->Name = L"Arataki_Itto_Page";
    this->Arataki_Itto_Page->Padding = System::Windows::Forms::Padding(6);
    this->Arataki_Itto_Page->Size = System::Drawing::Size(2518, 1321);
    this->Arataki_Itto_Page->TabIndex = 5;
    this->Arataki_Itto_Page->Text = L"Arataki Itto";
    this->Arataki_Itto_Page->UseVisualStyleBackColor = true;
    // 
    // Arlecchino_Page
    // 
    this->Arlecchino_Page->Location = System::Drawing::Point(8, 160);
    this->Arlecchino_Page->Margin = System::Windows::Forms::Padding(6);
    this->Arlecchino_Page->Name = L"Arlecchino_Page";
    this->Arlecchino_Page->Padding = System::Windows::Forms::Padding(6);
    this->Arlecchino_Page->Size = System::Drawing::Size(2518, 1321);
    this->Arlecchino_Page->TabIndex = 6;
    this->Arlecchino_Page->Text = L"Arlecchino";
    this->Arlecchino_Page->UseVisualStyleBackColor = true;
    // 
    // Baizhu_Page
    // 
    this->Baizhu_Page->Location = System::Drawing::Point(8, 160);
    this->Baizhu_Page->Margin = System::Windows::Forms::Padding(6);
    this->Baizhu_Page->Name = L"Baizhu_Page";
    this->Baizhu_Page->Padding = System::Windows::Forms::Padding(6);
    this->Baizhu_Page->Size = System::Drawing::Size(2518, 1321);
    this->Baizhu_Page->TabIndex = 7;
    this->Baizhu_Page->Text = L"Baizhu";
    this->Baizhu_Page->UseVisualStyleBackColor = true;
    // 
    // Barbara_Page
    // 
    this->Barbara_Page->Location = System::Drawing::Point(8, 160);
    this->Barbara_Page->Margin = System::Windows::Forms::Padding(6);
    this->Barbara_Page->Name = L"Barbara_Page";
    this->Barbara_Page->Padding = System::Windows::Forms::Padding(6);
    this->Barbara_Page->Size = System::Drawing::Size(2518, 1321);
    this->Barbara_Page->TabIndex = 10;
    this->Barbara_Page->Text = L"Barbara";
    this->Barbara_Page->UseVisualStyleBackColor = true;
    // 
    // Beidou_Page
    // 
    this->Beidou_Page->Location = System::Drawing::Point(8, 160);
    this->Beidou_Page->Margin = System::Windows::Forms::Padding(6);
    this->Beidou_Page->Name = L"Beidou_Page";
    this->Beidou_Page->Padding = System::Windows::Forms::Padding(6);
    this->Beidou_Page->Size = System::Drawing::Size(2518, 1321);
    this->Beidou_Page->TabIndex = 8;
    this->Beidou_Page->Text = L"Beidou";
    this->Beidou_Page->UseVisualStyleBackColor = true;
    // 
    // Bennett_Page
    // 
    this->Bennett_Page->Location = System::Drawing::Point(8, 160);
    this->Bennett_Page->Margin = System::Windows::Forms::Padding(6);
    this->Bennett_Page->Name = L"Bennett_Page";
    this->Bennett_Page->Padding = System::Windows::Forms::Padding(6);
    this->Bennett_Page->Size = System::Drawing::Size(2518, 1321);
    this->Bennett_Page->TabIndex = 9;
    this->Bennett_Page->Text = L"Bennett";
    this->Bennett_Page->UseVisualStyleBackColor = true;
    // 
    // Candace_Page
    // 
    this->Candace_Page->Location = System::Drawing::Point(8, 160);
    this->Candace_Page->Margin = System::Windows::Forms::Padding(6);
    this->Candace_Page->Name = L"Candace_Page";
    this->Candace_Page->Padding = System::Windows::Forms::Padding(6);
    this->Candace_Page->Size = System::Drawing::Size(2518, 1321);
    this->Candace_Page->TabIndex = 11;
    this->Candace_Page->Text = L"Candace";
    this->Candace_Page->UseVisualStyleBackColor = true;
    // 
    // Charlotte_Page
    // 
    this->Charlotte_Page->Location = System::Drawing::Point(8, 160);
    this->Charlotte_Page->Margin = System::Windows::Forms::Padding(6);
    this->Charlotte_Page->Name = L"Charlotte_Page";
    this->Charlotte_Page->Padding = System::Windows::Forms::Padding(6);
    this->Charlotte_Page->Size = System::Drawing::Size(2518, 1321);
    this->Charlotte_Page->TabIndex = 12;
    this->Charlotte_Page->Text = L"Charlotte";
    this->Charlotte_Page->UseVisualStyleBackColor = true;
    // 
    // Chevreuse_Page
    // 
    this->Chevreuse_Page->Location = System::Drawing::Point(8, 160);
    this->Chevreuse_Page->Margin = System::Windows::Forms::Padding(6);
    this->Chevreuse_Page->Name = L"Chevreuse_Page";
    this->Chevreuse_Page->Padding = System::Windows::Forms::Padding(6);
    this->Chevreuse_Page->Size = System::Drawing::Size(2518, 1321);
    this->Chevreuse_Page->TabIndex = 13;
    this->Chevreuse_Page->Text = L"Chevreuse";
    this->Chevreuse_Page->UseVisualStyleBackColor = true;
    // 
    // Childe_Page
    // 
    this->Childe_Page->Location = System::Drawing::Point(8, 160);
    this->Childe_Page->Margin = System::Windows::Forms::Padding(6);
    this->Childe_Page->Name = L"Childe_Page";
    this->Childe_Page->Padding = System::Windows::Forms::Padding(6);
    this->Childe_Page->Size = System::Drawing::Size(2518, 1321);
    this->Childe_Page->TabIndex = 14;
    this->Childe_Page->Text = L"Childe";
    this->Childe_Page->UseVisualStyleBackColor = true;
    // 
    // Chiori_Page
    // 
    this->Chiori_Page->Location = System::Drawing::Point(8, 160);
    this->Chiori_Page->Margin = System::Windows::Forms::Padding(6);
    this->Chiori_Page->Name = L"Chiori_Page";
    this->Chiori_Page->Padding = System::Windows::Forms::Padding(6);
    this->Chiori_Page->Size = System::Drawing::Size(2518, 1321);
    this->Chiori_Page->TabIndex = 15;
    this->Chiori_Page->Text = L"Chiori";
    this->Chiori_Page->UseVisualStyleBackColor = true;
    // 
    // Chongyun_Page
    // 
    this->Chongyun_Page->Location = System::Drawing::Point(8, 160);
    this->Chongyun_Page->Margin = System::Windows::Forms::Padding(6);
    this->Chongyun_Page->Name = L"Chongyun_Page";
    this->Chongyun_Page->Padding = System::Windows::Forms::Padding(6);
    this->Chongyun_Page->Size = System::Drawing::Size(2518, 1321);
    this->Chongyun_Page->TabIndex = 16;
    this->Chongyun_Page->Text = L"Chongyun";
    this->Chongyun_Page->UseVisualStyleBackColor = true;
    // 
    // Clorinde_Page
    // 
    this->Clorinde_Page->Location = System::Drawing::Point(8, 160);
    this->Clorinde_Page->Margin = System::Windows::Forms::Padding(6);
    this->Clorinde_Page->Name = L"Clorinde_Page";
    this->Clorinde_Page->Padding = System::Windows::Forms::Padding(6);
    this->Clorinde_Page->Size = System::Drawing::Size(2518, 1321);
    this->Clorinde_Page->TabIndex = 17;
    this->Clorinde_Page->Text = L"Clorinde";
    this->Clorinde_Page->UseVisualStyleBackColor = true;
    // 
    // Collei_Page
    // 
    this->Collei_Page->Location = System::Drawing::Point(8, 160);
    this->Collei_Page->Margin = System::Windows::Forms::Padding(6);
    this->Collei_Page->Name = L"Collei_Page";
    this->Collei_Page->Padding = System::Windows::Forms::Padding(6);
    this->Collei_Page->Size = System::Drawing::Size(2518, 1321);
    this->Collei_Page->TabIndex = 18;
    this->Collei_Page->Text = L"Collei";
    this->Collei_Page->UseVisualStyleBackColor = true;
    // 
    // Cyno_Page
    // 
    this->Cyno_Page->Location = System::Drawing::Point(8, 160);
    this->Cyno_Page->Margin = System::Windows::Forms::Padding(6);
    this->Cyno_Page->Name = L"Cyno_Page";
    this->Cyno_Page->Padding = System::Windows::Forms::Padding(6);
    this->Cyno_Page->Size = System::Drawing::Size(2518, 1321);
    this->Cyno_Page->TabIndex = 19;
    this->Cyno_Page->Text = L"Cyno";
    this->Cyno_Page->UseVisualStyleBackColor = true;
    // 
    // Dehya_Page
    // 
    this->Dehya_Page->Location = System::Drawing::Point(8, 160);
    this->Dehya_Page->Margin = System::Windows::Forms::Padding(6);
    this->Dehya_Page->Name = L"Dehya_Page";
    this->Dehya_Page->Padding = System::Windows::Forms::Padding(6);
    this->Dehya_Page->Size = System::Drawing::Size(2518, 1321);
    this->Dehya_Page->TabIndex = 20;
    this->Dehya_Page->Text = L"Dehya";
    this->Dehya_Page->UseVisualStyleBackColor = true;
    // 
    // Diluc_Page
    // 
    this->Diluc_Page->Location = System::Drawing::Point(8, 160);
    this->Diluc_Page->Margin = System::Windows::Forms::Padding(6);
    this->Diluc_Page->Name = L"Diluc_Page";
    this->Diluc_Page->Padding = System::Windows::Forms::Padding(6);
    this->Diluc_Page->Size = System::Drawing::Size(2518, 1321);
    this->Diluc_Page->TabIndex = 21;
    this->Diluc_Page->Text = L"Diluc";
    this->Diluc_Page->UseVisualStyleBackColor = true;
    // 
    // Diona_Page
    // 
    this->Diona_Page->Location = System::Drawing::Point(8, 160);
    this->Diona_Page->Margin = System::Windows::Forms::Padding(6);
    this->Diona_Page->Name = L"Diona_Page";
    this->Diona_Page->Padding = System::Windows::Forms::Padding(6);
    this->Diona_Page->Size = System::Drawing::Size(2518, 1321);
    this->Diona_Page->TabIndex = 22;
    this->Diona_Page->Text = L"Diona";
    this->Diona_Page->UseVisualStyleBackColor = true;
    // 
    // Dori_Page
    // 
    this->Dori_Page->Location = System::Drawing::Point(8, 160);
    this->Dori_Page->Margin = System::Windows::Forms::Padding(6);
    this->Dori_Page->Name = L"Dori_Page";
    this->Dori_Page->Padding = System::Windows::Forms::Padding(6);
    this->Dori_Page->Size = System::Drawing::Size(2518, 1321);
    this->Dori_Page->TabIndex = 23;
    this->Dori_Page->Text = L"Dori";
    this->Dori_Page->UseVisualStyleBackColor = true;
    // 
    // Eula_Page
    // 
    this->Eula_Page->Location = System::Drawing::Point(8, 160);
    this->Eula_Page->Margin = System::Windows::Forms::Padding(6);
    this->Eula_Page->Name = L"Eula_Page";
    this->Eula_Page->Padding = System::Windows::Forms::Padding(6);
    this->Eula_Page->Size = System::Drawing::Size(2518, 1321);
    this->Eula_Page->TabIndex = 24;
    this->Eula_Page->Text = L"Eula";
    this->Eula_Page->UseVisualStyleBackColor = true;
    // 
    // Faruzan_Page
    // 
    this->Faruzan_Page->Location = System::Drawing::Point(8, 160);
    this->Faruzan_Page->Margin = System::Windows::Forms::Padding(6);
    this->Faruzan_Page->Name = L"Faruzan_Page";
    this->Faruzan_Page->Padding = System::Windows::Forms::Padding(6);
    this->Faruzan_Page->Size = System::Drawing::Size(2518, 1321);
    this->Faruzan_Page->TabIndex = 25;
    this->Faruzan_Page->Text = L"Faruzan";
    this->Faruzan_Page->UseVisualStyleBackColor = true;
    // 
    // Fischl_Page
    // 
    this->Fischl_Page->Location = System::Drawing::Point(8, 160);
    this->Fischl_Page->Margin = System::Windows::Forms::Padding(6);
    this->Fischl_Page->Name = L"Fischl_Page";
    this->Fischl_Page->Padding = System::Windows::Forms::Padding(6);
    this->Fischl_Page->Size = System::Drawing::Size(2518, 1321);
    this->Fischl_Page->TabIndex = 26;
    this->Fischl_Page->Text = L"Fischl";
    this->Fischl_Page->UseVisualStyleBackColor = true;
    // 
    // Freminet_Page
    // 
    this->Freminet_Page->Location = System::Drawing::Point(8, 160);
    this->Freminet_Page->Margin = System::Windows::Forms::Padding(6);
    this->Freminet_Page->Name = L"Freminet_Page";
    this->Freminet_Page->Padding = System::Windows::Forms::Padding(6);
    this->Freminet_Page->Size = System::Drawing::Size(2518, 1321);
    this->Freminet_Page->TabIndex = 27;
    this->Freminet_Page->Text = L"Freminet";
    this->Freminet_Page->UseVisualStyleBackColor = true;
    // 
    // Furina_Page
    // 
    this->Furina_Page->Location = System::Drawing::Point(8, 160);
    this->Furina_Page->Margin = System::Windows::Forms::Padding(6);
    this->Furina_Page->Name = L"Furina_Page";
    this->Furina_Page->Padding = System::Windows::Forms::Padding(6);
    this->Furina_Page->Size = System::Drawing::Size(2518, 1321);
    this->Furina_Page->TabIndex = 28;
    this->Furina_Page->Text = L"Furina";
    this->Furina_Page->UseVisualStyleBackColor = true;
    // 
    // Gaming_Page
    // 
    this->Gaming_Page->Location = System::Drawing::Point(8, 160);
    this->Gaming_Page->Margin = System::Windows::Forms::Padding(6);
    this->Gaming_Page->Name = L"Gaming_Page";
    this->Gaming_Page->Padding = System::Windows::Forms::Padding(6);
    this->Gaming_Page->Size = System::Drawing::Size(2518, 1321);
    this->Gaming_Page->TabIndex = 29;
    this->Gaming_Page->Text = L"Gaming";
    this->Gaming_Page->UseVisualStyleBackColor = true;
    // 
    // Ganyu_Page
    // 
    this->Ganyu_Page->Location = System::Drawing::Point(8, 160);
    this->Ganyu_Page->Margin = System::Windows::Forms::Padding(6);
    this->Ganyu_Page->Name = L"Ganyu_Page";
    this->Ganyu_Page->Padding = System::Windows::Forms::Padding(6);
    this->Ganyu_Page->Size = System::Drawing::Size(2518, 1321);
    this->Ganyu_Page->TabIndex = 30;
    this->Ganyu_Page->Text = L"Ganyu";
    this->Ganyu_Page->UseVisualStyleBackColor = true;
    // 
    // Gorou_Page
    // 
    this->Gorou_Page->Location = System::Drawing::Point(8, 160);
    this->Gorou_Page->Margin = System::Windows::Forms::Padding(6);
    this->Gorou_Page->Name = L"Gorou_Page";
    this->Gorou_Page->Padding = System::Windows::Forms::Padding(6);
    this->Gorou_Page->Size = System::Drawing::Size(2518, 1321);
    this->Gorou_Page->TabIndex = 31;
    this->Gorou_Page->Text = L"Gorou";
    this->Gorou_Page->UseVisualStyleBackColor = true;
    // 
    // Heizou_Page
    // 
    this->Heizou_Page->Location = System::Drawing::Point(8, 160);
    this->Heizou_Page->Margin = System::Windows::Forms::Padding(6);
    this->Heizou_Page->Name = L"Heizou_Page";
    this->Heizou_Page->Padding = System::Windows::Forms::Padding(6);
    this->Heizou_Page->Size = System::Drawing::Size(2518, 1321);
    this->Heizou_Page->TabIndex = 32;
    this->Heizou_Page->Text = L"Heizou";
    this->Heizou_Page->UseVisualStyleBackColor = true;
    // 
    // Hu_Tao_Page
    // 
    this->Hu_Tao_Page->Location = System::Drawing::Point(8, 160);
    this->Hu_Tao_Page->Margin = System::Windows::Forms::Padding(6);
    this->Hu_Tao_Page->Name = L"Hu_Tao_Page";
    this->Hu_Tao_Page->Padding = System::Windows::Forms::Padding(6);
    this->Hu_Tao_Page->Size = System::Drawing::Size(2518, 1321);
    this->Hu_Tao_Page->TabIndex = 33;
    this->Hu_Tao_Page->Text = L"Hu_Tao";
    this->Hu_Tao_Page->UseVisualStyleBackColor = true;
    // 
    // Jean_Page
    // 
    this->Jean_Page->Location = System::Drawing::Point(8, 160);
    this->Jean_Page->Margin = System::Windows::Forms::Padding(6);
    this->Jean_Page->Name = L"Jean_Page";
    this->Jean_Page->Padding = System::Windows::Forms::Padding(6);
    this->Jean_Page->Size = System::Drawing::Size(2518, 1321);
    this->Jean_Page->TabIndex = 34;
    this->Jean_Page->Text = L"Jean";
    this->Jean_Page->UseVisualStyleBackColor = true;
    // 
    // Kaeya_Page
    // 
    this->Kaeya_Page->Location = System::Drawing::Point(8, 160);
    this->Kaeya_Page->Margin = System::Windows::Forms::Padding(6);
    this->Kaeya_Page->Name = L"Kaeya_Page";
    this->Kaeya_Page->Padding = System::Windows::Forms::Padding(6);
    this->Kaeya_Page->Size = System::Drawing::Size(2518, 1321);
    this->Kaeya_Page->TabIndex = 35;
    this->Kaeya_Page->Text = L"Kaeya";
    this->Kaeya_Page->UseVisualStyleBackColor = true;
    // 
    // Kamisato_Ayaka_Page
    // 
    this->Kamisato_Ayaka_Page->Location = System::Drawing::Point(8, 160);
    this->Kamisato_Ayaka_Page->Margin = System::Windows::Forms::Padding(6);
    this->Kamisato_Ayaka_Page->Name = L"Kamisato_Ayaka_Page";
    this->Kamisato_Ayaka_Page->Padding = System::Windows::Forms::Padding(6);
    this->Kamisato_Ayaka_Page->Size = System::Drawing::Size(2518, 1321);
    this->Kamisato_Ayaka_Page->TabIndex = 36;
    this->Kamisato_Ayaka_Page->Text = L"Kamisato Ayaka";
    this->Kamisato_Ayaka_Page->UseVisualStyleBackColor = true;
    // 
    // Kamisato_Ayato_Page
    // 
    this->Kamisato_Ayato_Page->Location = System::Drawing::Point(8, 160);
    this->Kamisato_Ayato_Page->Margin = System::Windows::Forms::Padding(6);
    this->Kamisato_Ayato_Page->Name = L"Kamisato_Ayato_Page";
    this->Kamisato_Ayato_Page->Padding = System::Windows::Forms::Padding(6);
    this->Kamisato_Ayato_Page->Size = System::Drawing::Size(2518, 1321);
    this->Kamisato_Ayato_Page->TabIndex = 37;
    this->Kamisato_Ayato_Page->Text = L"Kamisato Ayato";
    this->Kamisato_Ayato_Page->UseVisualStyleBackColor = true;
    // 
    // Kaveh_Page
    // 
    this->Kaveh_Page->Location = System::Drawing::Point(8, 160);
    this->Kaveh_Page->Margin = System::Windows::Forms::Padding(6);
    this->Kaveh_Page->Name = L"Kaveh_Page";
    this->Kaveh_Page->Padding = System::Windows::Forms::Padding(6);
    this->Kaveh_Page->Size = System::Drawing::Size(2518, 1321);
    this->Kaveh_Page->TabIndex = 38;
    this->Kaveh_Page->Text = L"Kaveh";
    this->Kaveh_Page->UseVisualStyleBackColor = true;
    // 
    // Kazuha_Page
    // 
    this->Kazuha_Page->Location = System::Drawing::Point(8, 160);
    this->Kazuha_Page->Margin = System::Windows::Forms::Padding(6);
    this->Kazuha_Page->Name = L"Kazuha_Page";
    this->Kazuha_Page->Padding = System::Windows::Forms::Padding(6);
    this->Kazuha_Page->Size = System::Drawing::Size(2518, 1321);
    this->Kazuha_Page->TabIndex = 39;
    this->Kazuha_Page->Text = L"Kazuha";
    this->Kazuha_Page->UseVisualStyleBackColor = true;
    // 
    // Keqing_Page
    // 
    this->Keqing_Page->Location = System::Drawing::Point(8, 160);
    this->Keqing_Page->Margin = System::Windows::Forms::Padding(6);
    this->Keqing_Page->Name = L"Keqing_Page";
    this->Keqing_Page->Padding = System::Windows::Forms::Padding(6);
    this->Keqing_Page->Size = System::Drawing::Size(2518, 1321);
    this->Keqing_Page->TabIndex = 40;
    this->Keqing_Page->Text = L"Keqing";
    this->Keqing_Page->UseVisualStyleBackColor = true;
    // 
    // Kirara_Page
    // 
    this->Kirara_Page->Location = System::Drawing::Point(8, 160);
    this->Kirara_Page->Margin = System::Windows::Forms::Padding(6);
    this->Kirara_Page->Name = L"Kirara_Page";
    this->Kirara_Page->Padding = System::Windows::Forms::Padding(6);
    this->Kirara_Page->Size = System::Drawing::Size(2518, 1321);
    this->Kirara_Page->TabIndex = 41;
    this->Kirara_Page->Text = L"Kirara";
    this->Kirara_Page->UseVisualStyleBackColor = true;
    // 
    // Klee_Page
    // 
    this->Klee_Page->Location = System::Drawing::Point(8, 160);
    this->Klee_Page->Margin = System::Windows::Forms::Padding(6);
    this->Klee_Page->Name = L"Klee_Page";
    this->Klee_Page->Padding = System::Windows::Forms::Padding(6);
    this->Klee_Page->Size = System::Drawing::Size(2518, 1321);
    this->Klee_Page->TabIndex = 42;
    this->Klee_Page->Text = L"Klee";
    this->Klee_Page->UseVisualStyleBackColor = true;
    // 
    // Kujou_Sara_Page
    // 
    this->Kujou_Sara_Page->Location = System::Drawing::Point(8, 160);
    this->Kujou_Sara_Page->Margin = System::Windows::Forms::Padding(6);
    this->Kujou_Sara_Page->Name = L"Kujou_Sara_Page";
    this->Kujou_Sara_Page->Padding = System::Windows::Forms::Padding(6);
    this->Kujou_Sara_Page->Size = System::Drawing::Size(2518, 1321);
    this->Kujou_Sara_Page->TabIndex = 43;
    this->Kujou_Sara_Page->Text = L"Kujou Sara";
    this->Kujou_Sara_Page->UseVisualStyleBackColor = true;
    // 
    // Kuki_Shinobu_Page
    // 
    this->Kuki_Shinobu_Page->Location = System::Drawing::Point(8, 160);
    this->Kuki_Shinobu_Page->Margin = System::Windows::Forms::Padding(6);
    this->Kuki_Shinobu_Page->Name = L"Kuki_Shinobu_Page";
    this->Kuki_Shinobu_Page->Padding = System::Windows::Forms::Padding(6);
    this->Kuki_Shinobu_Page->Size = System::Drawing::Size(2518, 1321);
    this->Kuki_Shinobu_Page->TabIndex = 44;
    this->Kuki_Shinobu_Page->Text = L"Kuki Shinobu";
    this->Kuki_Shinobu_Page->UseVisualStyleBackColor = true;
    // 
    // Layla_Page
    // 
    this->Layla_Page->Location = System::Drawing::Point(8, 160);
    this->Layla_Page->Margin = System::Windows::Forms::Padding(6);
    this->Layla_Page->Name = L"Layla_Page";
    this->Layla_Page->Padding = System::Windows::Forms::Padding(6);
    this->Layla_Page->Size = System::Drawing::Size(2518, 1321);
    this->Layla_Page->TabIndex = 45;
    this->Layla_Page->Text = L"Layla";
    this->Layla_Page->UseVisualStyleBackColor = true;
    // 
    // Lisa_Page
    // 
    this->Lisa_Page->Location = System::Drawing::Point(8, 160);
    this->Lisa_Page->Margin = System::Windows::Forms::Padding(6);
    this->Lisa_Page->Name = L"Lisa_Page";
    this->Lisa_Page->Padding = System::Windows::Forms::Padding(6);
    this->Lisa_Page->Size = System::Drawing::Size(2518, 1321);
    this->Lisa_Page->TabIndex = 46;
    this->Lisa_Page->Text = L"Lisa";
    this->Lisa_Page->UseVisualStyleBackColor = true;
    // 
    // Lynette_Page
    // 
    this->Lynette_Page->Location = System::Drawing::Point(8, 160);
    this->Lynette_Page->Margin = System::Windows::Forms::Padding(6);
    this->Lynette_Page->Name = L"Lynette_Page";
    this->Lynette_Page->Padding = System::Windows::Forms::Padding(6);
    this->Lynette_Page->Size = System::Drawing::Size(2518, 1321);
    this->Lynette_Page->TabIndex = 47;
    this->Lynette_Page->Text = L"Lynette";
    this->Lynette_Page->UseVisualStyleBackColor = true;
    // 
    // Lynney_Page
    // 
    this->Lynney_Page->Location = System::Drawing::Point(8, 160);
    this->Lynney_Page->Margin = System::Windows::Forms::Padding(6);
    this->Lynney_Page->Name = L"Lynney_Page";
    this->Lynney_Page->Padding = System::Windows::Forms::Padding(6);
    this->Lynney_Page->Size = System::Drawing::Size(2518, 1321);
    this->Lynney_Page->TabIndex = 48;
    this->Lynney_Page->Text = L"Lynney";
    this->Lynney_Page->UseVisualStyleBackColor = true;
    // 
    // Mika_Page
    // 
    this->Mika_Page->Location = System::Drawing::Point(8, 160);
    this->Mika_Page->Margin = System::Windows::Forms::Padding(6);
    this->Mika_Page->Name = L"Mika_Page";
    this->Mika_Page->Padding = System::Windows::Forms::Padding(6);
    this->Mika_Page->Size = System::Drawing::Size(2518, 1321);
    this->Mika_Page->TabIndex = 49;
    this->Mika_Page->Text = L"Mika";
    this->Mika_Page->UseVisualStyleBackColor = true;
    // 
    // Mona_Page
    // 
    this->Mona_Page->Location = System::Drawing::Point(8, 160);
    this->Mona_Page->Margin = System::Windows::Forms::Padding(6);
    this->Mona_Page->Name = L"Mona_Page";
    this->Mona_Page->Padding = System::Windows::Forms::Padding(6);
    this->Mona_Page->Size = System::Drawing::Size(2518, 1321);
    this->Mona_Page->TabIndex = 50;
    this->Mona_Page->Text = L"Mona";
    this->Mona_Page->UseVisualStyleBackColor = true;
    // 
    // Nahida_Page
    // 
    this->Nahida_Page->Location = System::Drawing::Point(8, 160);
    this->Nahida_Page->Margin = System::Windows::Forms::Padding(6);
    this->Nahida_Page->Name = L"Nahida_Page";
    this->Nahida_Page->Padding = System::Windows::Forms::Padding(6);
    this->Nahida_Page->Size = System::Drawing::Size(2518, 1321);
    this->Nahida_Page->TabIndex = 51;
    this->Nahida_Page->Text = L"Nahida";
    this->Nahida_Page->UseVisualStyleBackColor = true;
    // 
    // Navia_Page
    // 
    this->Navia_Page->Location = System::Drawing::Point(8, 160);
    this->Navia_Page->Margin = System::Windows::Forms::Padding(6);
    this->Navia_Page->Name = L"Navia_Page";
    this->Navia_Page->Padding = System::Windows::Forms::Padding(6);
    this->Navia_Page->Size = System::Drawing::Size(2518, 1321);
    this->Navia_Page->TabIndex = 52;
    this->Navia_Page->Text = L"Navia";
    this->Navia_Page->UseVisualStyleBackColor = true;
    // 
    // Nilou_Page
    // 
    this->Nilou_Page->Location = System::Drawing::Point(8, 160);
    this->Nilou_Page->Margin = System::Windows::Forms::Padding(6);
    this->Nilou_Page->Name = L"Nilou_Page";
    this->Nilou_Page->Padding = System::Windows::Forms::Padding(6);
    this->Nilou_Page->Size = System::Drawing::Size(2518, 1321);
    this->Nilou_Page->TabIndex = 53;
    this->Nilou_Page->Text = L"Nilou";
    this->Nilou_Page->UseVisualStyleBackColor = true;
    // 
    // Ningguang_Page
    // 
    this->Ningguang_Page->Location = System::Drawing::Point(8, 160);
    this->Ningguang_Page->Margin = System::Windows::Forms::Padding(6);
    this->Ningguang_Page->Name = L"Ningguang_Page";
    this->Ningguang_Page->Padding = System::Windows::Forms::Padding(6);
    this->Ningguang_Page->Size = System::Drawing::Size(2518, 1321);
    this->Ningguang_Page->TabIndex = 54;
    this->Ningguang_Page->Text = L"Ningguang";
    this->Ningguang_Page->UseVisualStyleBackColor = true;
    // 
    // Noelle_Page
    // 
    this->Noelle_Page->Location = System::Drawing::Point(8, 160);
    this->Noelle_Page->Margin = System::Windows::Forms::Padding(6);
    this->Noelle_Page->Name = L"Noelle_Page";
    this->Noelle_Page->Padding = System::Windows::Forms::Padding(6);
    this->Noelle_Page->Size = System::Drawing::Size(2518, 1321);
    this->Noelle_Page->TabIndex = 55;
    this->Noelle_Page->Text = L"Noelle";
    this->Noelle_Page->UseVisualStyleBackColor = true;
    // 
    // Nuevillette_Page
    // 
    this->Nuevillette_Page->Location = System::Drawing::Point(8, 160);
    this->Nuevillette_Page->Margin = System::Windows::Forms::Padding(6);
    this->Nuevillette_Page->Name = L"Nuevillette_Page";
    this->Nuevillette_Page->Padding = System::Windows::Forms::Padding(6);
    this->Nuevillette_Page->Size = System::Drawing::Size(2518, 1321);
    this->Nuevillette_Page->TabIndex = 56;
    this->Nuevillette_Page->Text = L"Nuevillette";
    this->Nuevillette_Page->UseVisualStyleBackColor = true;
    // 
    // Qiqi_Page
    // 
    this->Qiqi_Page->Location = System::Drawing::Point(8, 160);
    this->Qiqi_Page->Margin = System::Windows::Forms::Padding(6);
    this->Qiqi_Page->Name = L"Qiqi_Page";
    this->Qiqi_Page->Padding = System::Windows::Forms::Padding(6);
    this->Qiqi_Page->Size = System::Drawing::Size(2518, 1321);
    this->Qiqi_Page->TabIndex = 57;
    this->Qiqi_Page->Text = L"Qiqi";
    this->Qiqi_Page->UseVisualStyleBackColor = true;
    // 
    // Raiden_Shogun_Page
    // 
    this->Raiden_Shogun_Page->Location = System::Drawing::Point(8, 160);
    this->Raiden_Shogun_Page->Margin = System::Windows::Forms::Padding(6);
    this->Raiden_Shogun_Page->Name = L"Raiden_Shogun_Page";
    this->Raiden_Shogun_Page->Padding = System::Windows::Forms::Padding(6);
    this->Raiden_Shogun_Page->Size = System::Drawing::Size(2518, 1321);
    this->Raiden_Shogun_Page->TabIndex = 58;
    this->Raiden_Shogun_Page->Text = L"Raiden Shogun";
    this->Raiden_Shogun_Page->UseVisualStyleBackColor = true;
    // 
    // Razor_Page
    // 
    this->Razor_Page->Location = System::Drawing::Point(8, 160);
    this->Razor_Page->Margin = System::Windows::Forms::Padding(6);
    this->Razor_Page->Name = L"Razor_Page";
    this->Razor_Page->Padding = System::Windows::Forms::Padding(6);
    this->Razor_Page->Size = System::Drawing::Size(2518, 1321);
    this->Razor_Page->TabIndex = 59;
    this->Razor_Page->Text = L"Razor";
    this->Razor_Page->UseVisualStyleBackColor = true;
    // 
    // Rosaria_Page
    // 
    this->Rosaria_Page->Location = System::Drawing::Point(8, 160);
    this->Rosaria_Page->Margin = System::Windows::Forms::Padding(6);
    this->Rosaria_Page->Name = L"Rosaria_Page";
    this->Rosaria_Page->Padding = System::Windows::Forms::Padding(6);
    this->Rosaria_Page->Size = System::Drawing::Size(2518, 1321);
    this->Rosaria_Page->TabIndex = 60;
    this->Rosaria_Page->Text = L"Rosaria";
    this->Rosaria_Page->UseVisualStyleBackColor = true;
    // 
    // Sangonomiya_Kokomi_Page
    // 
    this->Sangonomiya_Kokomi_Page->Location = System::Drawing::Point(8, 160);
    this->Sangonomiya_Kokomi_Page->Margin = System::Windows::Forms::Padding(6);
    this->Sangonomiya_Kokomi_Page->Name = L"Sangonomiya_Kokomi_Page";
    this->Sangonomiya_Kokomi_Page->Padding = System::Windows::Forms::Padding(6);
    this->Sangonomiya_Kokomi_Page->Size = System::Drawing::Size(2518, 1321);
    this->Sangonomiya_Kokomi_Page->TabIndex = 61;
    this->Sangonomiya_Kokomi_Page->Text = L"Sangonomiya Kokomi";
    this->Sangonomiya_Kokomi_Page->UseVisualStyleBackColor = true;
    // 
    // Sayu_Page
    // 
    this->Sayu_Page->Location = System::Drawing::Point(8, 160);
    this->Sayu_Page->Margin = System::Windows::Forms::Padding(6);
    this->Sayu_Page->Name = L"Sayu_Page";
    this->Sayu_Page->Padding = System::Windows::Forms::Padding(6);
    this->Sayu_Page->Size = System::Drawing::Size(2518, 1321);
    this->Sayu_Page->TabIndex = 62;
    this->Sayu_Page->Text = L"Sayu";
    this->Sayu_Page->UseVisualStyleBackColor = true;
    // 
    // Sethos_Page
    // 
    this->Sethos_Page->Location = System::Drawing::Point(8, 160);
    this->Sethos_Page->Margin = System::Windows::Forms::Padding(6);
    this->Sethos_Page->Name = L"Sethos_Page";
    this->Sethos_Page->Padding = System::Windows::Forms::Padding(6);
    this->Sethos_Page->Size = System::Drawing::Size(2518, 1321);
    this->Sethos_Page->TabIndex = 63;
    this->Sethos_Page->Text = L"Sethos";
    this->Sethos_Page->UseVisualStyleBackColor = true;
    // 
    // Shenhe_Page
    // 
    this->Shenhe_Page->Location = System::Drawing::Point(8, 160);
    this->Shenhe_Page->Margin = System::Windows::Forms::Padding(6);
    this->Shenhe_Page->Name = L"Shenhe_Page";
    this->Shenhe_Page->Padding = System::Windows::Forms::Padding(6);
    this->Shenhe_Page->Size = System::Drawing::Size(2518, 1321);
    this->Shenhe_Page->TabIndex = 64;
    this->Shenhe_Page->Text = L"Shenhe";
    this->Shenhe_Page->UseVisualStyleBackColor = true;
    // 
    // Sigewinne_Page
    // 
    this->Sigewinne_Page->Location = System::Drawing::Point(8, 160);
    this->Sigewinne_Page->Margin = System::Windows::Forms::Padding(6);
    this->Sigewinne_Page->Name = L"Sigewinne_Page";
    this->Sigewinne_Page->Padding = System::Windows::Forms::Padding(6);
    this->Sigewinne_Page->Size = System::Drawing::Size(2518, 1321);
    this->Sigewinne_Page->TabIndex = 65;
    this->Sigewinne_Page->Text = L"Sigewinne";
    this->Sigewinne_Page->UseVisualStyleBackColor = true;
    // 
    // Sucrose_Page
    // 
    this->Sucrose_Page->Location = System::Drawing::Point(8, 160);
    this->Sucrose_Page->Margin = System::Windows::Forms::Padding(6);
    this->Sucrose_Page->Name = L"Sucrose_Page";
    this->Sucrose_Page->Padding = System::Windows::Forms::Padding(6);
    this->Sucrose_Page->Size = System::Drawing::Size(2518, 1321);
    this->Sucrose_Page->TabIndex = 66;
    this->Sucrose_Page->Text = L"Sucrose";
    this->Sucrose_Page->UseVisualStyleBackColor = true;
    // 
    // Thoma_Page
    // 
    this->Thoma_Page->Location = System::Drawing::Point(8, 160);
    this->Thoma_Page->Margin = System::Windows::Forms::Padding(6);
    this->Thoma_Page->Name = L"Thoma_Page";
    this->Thoma_Page->Padding = System::Windows::Forms::Padding(6);
    this->Thoma_Page->Size = System::Drawing::Size(2518, 1321);
    this->Thoma_Page->TabIndex = 67;
    this->Thoma_Page->Text = L"Thoma";
    this->Thoma_Page->UseVisualStyleBackColor = true;
    // 
    // Tighnari_Page
    // 
    this->Tighnari_Page->Location = System::Drawing::Point(8, 160);
    this->Tighnari_Page->Margin = System::Windows::Forms::Padding(6);
    this->Tighnari_Page->Name = L"Tighnari_Page";
    this->Tighnari_Page->Padding = System::Windows::Forms::Padding(6);
    this->Tighnari_Page->Size = System::Drawing::Size(2518, 1321);
    this->Tighnari_Page->TabIndex = 69;
    this->Tighnari_Page->Text = L"Tighnari";
    this->Tighnari_Page->UseVisualStyleBackColor = true;
    // 
    // Traveler_Page
    // 
    this->Traveler_Page->Location = System::Drawing::Point(8, 160);
    this->Traveler_Page->Name = L"Traveler_Page";
    this->Traveler_Page->Padding = System::Windows::Forms::Padding(3);
    this->Traveler_Page->Size = System::Drawing::Size(2518, 1321);
    this->Traveler_Page->TabIndex = 68;
    this->Traveler_Page->Text = L"Traveler";
    this->Traveler_Page->UseVisualStyleBackColor = true;
    // 
    // Venti_Page
    // 
    this->Venti_Page->Location = System::Drawing::Point(8, 160);
    this->Venti_Page->Margin = System::Windows::Forms::Padding(6);
    this->Venti_Page->Name = L"Venti_Page";
    this->Venti_Page->Padding = System::Windows::Forms::Padding(6);
    this->Venti_Page->Size = System::Drawing::Size(2518, 1321);
    this->Venti_Page->TabIndex = 70;
    this->Venti_Page->Text = L"Venti";
    this->Venti_Page->UseVisualStyleBackColor = true;
    // 
    // Wanderer_Page
    // 
    this->Wanderer_Page->Location = System::Drawing::Point(8, 160);
    this->Wanderer_Page->Margin = System::Windows::Forms::Padding(6);
    this->Wanderer_Page->Name = L"Wanderer_Page";
    this->Wanderer_Page->Padding = System::Windows::Forms::Padding(6);
    this->Wanderer_Page->Size = System::Drawing::Size(2518, 1321);
    this->Wanderer_Page->TabIndex = 71;
    this->Wanderer_Page->Text = L"Wanderer";
    this->Wanderer_Page->UseVisualStyleBackColor = true;
    // 
    // Wriothesley_Page
    // 
    this->Wriothesley_Page->Location = System::Drawing::Point(8, 160);
    this->Wriothesley_Page->Margin = System::Windows::Forms::Padding(6);
    this->Wriothesley_Page->Name = L"Wriothesley_Page";
    this->Wriothesley_Page->Padding = System::Windows::Forms::Padding(6);
    this->Wriothesley_Page->Size = System::Drawing::Size(2518, 1321);
    this->Wriothesley_Page->TabIndex = 72;
    this->Wriothesley_Page->Text = L"Wriothesley";
    this->Wriothesley_Page->UseVisualStyleBackColor = true;
    // 
    // Xiangling_Page
    // 
    this->Xiangling_Page->Location = System::Drawing::Point(8, 160);
    this->Xiangling_Page->Margin = System::Windows::Forms::Padding(6);
    this->Xiangling_Page->Name = L"Xiangling_Page";
    this->Xiangling_Page->Padding = System::Windows::Forms::Padding(6);
    this->Xiangling_Page->Size = System::Drawing::Size(2518, 1321);
    this->Xiangling_Page->TabIndex = 73;
    this->Xiangling_Page->Text = L"Xiangling";
    this->Xiangling_Page->UseVisualStyleBackColor = true;
    // 
    // Xianyun_Page
    // 
    this->Xianyun_Page->Location = System::Drawing::Point(8, 160);
    this->Xianyun_Page->Margin = System::Windows::Forms::Padding(6);
    this->Xianyun_Page->Name = L"Xianyun_Page";
    this->Xianyun_Page->Padding = System::Windows::Forms::Padding(6);
    this->Xianyun_Page->Size = System::Drawing::Size(2518, 1321);
    this->Xianyun_Page->TabIndex = 74;
    this->Xianyun_Page->Text = L"Xianyun";
    this->Xianyun_Page->UseVisualStyleBackColor = true;
    // 
    // Xiao_Page
    // 
    this->Xiao_Page->Location = System::Drawing::Point(8, 160);
    this->Xiao_Page->Margin = System::Windows::Forms::Padding(6);
    this->Xiao_Page->Name = L"Xiao_Page";
    this->Xiao_Page->Padding = System::Windows::Forms::Padding(6);
    this->Xiao_Page->Size = System::Drawing::Size(2518, 1321);
    this->Xiao_Page->TabIndex = 75;
    this->Xiao_Page->Text = L"Xiao";
    this->Xiao_Page->UseVisualStyleBackColor = true;
    // 
    // Xingqiu_Page
    // 
    this->Xingqiu_Page->Location = System::Drawing::Point(8, 160);
    this->Xingqiu_Page->Margin = System::Windows::Forms::Padding(6);
    this->Xingqiu_Page->Name = L"Xingqiu_Page";
    this->Xingqiu_Page->Padding = System::Windows::Forms::Padding(6);
    this->Xingqiu_Page->Size = System::Drawing::Size(2518, 1321);
    this->Xingqiu_Page->TabIndex = 76;
    this->Xingqiu_Page->Text = L"Xingqiu";
    this->Xingqiu_Page->UseVisualStyleBackColor = true;
    // 
    // Xinyan_Page
    // 
    this->Xinyan_Page->Location = System::Drawing::Point(8, 160);
    this->Xinyan_Page->Margin = System::Windows::Forms::Padding(6);
    this->Xinyan_Page->Name = L"Xinyan_Page";
    this->Xinyan_Page->Padding = System::Windows::Forms::Padding(6);
    this->Xinyan_Page->Size = System::Drawing::Size(2518, 1321);
    this->Xinyan_Page->TabIndex = 77;
    this->Xinyan_Page->Text = L"Xinyan";
    this->Xinyan_Page->UseVisualStyleBackColor = true;
    // 
    // Yae_Miko_Page
    // 
    this->Yae_Miko_Page->Location = System::Drawing::Point(8, 160);
    this->Yae_Miko_Page->Margin = System::Windows::Forms::Padding(6);
    this->Yae_Miko_Page->Name = L"Yae_Miko_Page";
    this->Yae_Miko_Page->Padding = System::Windows::Forms::Padding(6);
    this->Yae_Miko_Page->Size = System::Drawing::Size(2518, 1321);
    this->Yae_Miko_Page->TabIndex = 78;
    this->Yae_Miko_Page->Text = L"Yae Miko";
    this->Yae_Miko_Page->UseVisualStyleBackColor = true;
    // 
    // Yanfei_Page
    // 
    this->Yanfei_Page->Location = System::Drawing::Point(8, 160);
    this->Yanfei_Page->Margin = System::Windows::Forms::Padding(6);
    this->Yanfei_Page->Name = L"Yanfei_Page";
    this->Yanfei_Page->Padding = System::Windows::Forms::Padding(6);
    this->Yanfei_Page->Size = System::Drawing::Size(2518, 1321);
    this->Yanfei_Page->TabIndex = 79;
    this->Yanfei_Page->Text = L"Yanfei";
    this->Yanfei_Page->UseVisualStyleBackColor = true;
    // 
    // Yaoyao_Page
    // 
    this->Yaoyao_Page->Location = System::Drawing::Point(8, 160);
    this->Yaoyao_Page->Margin = System::Windows::Forms::Padding(6);
    this->Yaoyao_Page->Name = L"Yaoyao_Page";
    this->Yaoyao_Page->Padding = System::Windows::Forms::Padding(6);
    this->Yaoyao_Page->Size = System::Drawing::Size(2518, 1321);
    this->Yaoyao_Page->TabIndex = 80;
    this->Yaoyao_Page->Text = L"Yaoyao";
    this->Yaoyao_Page->UseVisualStyleBackColor = true;
    // 
    // Yelan_Page
    // 
    this->Yelan_Page->Location = System::Drawing::Point(8, 160);
    this->Yelan_Page->Margin = System::Windows::Forms::Padding(6);
    this->Yelan_Page->Name = L"Yelan_Page";
    this->Yelan_Page->Padding = System::Windows::Forms::Padding(6);
    this->Yelan_Page->Size = System::Drawing::Size(2518, 1321);
    this->Yelan_Page->TabIndex = 81;
    this->Yelan_Page->Text = L"Yelan";
    this->Yelan_Page->UseVisualStyleBackColor = true;
    // 
    // Yoimiya_Page
    // 
    this->Yoimiya_Page->Location = System::Drawing::Point(8, 160);
    this->Yoimiya_Page->Margin = System::Windows::Forms::Padding(6);
    this->Yoimiya_Page->Name = L"Yoimiya_Page";
    this->Yoimiya_Page->Padding = System::Windows::Forms::Padding(6);
    this->Yoimiya_Page->Size = System::Drawing::Size(2518, 1321);
    this->Yoimiya_Page->TabIndex = 82;
    this->Yoimiya_Page->Text = L"Yoimiya";
    this->Yoimiya_Page->UseVisualStyleBackColor = true;
    // 
    // Yunjin_Page
    // 
    this->Yunjin_Page->Location = System::Drawing::Point(8, 160);
    this->Yunjin_Page->Margin = System::Windows::Forms::Padding(6);
    this->Yunjin_Page->Name = L"Yunjin_Page";
    this->Yunjin_Page->Padding = System::Windows::Forms::Padding(6);
    this->Yunjin_Page->Size = System::Drawing::Size(2518, 1321);
    this->Yunjin_Page->TabIndex = 83;
    this->Yunjin_Page->Text = L"Yunjin";
    this->Yunjin_Page->UseVisualStyleBackColor = true;
    // 
    // Zhongli_Page
    // 
    this->Zhongli_Page->Location = System::Drawing::Point(8, 160);
    this->Zhongli_Page->Margin = System::Windows::Forms::Padding(6);
    this->Zhongli_Page->Name = L"Zhongli_Page";
    this->Zhongli_Page->Padding = System::Windows::Forms::Padding(6);
    this->Zhongli_Page->Size = System::Drawing::Size(2518, 1321);
    this->Zhongli_Page->TabIndex = 84;
    this->Zhongli_Page->Text = L"Zhongli";
    this->Zhongli_Page->UseVisualStyleBackColor = true;
    // 
    // settingsToolStripMenuItem
    // 
    this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
    this->settingsToolStripMenuItem->Size = System::Drawing::Size(120, 36);
    this->settingsToolStripMenuItem->Text = L"Settings";
    // 
    // homeToolStripMenuItem
    // 
    this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
    this->homeToolStripMenuItem->Size = System::Drawing::Size(99, 36);
    this->homeToolStripMenuItem->Text = L"Home";
    this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::homeToolStripMenuItem_Click);
    // 
    // helpToolStripMenuItem
    // 
    this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
    this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
    this->helpToolStripMenuItem->Size = System::Drawing::Size(84, 36);
    this->helpToolStripMenuItem->Text = L"Help";
    // 
    // aboutToolStripMenuItem
    // 
    this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
    this->aboutToolStripMenuItem->Size = System::Drawing::Size(212, 44);
    this->aboutToolStripMenuItem->Text = L"About";
    // 
    // menuStrip1
    // 
    this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
    this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
    this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
        this->settingsToolStripMenuItem,
            this->homeToolStripMenuItem, this->helpToolStripMenuItem
    });
    this->menuStrip1->Location = System::Drawing::Point(0, 0);
    this->menuStrip1->Name = L"menuStrip1";
    this->menuStrip1->Size = System::Drawing::Size(2534, 40);
    this->menuStrip1->TabIndex = 0;
    this->menuStrip1->Text = L"menuStrip1";
    this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
    // 
    // MyForm
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->BackColor = System::Drawing::SystemColors::Control;
    this->ClientSize = System::Drawing::Size(2534, 1529);
    this->Controls->Add(this->tabControl1);
    this->Controls->Add(this->menuStrip1);
    this->MainMenuStrip = this->menuStrip1;
    this->Margin = System::Windows::Forms::Padding(4);
    this->Name = L"MyForm";
    this->Text = L"Genshin Optimizer";
    this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
    this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
    this->Albedo_Page->ResumeLayout(false);
    this->Albedo_Page->PerformLayout();
    this->flowLayoutPanel1->ResumeLayout(false);
    this->flowLayoutPanel2->ResumeLayout(false);
    this->flowLayoutPanel2->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_Motion_Value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_Enemy_Res))->EndInit();
    this->tabControl2->ResumeLayout(false);
    this->tabPage1->ResumeLayout(false);
    this->flowLayoutPanel9->ResumeLayout(false);
    this->flowLayoutPanel9->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_AverageDmg))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_NoCritDmg))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_WithCritDmg))->EndInit();
    this->flowLayoutPanel7->ResumeLayout(false);
    this->flowLayoutPanel7->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalATK_Before))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalDEF_Before))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalHP_Before))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalBASE_DMG_Before))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalEM_Before))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalER_Before))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalDMGPercent_Before))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalRatePercent_Before))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalCritDMG_Before))->EndInit();
    this->tabPage2->ResumeLayout(false);
    this->flowLayoutPanel4->ResumeLayout(false);
    this->flowLayoutPanel4->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_No_Crit_After_value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_Average_After_value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_With_Crit_After_value))->EndInit();
    this->flowLayoutPanel13->ResumeLayout(false);
    this->flowLayoutPanel13->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalCRITDMG_After))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalRatePercent_After))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalDMGPercent_After))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalER_After))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalEM_After))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalBASE_DMG_After))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalHP_After))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalDEF_After))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_TotalATK_After))->EndInit();
    this->tabPage3->ResumeLayout(false);
    this->flowLayoutPanel3->ResumeLayout(false);
    this->flowLayoutPanel6->ResumeLayout(false);
    this->flowLayoutPanel6->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ATKPercent_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_DEFPercent_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_HPPercent_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATATK_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATDEF_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATHP_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_EM_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ERPercent_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_RatePercent_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_CRITDMG_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ATKPercent_MS_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_HPPercent_MS_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_DEFPercent_MS_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_EM_MS_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_CRITDMG_MS_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_RatePercent_MS_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_DMGPercent_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ERPercent_MS_Rolls))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ATKPercent_Value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_CRITDMG_Value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_RatePercent_Value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_DMG_Percent_Value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_ER_Value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_EM_Value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATHP_Value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATDEF_Value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_FLATATK_Value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_HPPercent_Value))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Albedo_DEFPercent_Value))->EndInit();
    this->Characters_Page->ResumeLayout(false);
    this->Characters_Page->PerformLayout();
    this->FlowLayout_Characters->ResumeLayout(false);
    this->FlowLayout_Characters->PerformLayout();
    this->tabControl1->ResumeLayout(false);
    this->menuStrip1->ResumeLayout(false);
    this->menuStrip1->PerformLayout();
    this->ResumeLayout(false);
    this->PerformLayout();

}
#pragma endregion
public: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
public: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
public: System::Void Scroll_Bar_Characters_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
}
//Character Button Clicks
public: System::Void Albedo_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 1;
}
public: System::Void Alhaitham_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 2;
}
public: System::Void Aloy_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 3;
}
public: System::Void Amber_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 4;
}
public: System::Void Arataki_Itto_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 5;
}
public: System::Void Arlecchino_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 6;
}
public: System::Void Baizhu_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 7;
}
public: System::Void Barbara_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 8;
}
public: System::Void Beidou_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 9;
}
public: System::Void Bennett_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 10;
}
public: System::Void Candance_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 11;
}
public: System::Void Charlotte_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 12;
}
public: System::Void Chevreuse_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 13;
}
public: System::Void Childe_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 14;
}
public: System::Void Chiori_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 15;
}
public: System::Void Chongyun_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 16;
}
public: System::Void Clorinde_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 17;
}
public: System::Void Collei_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 18;
}
public: System::Void Cyno_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 19;
}
public: System::Void Dehya_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 20;
}
public: System::Void Diluc_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 21;
}
public: System::Void Diona_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 22;
}
public: System::Void Dori_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 23;
}
public: System::Void Eula_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 24;
}
public: System::Void Faruzan_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 25;
}
public: System::Void Fischl_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 26;
}
public: System::Void Freminet_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 27;
}
public: System::Void Furina_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 28;
}
public: System::Void Gaming_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 29;
}
public: System::Void Ganyu_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 30;
}
public: System::Void Gorou_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 31;
}
public: System::Void Heizou_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 32;
}
public: System::Void Hu_Tao_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 33;
}
public: System::Void Jean_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 34;
}
public: System::Void Kaeya_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 35;
}
public: System::Void Kamisato_Ayaka_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 36;
}
public: System::Void Kamisato_Ayato_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 37;
}
public: System::Void Kaveh_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 38;
}
public: System::Void Kazuha_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 39;
}
public: System::Void Keqing_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 40;
}
public: System::Void Kirara_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 41;
}
public: System::Void Klee_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 42;
}
public: System::Void Kujou_Sara_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 43;
}
public: System::Void Kuki_Shinobu_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 44;
}
public: System::Void Layla_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 45;
}
public: System::Void Lisa_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 46;
}
public: System::Void Lynette_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 47;
}
public: System::Void Lynney_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 48;
}
public: System::Void Mika_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 49;
}
public: System::Void Mona_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 50;
}
public: System::Void Nahida_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 51;
}
public: System::Void Navia_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 52;
}
public: System::Void Neuvillette_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 53;
}
public: System::Void Nilou_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 54;
}
public: System::Void Noelle_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 55;
}
public: System::Void Ningguang_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 56;
}
public: System::Void Qiqi_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 57;
}
public: System::Void Raiden_Shogun_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 58;
}
public: System::Void Razor_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 59;
}
public: System::Void Rosaria_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 60;
}
public: System::Void Sangonomiya_Kokomi_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 61;
}
public: System::Void Sayu_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 62;
}
public: System::Void Sethos_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 63;
}
public: System::Void Shenhe_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 64;
}
public: System::Void Sucrose_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 66;
}
public: System::Void Thoma_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 67;
}
public: System::Void Tighnari_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 68;
}
public: System::Void Traveler_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 69;
}
public: System::Void Venti_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 70;
}
public: System::Void Wanderer_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 71;
}
public: System::Void Wriothesley_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 72;
}
public: System::Void Xiangling_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 73;
}
public: System::Void Xianyun_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 74;
}
public: System::Void Xiao_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 75;
}
public: System::Void Xingqiu_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 76;
}
public: System::Void Xinyan_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 77;
}
public: System::Void Yae_Miko_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 78;
}
public: System::Void Yanfei_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 79;
}
public: System::Void Yaoyao_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 80;
}
public: System::Void Yelan_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 81;
}
public: System::Void Yoimiya_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 82;
}
public: System::Void Yunjin_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 83;
}
public: System::Void Zhongli_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 84;
}
public: System::Void homeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
tabControl1->SelectedIndex = 0;
}
public: System::Void Albedo_Enemy_Level_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
UIW::Albedo_Enemy_Level = 1 + this->Albedo_Enemy_Level->SelectedIndex;}
public: System::Void Albedo_Weapons_Lose_Focus(System::Object^ sender, System::EventArgs^ e) {
int Reference_Number = 0;
for (int i = 0;i < 170;i++) {
if (String::CompareOrdinal(this->Albedo_Weapons->Text,UIW::Variables::Weapon_Array[i].name) == 0) {
UIW::Albedo_base_atk_2 = UIW::Variables::Weapon_Array[i].base_atk;
Reference_Number = 1;
break;}
}
if (Reference_Number == 0) {
this->Albedo_Weapons->Text = L"Please Reselect a Valid Weapon";}
}
public: System::Void Albedo_Weapons_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
if (e->KeyChar == 13) {
Albedo_Artifact_Set->Focus();}
}
public: System::Void Buffs_Page_Popup(System::Object^ sender, System::EventArgs^ e) {
StreamWriter^ Buff_Settings = gcnew StreamWriter("State.txt",false);
Buff_Settings->WriteLine(UIW::Variables::Character_Array[tabControl1->SelectedIndex].name);
Buff_Settings->WriteLine(Team_Member_1);
Buff_Settings->WriteLine(Team_Member_2);
Buff_Settings->WriteLine(Team_Member_3);
Buff_Settings->Close();
Character_Settings_Window = gcnew UserInterfaceWizard::CharacterSettingsDialogWindow;
Character_Settings_Window->Show();
}
public: System::Void Albedo_Run_Optimizer_Click(System::Object^ sender, System::EventArgs^ e) {
//Fixed Values- Shouldn't Change
Albedo_Static_Values();
//Flags Determination
Albedo_DMG_Flags();
//Formulas & Calc's
Albedo_Enemy_Resistance_Formula();
Albedo_Def_Multiplier_Formula();
Albedo_Level_Multiplier_Lookup_Procedure();
Albedo_print_without_artifacts();
//Optimizing
Albedo_update_all_functions_now();
Albedo_optimize_values();
//
Albedo_print_roll_totals();
Albedo_print_roll_values();
Albedo_print_with_artifacts();
Albedo_print_before_and_after();
Albedo_Wipe_Values();
}
private: System::Void Albedo_Character_Level_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
UIW::Albedo_Character_Level = 1 + this->Albedo_Character_Level->SelectedIndex;}
/////Albedo
public: void Albedo_Static_Values() {
UIW::Albedo_base_atk_1 = UIW::Variables::Character_Array[1].base_atk;
UIW::Albedo_base_atk = UIW::Albedo_base_atk_1 + UIW::Albedo_base_atk_2;
UIW::Albedo_base_def = UIW::Variables::Character_Array[1].base_Def;
UIW::Albedo_base_HP = UIW::Variables::Character_Array[1].base_HP;
UIW::Albedo_EM_base = 1 + UIW::Albedo_reaction_bonus_percent + UIW::Albedo_Reaction_Bonus_Percent_buff;
UIW::Albedo_Talent_Multiplier = double( (this->Albedo_Motion_Value->Value)/ 100);
UIW::Albedo_Base_Res = double( (this->Albedo_Enemy_Res->Value)/ 100);
//Reactions Check/Flags
if (String::CompareOrdinal(this->Albedo_ICD_Active->Text,"Yes") != 0)
{//Multiplicative
if ( ( (String::CompareOrdinal(this->Albedo_Enemy_Elemental_Aura->Text,"Pyro") == 0 || String::CompareOrdinal(this->Albedo_Enemy_Elemental_Aura->Text,"Burning") == 0) && String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Hydro") == 0) || ( (String::CompareOrdinal(this->Albedo_Enemy_Elemental_Aura->Text,"Cryo") == 0 || String::CompareOrdinal(this->Albedo_Enemy_Elemental_Aura->Text,"Frozen") == 0) && String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Pyro") == 0) )
{UIW::Albedo_EM_Reaction_Coefficient = 2;UIW::Albedo_Multiplicative_Reaction_Flag = 1;}
else if ( (String::CompareOrdinal(this->Albedo_Enemy_Elemental_Aura->Text,"Hydro") == 0 && String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Pyro") == 0) || ( (String::CompareOrdinal(this->Albedo_Enemy_Elemental_Aura->Text,"Pyro") == 0 || String::CompareOrdinal(this->Albedo_Enemy_Elemental_Aura->Text,"Burning") == 0) && String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Cryo") == 0) )
{UIW::Albedo_EM_Reaction_Coefficient = 1.50;UIW::Albedo_Multiplicative_Reaction_Flag = 1;}
//Additive
if (String::CompareOrdinal(this->Albedo_Enemy_Elemental_Aura->Text,"Dendro") == 0 && String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Electro") == 0)
{UIW::Albedo_EM_Additive_Coefficient = 1.15 * UIW::Albedo_Level_Multiplier;UIW::Albedo_Additive_Reaction_Flag = 1;UIW::Albedo_Aggravate_TF_Flag = 1;}
else if (String::CompareOrdinal(this->Albedo_Enemy_Elemental_Aura->Text,"Electro") == 0 && String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Dendro") == 0)
{UIW::Albedo_EM_Additive_Coefficient = 1.25 * UIW::Albedo_Level_Multiplier;UIW::Albedo_Additive_Reaction_Flag = 1;}
}
//Characters for Each Element
for (int iterator = 0; iterator < 84; iterator++) {
if (String::CompareOrdinal(this->Albedo_Team_Member_1->Text,"Null") != 0) {
if (String::CompareOrdinal(this->Albedo_Team_Member_1->Text,UserInterfaceWizard::Variables::Character_Array[iterator].name) == 0) {
if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Pyro") == 0)
{UIW::Albedo_Pyro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Cryo") == 0)
{UIW::Albedo_Cryo_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Electro") == 0)
{UIW::Albedo_Electro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Hydro") == 0)
{UIW::Albedo_Hydro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Geo") == 0)
{UIW::Albedo_Geo_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Dendro") == 0)
{UIW::Albedo_Dendro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Anemo") == 0)
{UIW::Albedo_Anemo_Resonance++;}
UIW::Albedo_C2_index = iterator;}}
if (String::CompareOrdinal(this->Albedo_Team_Member_2->Text,"Null") != 0) {
if (String::CompareOrdinal(this->Albedo_Team_Member_2->Text, UserInterfaceWizard::Variables::Character_Array[iterator].name) == 0) {
if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Pyro") == 0)
{UIW::Albedo_Pyro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Cryo") == 0)
{UIW::Albedo_Cryo_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Electro") == 0)
{UIW::Albedo_Electro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Hydro") == 0)
{UIW::Albedo_Hydro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Geo") == 0)
{UIW::Albedo_Geo_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Dendro") == 0)
{UIW::Albedo_Dendro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Anemo") == 0)
{UIW::Albedo_Anemo_Resonance++;}
UIW::Albedo_C3_index = iterator;}}
if (String::CompareOrdinal(this->Albedo_Team_Member_3->Text,"Null") != 0) {
if (String::CompareOrdinal(this->Albedo_Team_Member_3->Text, UserInterfaceWizard::Variables::Character_Array[iterator].name) == 0) {
if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Pyro") == 0)
{UIW::Albedo_Pyro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Cryo") == 0)
{UIW::Albedo_Cryo_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Electro") == 0)
{UIW::Albedo_Electro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Hydro") == 0)
{UIW::Albedo_Hydro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Geo") == 0)
{UIW::Albedo_Geo_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Dendro") == 0)
{UIW::Albedo_Dendro_Resonance++;}
else if (String::CompareOrdinal(UserInterfaceWizard::Variables::Character_Array[iterator].alligned_element,"Anemo") == 0)
{UIW::Albedo_Anemo_Resonance++;}
UIW::Albedo_C4_index = iterator;}}
//Elemental Resonance
if (UIW::Albedo_C2_index != 0 && UIW::Albedo_C3_index != 0 && UIW::Albedo_C4_index != 0) {
if(UIW::Albedo_Pyro_Resonance > 1)
{UIW::Albedo_ATK_Percent_buff += 0.25;}
if (UIW::Albedo_Cryo_Resonance > 1)
{if (String::CompareOrdinal(this->Albedo_Enemy_Elemental_Aura->Text,"Cryo") == 0 || String::CompareOrdinal(this->Albedo_Enemy_Elemental_Aura->Text,"Frozen") == 0)
{UIW::Albedo_CRIT_Rate_Percent_buff += 0.15;}}
if (UIW::Albedo_Hydro_Resonance > 1)
{UIW::Albedo_HP_Percent_buff += 0.25;}
if (UIW::Albedo_Dendro_Resonance > 1)
{UIW::Albedo_Elemental_Mastery+=50;
if(UIW::Albedo_Electro_Resonance>0 || (UIW::Albedo_Electro_Resonance == 0 && (UIW::Albedo_Hydro_Resonance>0 && UIW::Albedo_Pyro_Resonance>0) ) )
{UIW::Albedo_Elemental_Mastery+=50;}
else if (UIW::Albedo_Electro_Resonance == 0 && (UIW::Albedo_Hydro_Resonance>0 || UIW::Albedo_Pyro_Resonance>0) )
{UIW::Albedo_Elemental_Mastery+=30;}}
if (UIW::Albedo_Geo_Resonance > 1)
{if (String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Geo") == 0)
{UIW::Albedo_Res_Reduction+=0.2;}
UIW::Albedo_DMG_Percent_buff+=0.15;}
break;}
}
}
public: void Albedo_tallying_running_stat_quantities() {
UIW::Albedo_total_elemental_mastery = UIW::Albedo_Elemental_Mastery + UIW::Albedo_Elemental_Mastery_buff + (UIW::elemental_mastery_roll_rate[3] * UIW::Albedo_elemental_mastery_counter) + (UIW::elemental_mastery_MS * UIW::Albedo_elemental_mastery_MS_calc_counter);
if (UIW::Albedo_elemental_mastery_before_Flag == 0) {
UIW::Albedo_total_elemental_mastery_before = UIW::Albedo_total_elemental_mastery;
UIW::Albedo_elemental_mastery_before_Flag = 1;}
//Multiplicative Check
if (UIW::Albedo_Multiplicative_Reaction_Flag == 1) {
UIW::Albedo_EM_Multiplier = UIW::Albedo_EM_base + ( (2.78 * UIW::Albedo_total_elemental_mastery) / (1400 + UIW::Albedo_total_elemental_mastery) );}
//Additive Check
if (UIW::Albedo_Additive_Reaction_Flag == 1) {
UIW::Albedo_EM_Additive = UIW::Albedo_EM_base + ( (5 * UIW::Albedo_total_elemental_mastery) / (1200 + UIW::Albedo_total_elemental_mastery) );
UIW::Albedo_EM_scaling_stat_addition = UIW::Albedo_EM_Additive_Coefficient * UIW::Albedo_EM_Additive;}
////Scaling_Stat
///HP
double local_HP_percent = UIW::Albedo_HP_percent + UIW::Albedo_HP_Percent_buff + (UIW::HP_percent_roll_rate[3] * UIW::Albedo_HP_percent_counter) + (UIW::HP_percent_MS * UIW::Albedo_HP_percent_MS_calc_counter),
local_HP_Flat = (UIW::Albedo_flat_HP + UIW::Albedo_Flat_HP_buff + (UIW::flat_HP_roll_rate[3] * UIW::Albedo_flat_HP_counter) );
UIW::Albedo_total_HP = (UIW::Albedo_base_HP * (1 + local_HP_percent) ) + local_HP_Flat;
if (UIW::Albedo_total_HP_before==0)
{UIW::Albedo_total_HP_before = UIW::Albedo_total_HP;}
///DEF
double local_def_percent = UIW::Albedo_def_percent + UIW::Albedo_DEF_Percent_buff + (UIW::def_percent_roll_rate[3] * UIW::Albedo_def_percent_counter) + (UIW::def_percent_MS * UIW::Albedo_def_percent_MS_calc_counter),
local_def_Flat = (UIW::Albedo_flat_def + UIW::Albedo_Flat_DEF_buff + (UIW::flat_def_roll_rate[3] * UIW::Albedo_flat_def_counter) );
UIW::Albedo_total_def = (UIW::Albedo_base_def * (1 + local_def_percent) ) + local_def_Flat;
if (UIW::Albedo_total_def_before==0)
{UIW::Albedo_total_def_before = UIW::Albedo_total_def;}
///ATK
double local_atk_percent = UIW::Albedo_atk_percent + UIW::Albedo_ATK_Percent_buff + (UIW::atk_percent_roll_rate[3] * UIW::Albedo_atk_percent_counter) + (UIW::atk_percent_MS * UIW::Albedo_atk_percent_MS_calc_counter),
local_atk_Flat = (UIW::Albedo_flat_atk + UIW::Albedo_Flat_ATK_buff + (UIW::flat_atk_roll_rate[3] * UIW::Albedo_flat_atk_counter) );
UIW::Albedo_total_atk = local_atk_Flat + (UIW::Albedo_base_atk * (1 + local_atk_percent) );
if (UIW::Albedo_total_atk_before==0)
{UIW::Albedo_total_atk_before = UIW::Albedo_total_atk;}
///DEF
if (UIW::Albedo_def_scaling_Flag == 1)
{UIW::Albedo_total_stat_scaling = UIW::Albedo_total_def * UIW::Albedo_Talent_Multiplier;}
else
///ATK
{UIW::Albedo_total_stat_scaling = UIW::Albedo_total_atk * UIW::Albedo_Talent_Multiplier;}
//
if (UIW::Albedo_Additive_Reaction_Flag == 1)
{UIW::Albedo_total_stat_scaling += UIW::Albedo_EM_scaling_stat_addition;}
UIW::Albedo_total_stat_scaling += UIW::Albedo_flat_dmg + UIW::Albedo_Flat_DMG_buff;
//
if (UIW::Albedo_total_stat_scaling_before == 0)
{UIW::Albedo_total_stat_scaling_before = UIW::Albedo_total_stat_scaling;}
////DMG Bonus
double local_dmg_bonus = 0;
if (UIW::Albedo_Physical_DMG_Flag == 1)
{local_dmg_bonus = UIW::dmg_percent_physical_MS * UIW::Albedo_dmg_percent_physical_MS_calc_counter;}
else 
{local_dmg_bonus = UIW::dmg_percent_MS * UIW::Albedo_dmg_percent_MS_calc_counter;}
UIW::Albedo_total_dmg_bonus = UIW::Albedo_dmg_bonus + UIW::Albedo_DMG_Percent_buff + local_dmg_bonus;
if (UIW::Albedo_dmg_bonus_before_Flag == 0)
{UIW::Albedo_total_dmg_bonus_before = UIW::Albedo_total_dmg_bonus;
UIW::Albedo_dmg_bonus_before_Flag = 1;}
////Crit Rate
UIW::Albedo_total_Crit_Rate = UIW::Albedo_crit_rate + UIW::Albedo_CRIT_Rate_Percent_buff + (UIW::crit_rate_roll_rate[3] * UIW::Albedo_crit_rate_counter) + (UIW::crit_rate_MS * UIW::Albedo_crit_rate_MS_calc_counter);
if (UIW::Albedo_total_crit_rate_before == 0)
{UIW::Albedo_total_crit_rate_before = UIW::Albedo_total_Crit_Rate;}
////Crit DMG
UIW::Albedo_total_Crit_DMG = UIW::Albedo_crit_dmg + UIW::Albedo_CRIT_DMG_Percent_buff + (UIW::crit_dmg_roll_rate[3] * UIW::Albedo_crit_dmg_counter) + (UIW::crit_dmg_MS * UIW::Albedo_crit_dmg_MS_calc_counter);
if (UIW::Albedo_total_crit_dmg_before == 0)
{UIW::Albedo_total_crit_dmg_before = UIW::Albedo_total_Crit_DMG;}
////Energy Recharge
UIW::Albedo_total_Energy_Recharge = UIW::Albedo_energy_recharge + (UIW::energy_recharge_MS * UIW::Albedo_energy_recharge_MS_calc_counter) + (UIW::energy_recharge_roll_rate[3] * UIW::Albedo_energy_recharge_counter);
if (UIW::Albedo_total_energy_recharge_before == 0)
{UIW::Albedo_total_energy_recharge_before = UIW::Albedo_total_Energy_Recharge;}
;}
public: double Albedo_no_crit() {
Albedo_tallying_running_stat_quantities();
//Formula
double dmg = UIW::Albedo_total_stat_scaling * (1 + UIW::Albedo_total_dmg_bonus) * UIW::Albedo_Def_Multiplier * UIW::Albedo_Enemy_Res * 
UIW::Albedo_Talent_Multiplier;
//Multiplicative Check
if (UIW::Albedo_Multiplicative_Reaction_Flag == 1)
{dmg *= UIW::Albedo_EM_Reaction_Coefficient * UIW::Albedo_EM_Multiplier;}
return dmg;}
public: double Albedo_average()
{double dmg = Albedo_no_crit() * (1 + (fmax(fmin(1, UIW::Albedo_total_Crit_Rate),0) * UIW::Albedo_total_Crit_DMG) );
return dmg;}
public: double Albedo_with_crit()
{double dmg = Albedo_no_crit() * (1 + UIW::Albedo_total_Crit_DMG);
return dmg;}
public: void Albedo_Def_Multiplier_Formula() {
UIW::Albedo_Def_Multiplier = (double)( (UIW::Albedo_Character_Level+100)/( (1-UIW::Albedo_Def_Ignored)*(1-UIW::Albedo_Def_Reduction)*(UIW::Albedo_Enemy_Level+100)+(UIW::Albedo_Character_Level+100) ) );
;}
public: void Albedo_Enemy_Resistance_Formula()
{double Effective_Res = (UIW::Albedo_Base_Res - UIW::Albedo_Res_Reduction);
if (Effective_Res<0)
UIW::Albedo_Enemy_Res = 1 - (Effective_Res/2);
else if (Effective_Res>0.75)
{UIW::Albedo_Enemy_Res = pow(1 + 4 * Effective_Res,-1);}
else {UIW::Albedo_Enemy_Res = 1 - Effective_Res;}
;}
public: void Albedo_Level_Multiplier_Lookup_Procedure() {
if (UIW::Albedo_Character_Level == 90) {
UIW::Albedo_Level_Multiplier = 1446.85;}
else {
for (int iterator = 1; iterator < 14; iterator++) {
if (UIW::Albedo_Character_Level < UIW::Variables::Level_Multiplier_Array[iterator].level) {
UIW::Albedo_Level_Multiplier = UIW::Variables::Level_Multiplier_Array[iterator - 1].Multiplier; break;}
}}}
public: void Albedo_DMG_Flags()
{////Flags Check //ATK Element & whether Swirlable
if (String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Physical") == 0)
{UIW::Albedo_Physical_DMG_Flag = 1;}
else 
{UIW::Albedo_Elemental_DMG_Flag = 1;
if (String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Pyro") == 0 || String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Cryo") == 0 || String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Hydro") == 0 || String::CompareOrdinal(this->Albedo_ATK_Element->Text,"Electro") == 0)
{UIW::Albedo_Swirlable_Type_DMG_Flag = 1;}
}
//Scaling Stat
if (String::CompareOrdinal(this->Albedo_ATK_Type->Text,"Elemental Skill") == 0) {
UIW::Albedo_def_scaling_Flag = 1;}
else
{UIW::Albedo_atk_scaling_Flag = 1;}
//DMG Type
if (String::CompareOrdinal(this->Albedo_ATK_Type->Text, "Normal ATK") == 0 || String::CompareOrdinal(this->Albedo_ATK_Type->Text, "Charge ATK") == 0)
{UIW::Albedo_NA_CA_Flag = 1;}
if (UIW::Albedo_NA_CA_Flag == 1 || String::CompareOrdinal(this->Albedo_ATK_Type->Text, "Plunge ATK") == 0) {
UIW::Albedo_NA_CA_PA_Flag = 1;}
}
public: void Albedo_atk_percent_ratio_() {
Albedo_tallying_running_stat_quantities();
if (UIW::Albedo_atk_scaling_Flag == 1)
{UIW::Albedo_atk_percent_ratio = ( (UIW::Albedo_Talent_Multiplier * UIW::Albedo_base_atk * UIW::atk_percent_roll_rate[3]) / UIW::Albedo_total_stat_scaling) + 1;}
;}
public: void Albedo_atk_percent_MS_ratio_() {
Albedo_tallying_running_stat_quantities();
if (UIW::Albedo_atk_scaling_Flag == 1)
{UIW::Albedo_atk_percent_MS_ratio = ( (UIW::Albedo_Talent_Multiplier * UIW::Albedo_base_atk * UIW::atk_percent_MS) / UIW::Albedo_total_stat_scaling) + 1;}
;}
public: void Albedo_flat_atk_ratio_() {
Albedo_tallying_running_stat_quantities();
if (UIW::Albedo_atk_scaling_Flag == 1)
{UIW::Albedo_flat_atk_ratio = ( (UIW::Albedo_Talent_Multiplier * UIW::flat_atk_roll_rate[3]) / UIW::Albedo_total_stat_scaling) + 1;}
;}
public: void Albedo_HP_percent_ratio_() {
Albedo_tallying_running_stat_quantities();
if (UIW::Albedo_HP_scaling_Flag == 1)
{UIW::Albedo_HP_percent_ratio = ( (UIW::Albedo_Talent_Multiplier * UIW::Albedo_base_HP * UIW::HP_percent_roll_rate[3]) / UIW::Albedo_total_stat_scaling) + 1;}
;}
public: void Albedo_HP_percent_MS_ratio_() {
Albedo_tallying_running_stat_quantities();
if (UIW::Albedo_HP_scaling_Flag == 1) {
UIW::Albedo_HP_percent_MS_ratio = ( (UIW::Albedo_Talent_Multiplier * UIW::Albedo_base_HP * UIW::HP_percent_MS) / UIW::Albedo_total_stat_scaling) + 1;}
;}
public: void Albedo_flat_HP_ratio_() {
Albedo_tallying_running_stat_quantities();
if (UIW::Albedo_HP_scaling_Flag == 1) {
UIW::Albedo_flat_HP_ratio = ( (UIW::Albedo_Talent_Multiplier * UIW::flat_HP_roll_rate[3]) / UIW::Albedo_total_stat_scaling) + 1;}
;}
public: void Albedo_def_percent_ratio_() {
Albedo_tallying_running_stat_quantities();
if (UIW::Albedo_def_scaling_Flag == 1) {
UIW::Albedo_def_percent_ratio = ( (UIW::Albedo_Talent_Multiplier * UIW::Albedo_base_def * UIW::def_percent_roll_rate[3]) / UIW::Albedo_total_stat_scaling) + 1;}
;}
public: void Albedo_def_percent_MS_ratio_() {
Albedo_tallying_running_stat_quantities();
if (UIW::Albedo_def_scaling_Flag == 1)
{UIW::Albedo_def_percent_MS_ratio = ( (UIW::Albedo_Talent_Multiplier * UIW::Albedo_base_def * UIW::def_percent_MS) / UIW::Albedo_total_stat_scaling) + 1;}
;}
public: void Albedo_flat_def_ratio_() {
Albedo_tallying_running_stat_quantities();
if (UIW::Albedo_def_scaling_Flag == 1) {
UIW::Albedo_flat_def_ratio = ( (UIW::Albedo_Talent_Multiplier * UIW::flat_def_roll_rate[3]) / UIW::Albedo_total_stat_scaling) + 1;}
;}
public: void Albedo_dmg_percent_MS_ratio_() {
Albedo_tallying_running_stat_quantities();
if (UIW::Albedo_Physical_DMG_Flag == 1) {
UIW::Albedo_dmg_percent_MS_ratio = (UIW::dmg_percent_physical_MS / (1 + UIW::Albedo_total_dmg_bonus) ) + 1;}
else if (UIW::Albedo_Elemental_DMG_Flag == 1) {
UIW::Albedo_dmg_percent_MS_ratio = (UIW::dmg_percent_MS / (1 + UIW::Albedo_total_dmg_bonus) ) + 1;}
;}
public: void Albedo_elemental_mastery_ratio_() {
Albedo_tallying_running_stat_quantities();
//Multiplier component
if (UIW::Albedo_Multiplicative_Reaction_Flag == 1)
{double x = (UIW::Albedo_total_elemental_mastery + UIW::elemental_mastery_roll_rate[3]),
numerator = UIW::Albedo_EM_base + (2.78 / ( (1400/x) + 1) );
UIW::Albedo_elemental_mastery_ratio = 
(numerator / UIW::Albedo_EM_Multiplier);}
//Base DMG component
else if (UIW::Albedo_Additive_Reaction_Flag == 1)
{double x = (UIW::Albedo_total_elemental_mastery + UIW::elemental_mastery_roll_rate[3]),
y = UIW::Albedo_EM_base + (5 / ( (1200/x) + 1) ),
numerator = (UIW::Albedo_EM_Additive_Coefficient * y) - UIW::Albedo_EM_scaling_stat_addition;
UIW::Albedo_elemental_mastery_ratio = 
(numerator / UIW::Albedo_total_stat_scaling) + 1;}
;}
public: void Albedo_elemental_mastery_MS_ratio_() {
Albedo_tallying_running_stat_quantities();
//Multiplier component
if (UIW::Albedo_Multiplicative_Reaction_Flag == 1) {
double x = (UIW::Albedo_total_elemental_mastery + UIW::elemental_mastery_MS),
numerator = UIW::Albedo_EM_base + (2.78 / ( (1400/x) + 1) );
UIW::Albedo_elemental_mastery_ratio = (numerator / UIW::Albedo_EM_Multiplier);}
//Base DMG component
else if (UIW::Albedo_Additive_Reaction_Flag == 1)
{double x = (UIW::Albedo_total_elemental_mastery + UIW::elemental_mastery_MS),
y = UIW::Albedo_EM_base + (5 / ( (1200/x) + 1) ),
numerator = (UIW::Albedo_EM_Additive_Coefficient * y) - UIW::Albedo_EM_scaling_stat_addition;
UIW::Albedo_elemental_mastery_ratio = 
(numerator / UIW::Albedo_total_stat_scaling) + 1;}
;}
public: void Albedo_crit_rate_ratio_() {
Albedo_tallying_running_stat_quantities();
UIW::Albedo_crit_rate_ratio = (1 + (UIW::Albedo_total_Crit_DMG * fmax(fmin(UIW::Albedo_total_Crit_Rate + UIW::crit_rate_roll_rate[3],1),0) ) ) / (1 + (UIW::Albedo_total_Crit_DMG * fmax(fmin(UIW::Albedo_total_Crit_Rate,1),0) ) );
}
public: void Albedo_crit_rate_MS_ratio_() {
Albedo_tallying_running_stat_quantities();
UIW::Albedo_crit_rate_MS_ratio = (1 + (UIW::Albedo_total_Crit_DMG * fmax(fmin(UIW::Albedo_total_Crit_Rate + UIW::crit_rate_MS,1),0) ) ) / (1 + (UIW::Albedo_total_Crit_DMG * fmax(fmin(UIW::Albedo_total_Crit_Rate,1),0) ) );
}
public: void Albedo_crit_dmg_ratio_() {
Albedo_tallying_running_stat_quantities();
UIW::Albedo_crit_dmg_ratio = 1 + (UIW::crit_dmg_roll_rate[3] / ( (pow(fmax(fmin(UIW::Albedo_total_Crit_Rate,1),0),-1) + UIW::Albedo_total_Crit_DMG) ) );
}
public: void Albedo_crit_dmg_MS_ratio_() {
Albedo_tallying_running_stat_quantities();
UIW::Albedo_crit_dmg_ratio = 1 + (UIW::Albedo_crit_dmg_MS_ratio / ( (pow(fmax(fmin(UIW::Albedo_total_Crit_Rate,1),0),-1) + UIW::Albedo_total_Crit_DMG) ) );
}
public: void Albedo_energy_recharge_ratio_() {
;}
public: void Albedo_energy_recharge_MS_ratio_() {
;}
public: void Albedo_print_without_artifacts()
{this->Albedo_NoCritDmg->Value = Decimal(Albedo_no_crit());
this->Albedo_AverageDmg->Value = Decimal(Albedo_average());
this->Albedo_WithCritDmg->Value = Decimal(Albedo_with_crit());}
public: void Albedo_print_roll_totals() {
this->Albedo_ATKPercent_Rolls->Value = Decimal(UIW::Albedo_atk_percent_counter);
this->Albedo_DEFPercent_Rolls->Value = Decimal(UIW::Albedo_def_percent_counter);
this->Albedo_HPPercent_Rolls->Value = Decimal(UIW::Albedo_HP_percent_counter);
this->Albedo_DMGPercent_Rolls->Value = Decimal(UIW::Albedo_dmg_percent_MS_calc_counter);
this->Albedo_ERPercent_Rolls->Value = Decimal(UIW::Albedo_energy_recharge_counter);
this->Albedo_EM_Rolls->Value = Decimal(UIW::Albedo_elemental_mastery_counter);
this->Albedo_RatePercent_Rolls->Value = Decimal(UIW::Albedo_crit_rate_counter);
this->Albedo_CRITDMG_Rolls->Value = Decimal(UIW::Albedo_crit_dmg_counter);
this->Albedo_ATKPercent_MS_Rolls->Value = Decimal(UIW::Albedo_atk_percent_MS_counter);
this->Albedo_DEFPercent_MS_Rolls->Value = Decimal(UIW::Albedo_def_percent_MS_counter);
this->Albedo_HPPercent_MS_Rolls->Value = Decimal(UIW::Albedo_HP_percent_MS_counter);
this->Albedo_ERPercent_MS_Rolls->Value = Decimal(UIW::Albedo_energy_recharge_MS_counter);
this->Albedo_EM_MS_Rolls->Value = Decimal(UIW::Albedo_elemental_mastery_MS_counter);
this->Albedo_RatePercent_MS_Rolls->Value = Decimal(UIW::Albedo_crit_rate_MS_counter);
this->Albedo_CRITDMG_MS_Rolls->Value = Decimal(UIW::Albedo_crit_dmg_MS_counter);
this->Albedo_FLATATK_Rolls->Value = Decimal(UIW::Albedo_flat_atk_counter);
this->Albedo_FLATDEF_Rolls->Value = Decimal(UIW::Albedo_flat_def_counter);
this->Albedo_FLATHP_Rolls->Value = Decimal(UIW::Albedo_flat_HP_counter);
}
public: void Albedo_print_roll_values()
{double Elemental_or_Physical = 0,
HP_Percentage = (UIW::HP_percent_roll_rate[3] * UIW::Albedo_HP_percent_counter) + (UIW::HP_percent_MS * UIW::Albedo_HP_percent_MS_calc_counter),
Flat_HP = UIW::flat_HP_roll_rate[3] * UIW::Albedo_flat_HP_counter,
//
DEF_Percentage = (UIW::def_percent_roll_rate[3] * UIW::Albedo_def_percent_counter) + (UIW::def_percent_MS * UIW::Albedo_def_percent_MS_calc_counter),
Flat_DEF = UIW::flat_def_roll_rate[3] * UIW::Albedo_flat_def_counter,
//
ATK_Percentage = (UIW::atk_percent_roll_rate[3] * UIW::Albedo_atk_percent_counter) + (UIW::atk_percent_MS * UIW::Albedo_atk_percent_MS_calc_counter),
Flat_ATK = UIW::flat_atk_roll_rate[3] * UIW::Albedo_flat_atk_counter;
this->Albedo_ATKPercent_Value->Value= int(100 * ATK_Percentage);
this->Albedo_FLATATK_Value->Value= int(Flat_ATK);
this->Albedo_DEFPercent_Value->Value= int(100 * DEF_Percentage);
this->Albedo_FLATDEF_Value->Value= int(Flat_DEF);
this->Albedo_HPPercent_Value->Value= int(100 * HP_Percentage),
this->Albedo_FLATHP_Value->Value= int(Flat_HP);
this->Albedo_DMG_Percent_Value->Value= 100 * (int)(UIW::Albedo_total_dmg_bonus - UIW::Albedo_total_dmg_bonus_before);
this->Albedo_EM_Value->Value= int(UIW::Albedo_total_elemental_mastery - UIW::Albedo_total_elemental_mastery_before);
this->Albedo_RatePercent_Value->Value= 100 * (int) (UIW::Albedo_total_Crit_Rate - UIW::Albedo_total_crit_rate_before);
this->Albedo_CRITDMG_Value->Value= 100 * (int) (UIW::Albedo_total_Crit_DMG - UIW::Albedo_total_crit_dmg_before);
this->Albedo_ER_Value->Value= 100 * (int) (UIW::Albedo_total_Energy_Recharge - UIW::Albedo_total_energy_recharge_before);}
public: void Albedo_print_before_and_after()
{this->Albedo_TotalATK_Before->Value= int(UIW::Albedo_total_atk_before);
this->Albedo_TotalATK_After->Value= int(UIW::Albedo_total_atk);
this->Albedo_TotalDEF_Before->Value= int(UIW::Albedo_total_def_before);
this->Albedo_TotalDEF_After->Value= int(UIW::Albedo_total_def);
this->Albedo_TotalHP_Before->Value= int(UIW::Albedo_total_HP_before);
this->Albedo_TotalHP_After->Value= int(UIW::Albedo_total_HP);
this->Albedo_TotalBASE_DMG_Before->Value= int(UIW::Albedo_total_stat_scaling_before);
this->Albedo_TotalBASE_DMG_After->Value= int(UIW::Albedo_total_stat_scaling);
this->Albedo_TotalDMGPercent_Before->Value= int(UIW::Albedo_total_dmg_bonus_before*100);
this->Albedo_TotalDMGPercent_After->Value= int(UIW::Albedo_total_dmg_bonus*100);
this->Albedo_TotalEM_Before->Value= int(UIW::Albedo_total_elemental_mastery_before);
this->Albedo_TotalEM_After->Value= int(UIW::Albedo_total_elemental_mastery);
this->Albedo_TotalRatePercent_Before->Value= int(UIW::Albedo_total_crit_rate_before*100);
this->Albedo_TotalRatePercent_After->Value= int(UIW::Albedo_total_Crit_Rate*100);
this->Albedo_TotalCritDMG_Before->Value= int(UIW::Albedo_total_crit_dmg_before*100);
this->Albedo_TotalCRITDMG_After->Value= int(UIW::Albedo_total_Crit_DMG*100);
this->Albedo_TotalER_Before->Value= int(UIW::Albedo_total_energy_recharge_before*100);
this->Albedo_TotalER_After->Value= int(UIW::Albedo_total_Energy_Recharge*100);}
public: void Albedo_print_with_artifacts()
{this->Albedo_No_Crit_After_value->Value = Decimal(Albedo_no_crit());
this->Albedo_Average_After_value->Value = Decimal(Albedo_average());
this->Albedo_With_Crit_After_value->Value = Decimal(Albedo_with_crit());}
public: void Albedo_dmg_list_1_()
{double _Atk = UIW::Albedo_atk_percent_counter + UIW::Albedo_atk_percent_MS_counter;
double _HP = UIW::Albedo_HP_percent_counter + UIW::Albedo_HP_percent_MS_counter;
double _Def = UIW::Albedo_def_percent_counter + UIW::Albedo_def_percent_MS_counter;
double _EM = UIW::Albedo_elemental_mastery_counter+UIW::Albedo_elemental_mastery_MS_counter;
double _MS1 = UIW::Albedo_crit_rate_counter+UIW::Albedo_crit_dmg_counter+UIW::Albedo_crit_rate_MS_counter
+UIW::Albedo_crit_dmg_MS_counter;
double _CrCd = UIW::Albedo_crit_rate_counter+UIW::Albedo_crit_dmg_counter;
double _Cr_Cr_MS = UIW::Albedo_crit_rate_counter+UIW::Albedo_crit_rate_MS_counter;
double _Cd_Cd_MS = UIW::Albedo_crit_dmg_counter+UIW::Albedo_crit_dmg_MS_counter;
double _ER = UIW::Albedo_energy_recharge_counter+UIW::Albedo_energy_recharge_MS_counter;
if (UIW::Albedo_atk_percent_counter>29 || _Atk>29 || UIW::Albedo_current_piece_name==0)
{UIW::Albedo_atk_percent_ratio=0.1;}
if (UIW::Albedo_HP_percent_counter>29 || _HP>29 || UIW::Albedo_current_piece_name==8)
{UIW::Albedo_HP_percent_ratio=0.11;}
if (UIW::Albedo_def_percent_counter>29 || _Def>29 || UIW::Albedo_current_piece_name==9)
{UIW::Albedo_def_percent_ratio=0.12;}
if (UIW::Albedo_flat_atk_counter>23 || UIW::Albedo_current_piece_name==6) {UIW::Albedo_flat_atk_ratio=0.13;}
if (UIW::Albedo_flat_HP_counter>23 || UIW::Albedo_current_piece_name==7) {UIW::Albedo_flat_HP_ratio=0.14;}
if (UIW::Albedo_flat_def_counter>29) {UIW::Albedo_flat_def_ratio=0.15;}
if (UIW::Albedo_elemental_mastery_counter>29 || _EM>29 || UIW::Albedo_current_piece_name==2)
{UIW::Albedo_elemental_mastery_ratio=0.16;}
if (UIW::Albedo_crit_rate_counter>29 || _Cd_Cd_MS>29 || _MS1>39 || _CrCd>34 || UIW::Albedo_current_piece_name==3)
{UIW::Albedo_crit_rate_ratio=0.17;}
if (UIW::Albedo_crit_dmg_counter>29 || _Cd_Cd_MS>29 || _MS1>39 || _CrCd>34 || UIW::Albedo_current_piece_name==4)
{UIW::Albedo_crit_dmg_ratio=0.18;}
if (UIW::Albedo_energy_recharge_counter>29 || _ER>29 || UIW::Albedo_current_piece_name==5)
{UIW::Albedo_energy_recharge_ratio=0.19;}

double greater_than_score_0=0,
greater_than_score_1=0,
greater_than_score_2=0,
greater_than_score_3=0,
greater_than_score_4=0,
greater_than_score_5=0,
greater_than_score_6=0,
greater_than_score_7=0,
greater_than_score_8=0,
greater_than_score_9=0;
/////Atk Percent Sort
if (UIW::Albedo_atk_percent_ratio>UIW::Albedo_flat_atk_ratio)
{greater_than_score_0++;}
else {greater_than_score_1++;}
if (UIW::Albedo_atk_percent_ratio>UIW::Albedo_elemental_mastery_ratio)
{greater_than_score_0++;}
else {greater_than_score_2++;}
if (UIW::Albedo_atk_percent_ratio>UIW::Albedo_crit_rate_ratio)
{greater_than_score_0++;}
else {greater_than_score_3++;}
if (UIW::Albedo_atk_percent_ratio>UIW::Albedo_crit_dmg_ratio)
{greater_than_score_0++;}
else {greater_than_score_4++;}
if (UIW::Albedo_atk_percent_ratio>UIW::Albedo_energy_recharge_ratio)
{greater_than_score_0++;}
else {greater_than_score_5++;}
if (UIW::Albedo_atk_percent_ratio>UIW::Albedo_flat_HP_ratio)
{greater_than_score_0++;}
else {greater_than_score_6++;}
if (UIW::Albedo_atk_percent_ratio>UIW::Albedo_HP_percent_ratio)
{greater_than_score_0++;}
else {greater_than_score_7++;}
if (UIW::Albedo_atk_percent_ratio>UIW::Albedo_def_percent_ratio)
{greater_than_score_0++;}
else {greater_than_score_8++;}
if (UIW::Albedo_atk_percent_ratio>UIW::Albedo_flat_def_ratio)
{greater_than_score_0++;}
else {greater_than_score_9++;}
//Atk Percent
if (greater_than_score_0==9)
{UIW::Albedo_dmg_list_1[0]=UIW::Albedo_atk_percent_ratio;}
else if (greater_than_score_0==8)
{UIW::Albedo_dmg_list_1[1]=UIW::Albedo_atk_percent_ratio;}
else if (greater_than_score_0==7)
{UIW::Albedo_dmg_list_1[2]=UIW::Albedo_atk_percent_ratio;}
else if (greater_than_score_0==6)
{UIW::Albedo_dmg_list_1[3]=UIW::Albedo_atk_percent_ratio;}
else if (greater_than_score_0==5)
{UIW::Albedo_dmg_list_1[4]=UIW::Albedo_atk_percent_ratio;}
else if (greater_than_score_0==4)
{UIW::Albedo_dmg_list_1[5]=UIW::Albedo_atk_percent_ratio;}
else if (greater_than_score_0==3)
{UIW::Albedo_dmg_list_1[6]=UIW::Albedo_atk_percent_ratio;}
else if (greater_than_score_0==2)
{UIW::Albedo_dmg_list_1[7]=UIW::Albedo_atk_percent_ratio;}
else if (greater_than_score_0==1)
{UIW::Albedo_dmg_list_1[8]=UIW::Albedo_atk_percent_ratio;}
else
{UIW::Albedo_dmg_list_1[9]=UIW::Albedo_atk_percent_ratio;}

////Flat Atk Sort
if (UIW::Albedo_flat_atk_ratio>UIW::Albedo_elemental_mastery_ratio)
{greater_than_score_1++;}
else {greater_than_score_2++;}
if (UIW::Albedo_flat_atk_ratio>UIW::Albedo_crit_rate_ratio)
{greater_than_score_1++;}
else {greater_than_score_3++;}
if (UIW::Albedo_flat_atk_ratio>UIW::Albedo_crit_dmg_ratio)
{greater_than_score_1++;}
else {greater_than_score_4++;}
if (UIW::Albedo_flat_atk_ratio>UIW::Albedo_energy_recharge_ratio)
{greater_than_score_1++;}
else {greater_than_score_5++;}
if (UIW::Albedo_flat_atk_ratio>UIW::Albedo_flat_HP_ratio)
{greater_than_score_1++;}
else {greater_than_score_6++;}
if (UIW::Albedo_flat_atk_ratio>UIW::Albedo_HP_percent_ratio)
{greater_than_score_1++;}
else {greater_than_score_7++;}
if (UIW::Albedo_flat_atk_ratio>UIW::Albedo_def_percent_ratio)
{greater_than_score_1++;}
else {greater_than_score_8++;}
if (UIW::Albedo_flat_atk_ratio>UIW::Albedo_flat_def_ratio)
{greater_than_score_1++;}
else {greater_than_score_9++;}
//Flat Atk
if (greater_than_score_1==9)
{UIW::Albedo_dmg_list_1[0]=UIW::Albedo_flat_atk_ratio;}
else if (greater_than_score_1==8)
{UIW::Albedo_dmg_list_1[1]=UIW::Albedo_flat_atk_ratio;}
else if (greater_than_score_1==7)
{UIW::Albedo_dmg_list_1[2]=UIW::Albedo_flat_atk_ratio;}
else if (greater_than_score_1==6)
{UIW::Albedo_dmg_list_1[3]=UIW::Albedo_flat_atk_ratio;}
else if (greater_than_score_1==5)
{UIW::Albedo_dmg_list_1[4]=UIW::Albedo_flat_atk_ratio;}
else if (greater_than_score_1==4)
{UIW::Albedo_dmg_list_1[5]=UIW::Albedo_flat_atk_ratio;}
else if (greater_than_score_1==3)
{UIW::Albedo_dmg_list_1[6]=UIW::Albedo_flat_atk_ratio;}
else if (greater_than_score_1==2)
{UIW::Albedo_dmg_list_1[7]=UIW::Albedo_flat_atk_ratio;}
else if (greater_than_score_1==1)
{UIW::Albedo_dmg_list_1[8]=UIW::Albedo_flat_atk_ratio;}
else
{UIW::Albedo_dmg_list_1[9]=UIW::Albedo_flat_atk_ratio;}

////Elemental Mastery Sort
if (UIW::Albedo_elemental_mastery_ratio>UIW::Albedo_crit_rate_ratio)
{greater_than_score_2++;}
else {greater_than_score_3++;}
if (UIW::Albedo_elemental_mastery_ratio>UIW::Albedo_crit_dmg_ratio)
{greater_than_score_2++;}
else {greater_than_score_4++;}
if (UIW::Albedo_elemental_mastery_ratio>UIW::Albedo_energy_recharge_ratio)
{greater_than_score_2++;}
else {greater_than_score_5++;}
if (UIW::Albedo_elemental_mastery_ratio>UIW::Albedo_flat_HP_ratio)
{greater_than_score_2++;}
else {greater_than_score_6++;}
if (UIW::Albedo_elemental_mastery_ratio>UIW::Albedo_HP_percent_ratio)
{greater_than_score_2++;}
else {greater_than_score_7++;}
if (UIW::Albedo_elemental_mastery_ratio>UIW::Albedo_def_percent_ratio)
{greater_than_score_2++;}
else {greater_than_score_8++;}
if (UIW::Albedo_elemental_mastery_ratio>UIW::Albedo_flat_def_ratio)
{greater_than_score_2++;}
else {greater_than_score_9++;}
//Elemental Mastery
if (greater_than_score_2==9)
{UIW::Albedo_dmg_list_1[0]=UIW::Albedo_elemental_mastery_ratio;}
else if (greater_than_score_2==8)
{UIW::Albedo_dmg_list_1[1]=UIW::Albedo_elemental_mastery_ratio;}
else if (greater_than_score_2==7)
{UIW::Albedo_dmg_list_1[2]=UIW::Albedo_elemental_mastery_ratio;}
else if (greater_than_score_2==6)
{UIW::Albedo_dmg_list_1[3]=UIW::Albedo_elemental_mastery_ratio;}
else if (greater_than_score_2==5)
{UIW::Albedo_dmg_list_1[4]=UIW::Albedo_elemental_mastery_ratio;}
else if (greater_than_score_2==4)
{UIW::Albedo_dmg_list_1[5]=UIW::Albedo_elemental_mastery_ratio;}
else if (greater_than_score_2==3)
{UIW::Albedo_dmg_list_1[6]=UIW::Albedo_elemental_mastery_ratio;}
else if (greater_than_score_2==2)
{UIW::Albedo_dmg_list_1[7]=UIW::Albedo_elemental_mastery_ratio;}
else if (greater_than_score_2==1)
{UIW::Albedo_dmg_list_1[8]=UIW::Albedo_elemental_mastery_ratio;}
else
{UIW::Albedo_dmg_list_1[9]=UIW::Albedo_elemental_mastery_ratio;}

////Crit Rate Sort
if (UIW::Albedo_crit_rate_ratio>UIW::Albedo_crit_dmg_ratio)
{greater_than_score_3++;}
else {greater_than_score_4++;}
if (UIW::Albedo_crit_rate_ratio>UIW::Albedo_energy_recharge_ratio)
{greater_than_score_3++;}
else {greater_than_score_5++;}
if (UIW::Albedo_crit_rate_ratio>UIW::Albedo_flat_HP_ratio)
{greater_than_score_3++;}
else {greater_than_score_6++;}
if (UIW::Albedo_crit_rate_ratio>UIW::Albedo_HP_percent_ratio)
{greater_than_score_3++;}
else {greater_than_score_7++;}
if (UIW::Albedo_crit_rate_ratio>UIW::Albedo_def_percent_ratio)
{greater_than_score_3++;}
else {greater_than_score_8++;}
if (UIW::Albedo_crit_rate_ratio>UIW::Albedo_flat_def_ratio)
{greater_than_score_3++;}
else {greater_than_score_9++;}
//Crit Rate
if (greater_than_score_3==9)
{UIW::Albedo_dmg_list_1[0]=UIW::Albedo_crit_rate_ratio;}
else if (greater_than_score_3==8)
{UIW::Albedo_dmg_list_1[1]=UIW::Albedo_crit_rate_ratio;}
else if (greater_than_score_3==7)
{UIW::Albedo_dmg_list_1[2]=UIW::Albedo_crit_rate_ratio;}
else if (greater_than_score_3==6)
{UIW::Albedo_dmg_list_1[3]=UIW::Albedo_crit_rate_ratio;}
else if (greater_than_score_3==5)
{UIW::Albedo_dmg_list_1[4]=UIW::Albedo_crit_rate_ratio;}
else if (greater_than_score_3==4)
{UIW::Albedo_dmg_list_1[5]=UIW::Albedo_crit_rate_ratio;}
else if (greater_than_score_3==3)
{UIW::Albedo_dmg_list_1[6]=UIW::Albedo_crit_rate_ratio;}
else if (greater_than_score_3==2)
{UIW::Albedo_dmg_list_1[7]=UIW::Albedo_crit_rate_ratio;}
else if (greater_than_score_3==1)
{UIW::Albedo_dmg_list_1[8]=UIW::Albedo_crit_rate_ratio;}
else
{UIW::Albedo_dmg_list_1[9]=UIW::Albedo_crit_rate_ratio;}

////Crit DMG Sort
if (UIW::Albedo_crit_dmg_ratio>UIW::Albedo_energy_recharge_ratio)
{greater_than_score_4++;}
else {greater_than_score_5++;}
if (UIW::Albedo_crit_dmg_ratio>UIW::Albedo_flat_HP_ratio)
{greater_than_score_4++;}
else {greater_than_score_6++;}
if (UIW::Albedo_crit_dmg_ratio>UIW::Albedo_HP_percent_ratio)
{greater_than_score_4++;}
else {greater_than_score_7++;}
if (UIW::Albedo_crit_dmg_ratio>UIW::Albedo_def_percent_ratio)
{greater_than_score_4++;}
else {greater_than_score_8++;}
if (UIW::Albedo_crit_dmg_ratio>UIW::Albedo_flat_def_ratio)
{greater_than_score_4++;}
else {greater_than_score_9++;}
//Crit DMG
if (greater_than_score_4==9)
{UIW::Albedo_dmg_list_1[0]=UIW::Albedo_crit_dmg_ratio;}
else if (greater_than_score_4==8)
{UIW::Albedo_dmg_list_1[1]=UIW::Albedo_crit_dmg_ratio;}
else if (greater_than_score_4==7)
{UIW::Albedo_dmg_list_1[2]=UIW::Albedo_crit_dmg_ratio;}
else if (greater_than_score_4==6)
{UIW::Albedo_dmg_list_1[3]=UIW::Albedo_crit_dmg_ratio;}
else if (greater_than_score_4==5)
{UIW::Albedo_dmg_list_1[4]=UIW::Albedo_crit_dmg_ratio;}
else if (greater_than_score_4==4)
{UIW::Albedo_dmg_list_1[5]=UIW::Albedo_crit_dmg_ratio;}
else if (greater_than_score_4==3)
{UIW::Albedo_dmg_list_1[6]=UIW::Albedo_crit_dmg_ratio;}
else if (greater_than_score_4==2)
{UIW::Albedo_dmg_list_1[7]=UIW::Albedo_crit_dmg_ratio;}
else if (greater_than_score_4==1)
{UIW::Albedo_dmg_list_1[8]=UIW::Albedo_crit_dmg_ratio;}
else
{UIW::Albedo_dmg_list_1[9]=UIW::Albedo_crit_dmg_ratio;}

////Energy Recharge Sort
if (UIW::Albedo_energy_recharge_ratio>UIW::Albedo_flat_HP_ratio)
{greater_than_score_5++;}
else {greater_than_score_6++;}
if (UIW::Albedo_energy_recharge_ratio>UIW::Albedo_HP_percent_ratio)
{greater_than_score_5++;}
else {greater_than_score_7++;}
if (UIW::Albedo_energy_recharge_ratio>UIW::Albedo_def_percent_ratio)
{greater_than_score_5++;}
else {greater_than_score_8++;}
if (UIW::Albedo_energy_recharge_ratio>UIW::Albedo_flat_def_ratio)
{greater_than_score_5++;}
else {greater_than_score_9++;}
//Energy Recharge
if (greater_than_score_5==9)
{UIW::Albedo_dmg_list_1[0]=UIW::Albedo_energy_recharge_ratio;}
else if (greater_than_score_5==8)
{UIW::Albedo_dmg_list_1[1]=UIW::Albedo_energy_recharge_ratio;}
else if (greater_than_score_5==7)
{UIW::Albedo_dmg_list_1[2]=UIW::Albedo_energy_recharge_ratio;}
else if (greater_than_score_5==6)
{UIW::Albedo_dmg_list_1[3]=UIW::Albedo_energy_recharge_ratio;}
else if (greater_than_score_5==5)
{UIW::Albedo_dmg_list_1[4]=UIW::Albedo_energy_recharge_ratio;}
else if (greater_than_score_5==4)
{UIW::Albedo_dmg_list_1[5]=UIW::Albedo_energy_recharge_ratio;}
else if (greater_than_score_5==3)
{UIW::Albedo_dmg_list_1[6]=UIW::Albedo_energy_recharge_ratio;}
else if (greater_than_score_5==2)
{UIW::Albedo_dmg_list_1[7]=UIW::Albedo_energy_recharge_ratio;}
else if (greater_than_score_5==1)
{UIW::Albedo_dmg_list_1[8]=UIW::Albedo_energy_recharge_ratio;}
else
{UIW::Albedo_dmg_list_1[9]=UIW::Albedo_energy_recharge_ratio;}

////Flat HP Sort
if (UIW::Albedo_flat_HP_ratio>UIW::Albedo_HP_percent_ratio)
{greater_than_score_6++;}
else {greater_than_score_7++;}
if (UIW::Albedo_flat_HP_ratio>UIW::Albedo_def_percent_ratio)
{greater_than_score_6++;}
else {greater_than_score_8++;}
if (UIW::Albedo_flat_HP_ratio>UIW::Albedo_flat_def_ratio)
{greater_than_score_6++;}
else {greater_than_score_9++;}
//Flat HP
if (greater_than_score_6==9)
{UIW::Albedo_dmg_list_1[0]=UIW::Albedo_flat_HP_ratio;}
else if (greater_than_score_6==8)
{UIW::Albedo_dmg_list_1[1]=UIW::Albedo_flat_HP_ratio;}
else if (greater_than_score_6==7)
{UIW::Albedo_dmg_list_1[2]=UIW::Albedo_flat_HP_ratio;}
else if (greater_than_score_6==6)
{UIW::Albedo_dmg_list_1[3]=UIW::Albedo_flat_HP_ratio;}
else if (greater_than_score_6==5)
{UIW::Albedo_dmg_list_1[4]=UIW::Albedo_flat_HP_ratio;}
else if (greater_than_score_6==4)
{UIW::Albedo_dmg_list_1[5]=UIW::Albedo_flat_HP_ratio;}
else if (greater_than_score_6==3)
{UIW::Albedo_dmg_list_1[6]=UIW::Albedo_flat_HP_ratio;}
else if (greater_than_score_6==2)
{UIW::Albedo_dmg_list_1[7]=UIW::Albedo_flat_HP_ratio;}
else if (greater_than_score_6==1)
{UIW::Albedo_dmg_list_1[8]=UIW::Albedo_flat_HP_ratio;}
else
{UIW::Albedo_dmg_list_1[9]=UIW::Albedo_flat_HP_ratio;}

////HP percent Sort
if (UIW::Albedo_HP_percent_ratio>UIW::Albedo_def_percent_ratio)
{greater_than_score_7++;}
else {greater_than_score_8++;}
if (UIW::Albedo_HP_percent_ratio>UIW::Albedo_flat_def_ratio)
{greater_than_score_7++;}
else {greater_than_score_9++;}
//HP percent
if (greater_than_score_7==9)
{UIW::Albedo_dmg_list_1[0]=UIW::Albedo_HP_percent_ratio;}
else if (greater_than_score_7==8)
{UIW::Albedo_dmg_list_1[1]=UIW::Albedo_HP_percent_ratio;}
else if (greater_than_score_7==7)
{UIW::Albedo_dmg_list_1[2]=UIW::Albedo_HP_percent_ratio;}
else if (greater_than_score_7==6)
{UIW::Albedo_dmg_list_1[3]=UIW::Albedo_HP_percent_ratio;}
else if (greater_than_score_7==5)
{UIW::Albedo_dmg_list_1[4]=UIW::Albedo_HP_percent_ratio;}
else if (greater_than_score_7==4)
{UIW::Albedo_dmg_list_1[5]=UIW::Albedo_HP_percent_ratio;}
else if (greater_than_score_7==3)
{UIW::Albedo_dmg_list_1[6]=UIW::Albedo_HP_percent_ratio;}
else if (greater_than_score_7==2)
{UIW::Albedo_dmg_list_1[7]=UIW::Albedo_HP_percent_ratio;}
else if (greater_than_score_7==1)
{UIW::Albedo_dmg_list_1[8]=UIW::Albedo_HP_percent_ratio;}
else
{UIW::Albedo_dmg_list_1[9]=UIW::Albedo_HP_percent_ratio;}

////Def Percent Sort
if (UIW::Albedo_def_percent_ratio>UIW::Albedo_flat_def_ratio)
{greater_than_score_8++;}
else {greater_than_score_9++;}
//Def Percent
if (greater_than_score_8==9)
{UIW::Albedo_dmg_list_1[0]=UIW::Albedo_def_percent_ratio;}
else if (greater_than_score_8==8)
{UIW::Albedo_dmg_list_1[1]=UIW::Albedo_def_percent_ratio;}
else if (greater_than_score_8==7)
{UIW::Albedo_dmg_list_1[2]=UIW::Albedo_def_percent_ratio;}
else if (greater_than_score_8==6)
{UIW::Albedo_dmg_list_1[3]=UIW::Albedo_def_percent_ratio;}
else if (greater_than_score_8==5)
{UIW::Albedo_dmg_list_1[4]=UIW::Albedo_def_percent_ratio;}
else if (greater_than_score_8==4)
{UIW::Albedo_dmg_list_1[5]=UIW::Albedo_def_percent_ratio;}
else if (greater_than_score_8==3)
{UIW::Albedo_dmg_list_1[6]=UIW::Albedo_def_percent_ratio;}
else if (greater_than_score_8==2)
{UIW::Albedo_dmg_list_1[7]=UIW::Albedo_def_percent_ratio;}
else if (greater_than_score_8==1)
{UIW::Albedo_dmg_list_1[8]=UIW::Albedo_def_percent_ratio;}
else
{UIW::Albedo_dmg_list_1[9]=UIW::Albedo_def_percent_ratio;}

////Flat Def Sort

//Flat Def
if (greater_than_score_9==9)
{UIW::Albedo_dmg_list_1[0]=UIW::Albedo_flat_def_ratio;}
else if (greater_than_score_9==8)
{UIW::Albedo_dmg_list_1[1]=UIW::Albedo_flat_def_ratio;}
else if (greater_than_score_9==7)
{UIW::Albedo_dmg_list_1[2]=UIW::Albedo_flat_def_ratio;}
else if (greater_than_score_9==6)
{UIW::Albedo_dmg_list_1[3]=UIW::Albedo_flat_def_ratio;}
else if (greater_than_score_9==5)
{UIW::Albedo_dmg_list_1[4]=UIW::Albedo_flat_def_ratio;}
else if (greater_than_score_9==4)
{UIW::Albedo_dmg_list_1[5]=UIW::Albedo_flat_def_ratio;}
else if (greater_than_score_9==3)
{UIW::Albedo_dmg_list_1[6]=UIW::Albedo_flat_def_ratio;}
else if (greater_than_score_9==2)
{UIW::Albedo_dmg_list_1[7]=UIW::Albedo_flat_def_ratio;}
else if (greater_than_score_9==1)
{UIW::Albedo_dmg_list_1[8]=UIW::Albedo_flat_def_ratio;}
else
{UIW::Albedo_dmg_list_1[9]=UIW::Albedo_flat_def_ratio;}
;}
public: void Albedo_dmg_list_2_()
{double _Atk = UIW::Albedo_atk_percent_counter + UIW::Albedo_atk_percent_MS_counter;
double _HP = UIW::Albedo_HP_percent_counter + UIW::Albedo_HP_percent_MS_counter;
double _Def = UIW::Albedo_def_percent_counter + UIW::Albedo_def_percent_MS_counter;
double _MS1 = UIW::Albedo_atk_percent_MS_counter + UIW::Albedo_HP_percent_MS_counter + UIW::Albedo_def_percent_MS_counter + UIW::Albedo_elemental_mastery_MS_counter + UIW::Albedo_crit_rate_MS_counter + UIW::Albedo_crit_dmg_MS_counter + UIW::Albedo_energy_recharge_MS_counter + UIW::Albedo_Healing_Bonus_MS_counter + UIW::Albedo_dmg_percent_MS_counter + UIW::Albedo_dmg_percent_physical_MS_counter;
double _EM = UIW::Albedo_elemental_mastery_counter + UIW::Albedo_elemental_mastery_MS_counter;
double _MS2 = UIW::Albedo_crit_rate_counter + UIW::Albedo_crit_dmg_counter + UIW::Albedo_crit_rate_MS_counter
 + UIW::Albedo_crit_dmg_MS_counter;
double _Cr_Cr_MS = UIW::Albedo_crit_rate_counter + UIW::Albedo_crit_rate_MS_counter;
double _Cd_Cd_MS = UIW::Albedo_crit_dmg_counter + UIW::Albedo_crit_dmg_MS_counter;
double _MS3 = UIW::Albedo_crit_rate_MS_counter + UIW::Albedo_crit_dmg_MS_counter;
double _ER = UIW::Albedo_energy_recharge_counter + UIW::Albedo_energy_recharge_MS_counter;
if (UIW::Albedo_atk_percent_MS_counter>17 || _Atk>29 || _MS1>17)
{UIW::Albedo_atk_percent_MS_ratio=0.1;}
if (UIW::Albedo_HP_percent_MS_counter>17 || _HP>29 || _MS1>17)
{UIW::Albedo_HP_percent_MS_ratio=0.11;}
if (UIW::Albedo_def_percent_MS_counter>17 || _Def>29 || _MS1>17)
{UIW::Albedo_def_percent_MS_ratio=0.12;}
if (UIW::Albedo_elemental_mastery_MS_counter>17 || _EM>29 || _MS1>17)
{UIW::Albedo_elemental_mastery_MS_ratio=0.13;}
if (UIW::Albedo_crit_rate_MS_counter>5 || _Cr_Cr_MS>29 || _MS2>39 || _MS3>5 || _MS1>=17)
{UIW::Albedo_crit_rate_MS_ratio=0.14;}
if (UIW::Albedo_crit_dmg_MS_counter>5 || _Cd_Cd_MS>29 || _MS2>39 || _MS3>5 || _MS1>17)
{UIW::Albedo_crit_dmg_MS_ratio=0.15;}
if (UIW::Albedo_energy_recharge_MS_counter>5 || _ER>29 || _MS1>17)
{UIW::Albedo_energy_recharge_MS_ratio=0.16;}
if (UIW::Albedo_dmg_percent_MS_counter>5 || UIW::Albedo_dmg_percent_physical_MS_counter>5)
{UIW::Albedo_dmg_percent_MS_ratio=0.17;}
if (UIW::Albedo_Healing_Bonus_MS_counter>5)
{UIW::Albedo_Healing_Bonus_MS_ratio=0.18;}
double greater_than_score_0=0,
greater_than_score_1=0,
greater_than_score_2=0,
greater_than_score_3=0,
greater_than_score_4=0,
greater_than_score_5=0,
greater_than_score_6=0,
greater_than_score_7=0,
greater_than_score_8=0;
/////Atk Percent Sort
if (UIW::Albedo_atk_percent_MS_ratio>UIW::Albedo_dmg_percent_MS_ratio)
{greater_than_score_0++;}
else {greater_than_score_1++;}
if (UIW::Albedo_atk_percent_MS_ratio>UIW::Albedo_elemental_mastery_MS_ratio)
{greater_than_score_0++;}
else {greater_than_score_2++;}
if (UIW::Albedo_atk_percent_MS_ratio>UIW::Albedo_crit_rate_MS_ratio)
{greater_than_score_0++;}
else {greater_than_score_3++;}
if (UIW::Albedo_atk_percent_MS_ratio>UIW::Albedo_crit_dmg_MS_ratio)
{greater_than_score_0++;}
else {greater_than_score_4++;}
if (UIW::Albedo_atk_percent_MS_ratio>UIW::Albedo_energy_recharge_MS_ratio)
{greater_than_score_0++;}
else {greater_than_score_5++;}
if (UIW::Albedo_atk_percent_MS_ratio>UIW::Albedo_Healing_Bonus_MS_ratio)
{greater_than_score_0++;}
else {greater_than_score_6++;}
if (UIW::Albedo_atk_percent_MS_ratio>UIW::Albedo_HP_percent_MS_ratio)
{greater_than_score_0++;}
else {greater_than_score_7++;}
if (UIW::Albedo_atk_percent_MS_ratio>UIW::Albedo_def_percent_MS_ratio)
{greater_than_score_0++;}
else {greater_than_score_8++;}
//Atk Percent
if (greater_than_score_0==8)
{UIW::Albedo_dmg_list_2[0]=UIW::Albedo_atk_percent_MS_ratio;}
else if (greater_than_score_0==7)
{UIW::Albedo_dmg_list_2[1]=UIW::Albedo_atk_percent_MS_ratio;}
else if (greater_than_score_0==6)
{UIW::Albedo_dmg_list_2[2]=UIW::Albedo_atk_percent_MS_ratio;}
else if (greater_than_score_0==5)
{UIW::Albedo_dmg_list_2[3]=UIW::Albedo_atk_percent_MS_ratio;}
else if (greater_than_score_0==4)
{UIW::Albedo_dmg_list_2[4]=UIW::Albedo_atk_percent_MS_ratio;}
else if (greater_than_score_0==3)
{UIW::Albedo_dmg_list_2[5]=UIW::Albedo_atk_percent_MS_ratio;}
else if (greater_than_score_0==2)
{UIW::Albedo_dmg_list_2[6]=UIW::Albedo_atk_percent_MS_ratio;}
else if (greater_than_score_0==1)
{UIW::Albedo_dmg_list_2[7]=UIW::Albedo_atk_percent_MS_ratio;}
else
{UIW::Albedo_dmg_list_2[8]=UIW::Albedo_atk_percent_MS_ratio;}

////DMG Percent Sort
if (UIW::Albedo_dmg_percent_MS_ratio>UIW::Albedo_elemental_mastery_MS_ratio)
{greater_than_score_1++;}
else {greater_than_score_2++;}
if (UIW::Albedo_dmg_percent_MS_ratio>UIW::Albedo_crit_rate_MS_ratio)
{greater_than_score_1++;}
else {greater_than_score_3++;}
if (UIW::Albedo_dmg_percent_MS_ratio>UIW::Albedo_crit_dmg_MS_ratio)
{greater_than_score_1++;}
else {greater_than_score_4++;}
if (UIW::Albedo_dmg_percent_MS_ratio>UIW::Albedo_energy_recharge_MS_ratio)
{greater_than_score_1++;}
else {greater_than_score_5++;}
if (UIW::Albedo_dmg_percent_MS_ratio>UIW::Albedo_Healing_Bonus_MS_ratio)
{greater_than_score_1++;}
else {greater_than_score_6++;}
if (UIW::Albedo_dmg_percent_MS_ratio>UIW::Albedo_HP_percent_MS_ratio)
{greater_than_score_1++;}
else {greater_than_score_7++;}
if (UIW::Albedo_dmg_percent_MS_ratio>UIW::Albedo_def_percent_MS_ratio)
{greater_than_score_1++;}
else {greater_than_score_8++;}
//dmg percent
if (greater_than_score_1==8)
{UIW::Albedo_dmg_list_2[0]=UIW::Albedo_dmg_percent_MS_ratio;}
else if (greater_than_score_1==7)
{UIW::Albedo_dmg_list_2[1]=UIW::Albedo_dmg_percent_MS_ratio;}
else if (greater_than_score_1==6)
{UIW::Albedo_dmg_list_2[2]=UIW::Albedo_dmg_percent_MS_ratio;}
else if (greater_than_score_1==5)
{UIW::Albedo_dmg_list_2[3]=UIW::Albedo_dmg_percent_MS_ratio;}
else if (greater_than_score_1==4)
{UIW::Albedo_dmg_list_2[4]=UIW::Albedo_dmg_percent_MS_ratio;}
else if (greater_than_score_1==3)
{UIW::Albedo_dmg_list_2[5]=UIW::Albedo_dmg_percent_MS_ratio;}
else if (greater_than_score_1==2)
{UIW::Albedo_dmg_list_2[6]=UIW::Albedo_dmg_percent_MS_ratio;}
else if (greater_than_score_1==1)
{UIW::Albedo_dmg_list_2[7]=UIW::Albedo_dmg_percent_MS_ratio;}
else
{UIW::Albedo_dmg_list_2[8]=UIW::Albedo_dmg_percent_MS_ratio;}

////Elemental Mastery Sort
if (UIW::Albedo_elemental_mastery_MS_ratio>UIW::Albedo_crit_rate_MS_ratio)
{greater_than_score_2++;}
else {greater_than_score_3++;}
if (UIW::Albedo_elemental_mastery_MS_ratio>UIW::Albedo_crit_dmg_MS_ratio)
{greater_than_score_2++;}
else {greater_than_score_4++;}
if (UIW::Albedo_elemental_mastery_MS_ratio>UIW::Albedo_energy_recharge_MS_ratio)
{greater_than_score_2++;}
else {greater_than_score_5++;}
if (UIW::Albedo_elemental_mastery_MS_ratio>UIW::Albedo_Healing_Bonus_MS_ratio)
{greater_than_score_2++;}
else {greater_than_score_6++;}
if (UIW::Albedo_elemental_mastery_MS_ratio>UIW::Albedo_HP_percent_MS_ratio)
{greater_than_score_2++;}
else {greater_than_score_7++;}
if (UIW::Albedo_elemental_mastery_MS_ratio>UIW::Albedo_def_percent_MS_ratio)
{greater_than_score_2++;}
else {greater_than_score_8++;}
//Elemental Mastery
if (greater_than_score_2==8)
{UIW::Albedo_dmg_list_2[0]=UIW::Albedo_elemental_mastery_MS_ratio;}
else if (greater_than_score_2==7)
{UIW::Albedo_dmg_list_2[1]=UIW::Albedo_elemental_mastery_MS_ratio;}
else if (greater_than_score_2==6)
{UIW::Albedo_dmg_list_2[2]=UIW::Albedo_elemental_mastery_MS_ratio;}
else if (greater_than_score_2==5)
{UIW::Albedo_dmg_list_2[3]=UIW::Albedo_elemental_mastery_MS_ratio;}
else if (greater_than_score_2==4)
{UIW::Albedo_dmg_list_2[4]=UIW::Albedo_elemental_mastery_MS_ratio;}
else if (greater_than_score_2==3)
{UIW::Albedo_dmg_list_2[5]=UIW::Albedo_elemental_mastery_MS_ratio;}
else if (greater_than_score_2==2)
{UIW::Albedo_dmg_list_2[6]=UIW::Albedo_elemental_mastery_MS_ratio;}
else if (greater_than_score_2==1)
{UIW::Albedo_dmg_list_2[7]=UIW::Albedo_elemental_mastery_MS_ratio;}
else
{UIW::Albedo_dmg_list_2[8]=UIW::Albedo_elemental_mastery_MS_ratio;}

////Crit Rate Sort
if (UIW::Albedo_crit_rate_MS_ratio>UIW::Albedo_crit_dmg_MS_ratio)
{greater_than_score_3++;}
else {greater_than_score_4++;}
if (UIW::Albedo_crit_rate_MS_ratio>UIW::Albedo_energy_recharge_MS_ratio)
{greater_than_score_3++;}
else {greater_than_score_5++;}
if (UIW::Albedo_crit_rate_MS_ratio>UIW::Albedo_Healing_Bonus_MS_ratio)
{greater_than_score_3++;}
else {greater_than_score_6++;}
if (UIW::Albedo_crit_rate_MS_ratio>UIW::Albedo_HP_percent_MS_ratio)
{greater_than_score_3++;}
else {greater_than_score_7++;}
if (UIW::Albedo_crit_rate_MS_ratio>UIW::Albedo_def_percent_MS_ratio)
{greater_than_score_3++;}
else {greater_than_score_8++;}
//Crit Rate
if (greater_than_score_3==8)
{UIW::Albedo_dmg_list_2[0]=UIW::Albedo_crit_rate_MS_ratio;}
else if (greater_than_score_3==7)
{UIW::Albedo_dmg_list_2[1]=UIW::Albedo_crit_rate_MS_ratio;}
else if (greater_than_score_3==6)
{UIW::Albedo_dmg_list_2[2]=UIW::Albedo_crit_rate_MS_ratio;}
else if (greater_than_score_3==5)
{UIW::Albedo_dmg_list_2[3]=UIW::Albedo_crit_rate_MS_ratio;}
else if (greater_than_score_3==4)
{UIW::Albedo_dmg_list_2[4]=UIW::Albedo_crit_rate_MS_ratio;}
else if (greater_than_score_3==3)
{UIW::Albedo_dmg_list_2[5]=UIW::Albedo_crit_rate_MS_ratio;}
else if (greater_than_score_3==2)
{UIW::Albedo_dmg_list_2[6]=UIW::Albedo_crit_rate_MS_ratio;}
else if (greater_than_score_3==1)
{UIW::Albedo_dmg_list_2[7]=UIW::Albedo_crit_rate_MS_ratio;}
else
{UIW::Albedo_dmg_list_2[8]=UIW::Albedo_crit_rate_MS_ratio;}

////Crit DMG Sort
if (UIW::Albedo_crit_dmg_MS_ratio>UIW::Albedo_energy_recharge_MS_ratio)
{greater_than_score_4++;}
else {greater_than_score_5++;}
if (UIW::Albedo_crit_dmg_MS_ratio>UIW::Albedo_Healing_Bonus_MS_ratio)
{greater_than_score_4++;}
else {greater_than_score_6++;}
if (UIW::Albedo_crit_dmg_MS_ratio>UIW::Albedo_HP_percent_MS_ratio)
{greater_than_score_4++;}
else {greater_than_score_7++;}
if (UIW::Albedo_crit_dmg_MS_ratio>UIW::Albedo_def_percent_MS_ratio)
{greater_than_score_4++;}
else {greater_than_score_8++;}
//Crit DMG
if (greater_than_score_4==8)
{UIW::Albedo_dmg_list_2[0]=UIW::Albedo_crit_dmg_MS_ratio;}
else if (greater_than_score_4==7)
{UIW::Albedo_dmg_list_2[1]=UIW::Albedo_crit_dmg_MS_ratio;}
else if (greater_than_score_4==6)
{UIW::Albedo_dmg_list_2[2]=UIW::Albedo_crit_dmg_MS_ratio;}
else if (greater_than_score_4==5)
{UIW::Albedo_dmg_list_2[3]=UIW::Albedo_crit_dmg_MS_ratio;}
else if (greater_than_score_4==4)
{UIW::Albedo_dmg_list_2[4]=UIW::Albedo_crit_dmg_MS_ratio;}
else if (greater_than_score_4==3)
{UIW::Albedo_dmg_list_2[5]=UIW::Albedo_crit_dmg_MS_ratio;}
else if (greater_than_score_4==2)
{UIW::Albedo_dmg_list_2[6]=UIW::Albedo_crit_dmg_MS_ratio;}
else if (greater_than_score_4==1)
{UIW::Albedo_dmg_list_2[7]=UIW::Albedo_crit_dmg_MS_ratio;}
else
{UIW::Albedo_dmg_list_2[8]=UIW::Albedo_crit_dmg_MS_ratio;}

////Energy Recharge Sort
if (UIW::Albedo_energy_recharge_MS_ratio>UIW::Albedo_Healing_Bonus_MS_ratio)
{greater_than_score_5++;}
else {greater_than_score_6++;}
if (UIW::Albedo_energy_recharge_MS_ratio>UIW::Albedo_HP_percent_MS_ratio)
{greater_than_score_5++;}
else {greater_than_score_7++;}
if (UIW::Albedo_energy_recharge_MS_ratio>UIW::Albedo_def_percent_MS_ratio)
{greater_than_score_5++;}
else {greater_than_score_8++;}
//Energy Recharge
if (greater_than_score_5==8)
{UIW::Albedo_dmg_list_2[0]=UIW::Albedo_energy_recharge_MS_ratio;}
else if (greater_than_score_5==7)
{UIW::Albedo_dmg_list_2[1]=UIW::Albedo_energy_recharge_MS_ratio;}
else if (greater_than_score_5==6)
{UIW::Albedo_dmg_list_2[2]=UIW::Albedo_energy_recharge_MS_ratio;}
else if (greater_than_score_5==5)
{UIW::Albedo_dmg_list_2[3]=UIW::Albedo_energy_recharge_MS_ratio;}
else if (greater_than_score_5==4)
{UIW::Albedo_dmg_list_2[4]=UIW::Albedo_energy_recharge_MS_ratio;}
else if (greater_than_score_5==3)
{UIW::Albedo_dmg_list_2[5]=UIW::Albedo_energy_recharge_MS_ratio;}
else if (greater_than_score_5==2)
{UIW::Albedo_dmg_list_2[6]=UIW::Albedo_energy_recharge_MS_ratio;}
else if (greater_than_score_5==1)
{UIW::Albedo_dmg_list_2[7]=UIW::Albedo_energy_recharge_MS_ratio;}
else
{UIW::Albedo_dmg_list_2[8]=UIW::Albedo_energy_recharge_MS_ratio;}

////Healing Bonus Sort
if (UIW::Albedo_Healing_Bonus_MS_ratio>UIW::Albedo_HP_percent_MS_ratio)
{greater_than_score_6++;}
else {greater_than_score_7++;}
if (UIW::Albedo_Healing_Bonus_MS_ratio>UIW::Albedo_def_percent_MS_ratio)
{greater_than_score_6++;}
else {greater_than_score_8++;}
//Healing Bonus
if (greater_than_score_6==8)
{UIW::Albedo_dmg_list_2[0]=UIW::Albedo_Healing_Bonus_MS_ratio;}
else if (greater_than_score_6==7)
{UIW::Albedo_dmg_list_2[1]=UIW::Albedo_Healing_Bonus_MS_ratio;}
else if (greater_than_score_6==6)
{UIW::Albedo_dmg_list_2[2]=UIW::Albedo_Healing_Bonus_MS_ratio;}
else if (greater_than_score_6==5)
{UIW::Albedo_dmg_list_2[3]=UIW::Albedo_Healing_Bonus_MS_ratio;}
else if (greater_than_score_6==4)
{UIW::Albedo_dmg_list_2[4]=UIW::Albedo_Healing_Bonus_MS_ratio;}
else if (greater_than_score_6==3)
{UIW::Albedo_dmg_list_2[5]=UIW::Albedo_Healing_Bonus_MS_ratio;}
else if (greater_than_score_6==2)
{UIW::Albedo_dmg_list_2[6]=UIW::Albedo_Healing_Bonus_MS_ratio;}
else if (greater_than_score_6==1)
{UIW::Albedo_dmg_list_2[7]=UIW::Albedo_Healing_Bonus_MS_ratio;}
else
{UIW::Albedo_dmg_list_2[8]=UIW::Albedo_Healing_Bonus_MS_ratio;}

////HP percent Sort
if (UIW::Albedo_HP_percent_MS_ratio>UIW::Albedo_def_percent_MS_ratio)
{greater_than_score_7++;}
else {greater_than_score_8++;}
//HP percent
if (greater_than_score_7==8)
{UIW::Albedo_dmg_list_2[0]=UIW::Albedo_HP_percent_MS_ratio;}
else if (greater_than_score_7==7)
{UIW::Albedo_dmg_list_2[1]=UIW::Albedo_HP_percent_MS_ratio;}
else if (greater_than_score_7==6)
{UIW::Albedo_dmg_list_2[2]=UIW::Albedo_HP_percent_MS_ratio;}
else if (greater_than_score_7==5)
{UIW::Albedo_dmg_list_2[3]=UIW::Albedo_HP_percent_MS_ratio;}
else if (greater_than_score_7==4)
{UIW::Albedo_dmg_list_2[4]=UIW::Albedo_HP_percent_MS_ratio;}
else if (greater_than_score_7==3)
{UIW::Albedo_dmg_list_2[5]=UIW::Albedo_HP_percent_MS_ratio;}
else if (greater_than_score_7==2)
{UIW::Albedo_dmg_list_2[6]=UIW::Albedo_HP_percent_MS_ratio;}
else if (greater_than_score_7==1)
{UIW::Albedo_dmg_list_2[7]=UIW::Albedo_HP_percent_MS_ratio;}
else
{UIW::Albedo_dmg_list_2[8]=UIW::Albedo_HP_percent_MS_ratio;}

////UIW::def percent Sort

//UIW::def percent
if (greater_than_score_8==8)
{UIW::Albedo_dmg_list_2[0]=UIW::Albedo_def_percent_MS_ratio;}
else if (greater_than_score_8==7)
{UIW::Albedo_dmg_list_2[1]=UIW::Albedo_def_percent_MS_ratio;}
else if (greater_than_score_8==6)
{UIW::Albedo_dmg_list_2[2]=UIW::Albedo_def_percent_MS_ratio;}
else if (greater_than_score_8==5)
{UIW::Albedo_dmg_list_2[3]=UIW::Albedo_def_percent_MS_ratio;}
else if (greater_than_score_8==4)
{UIW::Albedo_dmg_list_2[4]=UIW::Albedo_def_percent_MS_ratio;}
else if (greater_than_score_8==3)
{UIW::Albedo_dmg_list_2[5]=UIW::Albedo_def_percent_MS_ratio;}
else if (greater_than_score_8==2)
{UIW::Albedo_dmg_list_2[6]=UIW::Albedo_def_percent_MS_ratio;}
else if (greater_than_score_8==1)
{UIW::Albedo_dmg_list_2[7]=UIW::Albedo_def_percent_MS_ratio;}
else
{UIW::Albedo_dmg_list_2[8]=UIW::Albedo_def_percent_MS_ratio;}
;}
public: void Albedo_update_all_functions_now()
{Albedo_atk_percent_ratio_();
Albedo_atk_percent_MS_ratio_();
Albedo_flat_atk_ratio_();
Albedo_HP_percent_ratio_();
Albedo_HP_percent_MS_ratio_();
Albedo_flat_HP_ratio_();
Albedo_def_percent_ratio_();
Albedo_def_percent_MS_ratio_();
Albedo_flat_def_ratio_();
Albedo_dmg_percent_MS_ratio_();
Albedo_elemental_mastery_ratio_();
Albedo_elemental_mastery_MS_ratio_();
Albedo_crit_rate_ratio_();
Albedo_crit_rate_MS_ratio_();
Albedo_crit_dmg_ratio_();
Albedo_crit_dmg_MS_ratio_();
Albedo_energy_recharge_ratio_();
Albedo_energy_recharge_MS_ratio_();
Albedo_dmg_list_1_();
Albedo_dmg_list_2_();
;}
public: void Albedo_which_kind_of_dmg_percent_increment()
{if (UIW::Albedo_Physical_DMG_Flag == 1)
{UIW::Albedo_dmg_percent_physical_MS_counter+=6;
UIW::Albedo_dmg_percent_physical_MS_calc_counter++;}
else if (UIW::Albedo_Elemental_DMG_Flag == 1)
{UIW::Albedo_dmg_percent_MS_counter+=6;
UIW::Albedo_dmg_percent_MS_calc_counter++;}
;}
public: void Albedo_optimize_values()
{for (int artifact_piece=0;artifact_piece<5;artifact_piece++)
{Albedo_update_all_functions_now();
//UIW::current_piece_name legend; 0=atk_percent; 1=dmg_percent; 2=elemental_mastery; 3=crit_rate; 4=crit_dmg; 5=energy_recharge; 6=flat_atk; 7=flat_HP; 8=HP_percent; 9=UIW::def_percent; 10=healing_bonus
if (artifact_piece==4)
{UIW::Albedo_current_piece_name=7;Albedo_update_all_functions_now();}
else if (artifact_piece==3)
{UIW::Albedo_current_piece_name=6;Albedo_update_all_functions_now();}
else if (UIW::Albedo_atk_percent_MS_ratio==UIW::Albedo_dmg_list_2[0])
{UIW::Albedo_atk_percent_MS_counter+=6;UIW::Albedo_atk_percent_MS_calc_counter++;UIW::Albedo_current_piece_name=0;Albedo_update_all_functions_now();}
else if (UIW::Albedo_HP_percent_MS_ratio==UIW::Albedo_dmg_list_2[0])
{UIW::Albedo_HP_percent_MS_counter+=6;UIW::Albedo_current_piece_name=8;Albedo_update_all_functions_now();}
else if (UIW::Albedo_def_percent_MS_ratio==UIW::Albedo_dmg_list_2[0])
{UIW::Albedo_def_percent_MS_counter+=6;UIW::Albedo_def_percent_MS_calc_counter++;UIW::Albedo_current_piece_name=9;Albedo_update_all_functions_now();}
else if (UIW::Albedo_dmg_percent_MS_ratio==UIW::Albedo_dmg_list_2[0])
{Albedo_which_kind_of_dmg_percent_increment();UIW::Albedo_current_piece_name=1;Albedo_update_all_functions_now();}
else if (UIW::Albedo_elemental_mastery_MS_ratio==UIW::Albedo_dmg_list_2[0])
{UIW::Albedo_elemental_mastery_MS_counter+=6;UIW::Albedo_elemental_mastery_MS_calc_counter++;UIW::Albedo_current_piece_name=2;Albedo_update_all_functions_now();}
else if (UIW::Albedo_crit_rate_MS_ratio==UIW::Albedo_dmg_list_2[0])
{UIW::Albedo_crit_rate_MS_counter+=6;UIW::Albedo_crit_rate_MS_calc_counter++;UIW::Albedo_current_piece_name=3;Albedo_update_all_functions_now();}
else if (UIW::Albedo_crit_dmg_MS_ratio==UIW::Albedo_dmg_list_2[0])
{UIW::Albedo_crit_dmg_MS_counter+=6;UIW::Albedo_crit_dmg_MS_calc_counter++;UIW::Albedo_current_piece_name=4;Albedo_update_all_functions_now();}
else if (UIW::Albedo_energy_recharge_MS_ratio==UIW::Albedo_dmg_list_2[0])
{UIW::Albedo_energy_recharge_MS_counter+=6;UIW::Albedo_energy_recharge_MS_calc_counter++;UIW::Albedo_current_piece_name=5;Albedo_update_all_functions_now();}
else if (UIW::Albedo_Healing_Bonus_MS_ratio==UIW::Albedo_dmg_list_2[0])
{UIW::Albedo_Healing_Bonus_MS_counter+=6;UIW::Albedo_Healing_Bonus_MS_calc_counter++;UIW::Albedo_current_piece_name=10;Albedo_update_all_functions_now();;}
//
if (UIW::Albedo_atk_percent_ratio>=UIW::Albedo_dmg_list_1[3] && UIW::Albedo_current_piece_name!=0)
{UIW::Albedo_atk_percent_counter++;Albedo_update_all_functions_now();}
if (UIW::Albedo_flat_atk_ratio>=UIW::Albedo_dmg_list_1[3] && UIW::Albedo_current_piece_name!=6)
{UIW::Albedo_flat_atk_counter++;Albedo_update_all_functions_now();}
//
if (UIW::Albedo_HP_percent_ratio>=UIW::Albedo_dmg_list_1[3] && UIW::Albedo_current_piece_name!=8)
{UIW::Albedo_HP_percent_counter++;Albedo_update_all_functions_now();}
if (UIW::Albedo_flat_HP_ratio>=UIW::Albedo_dmg_list_1[3] && UIW::Albedo_current_piece_name!=7)
{UIW::Albedo_flat_HP_counter++;Albedo_update_all_functions_now();}
//
if (UIW::Albedo_def_percent_ratio>=UIW::Albedo_dmg_list_1[3] && UIW::Albedo_current_piece_name!=9)
{UIW::Albedo_def_percent_counter++;Albedo_update_all_functions_now();}
if (UIW::Albedo_flat_def_ratio>=UIW::Albedo_dmg_list_1[3])
{UIW::Albedo_flat_def_counter++;Albedo_update_all_functions_now();}
//
if (UIW::Albedo_elemental_mastery_ratio>=UIW::Albedo_dmg_list_1[3] && UIW::Albedo_current_piece_name!=2)
{UIW::Albedo_elemental_mastery_counter++;Albedo_update_all_functions_now();}
if (UIW::Albedo_crit_rate_ratio>=UIW::Albedo_dmg_list_1[3] && UIW::Albedo_current_piece_name!=3)
{UIW::Albedo_crit_rate_counter++;Albedo_update_all_functions_now();}
if (UIW::Albedo_crit_dmg_ratio>=UIW::Albedo_dmg_list_1[3] && UIW::Albedo_current_piece_name!=4)
{UIW::Albedo_crit_dmg_counter++;Albedo_update_all_functions_now();}
if (UIW::Albedo_energy_recharge_ratio>=UIW::Albedo_dmg_list_1[3] && UIW::Albedo_current_piece_name!=5)
{UIW::Albedo_energy_recharge_counter++;Albedo_update_all_functions_now();}
for (int artifact_substat=0;artifact_substat<5;artifact_substat++)
{if (UIW::Albedo_atk_percent_ratio==UIW::Albedo_dmg_list_1[0] && UIW::Albedo_current_piece_name!=0)
{UIW::Albedo_atk_percent_counter++;Albedo_update_all_functions_now();continue;}
else if (UIW::Albedo_flat_atk_ratio==UIW::Albedo_dmg_list_1[0] && UIW::Albedo_current_piece_name!=6)
{UIW::Albedo_flat_atk_counter++;Albedo_update_all_functions_now();continue;}
else if (UIW::Albedo_HP_percent_ratio==UIW::Albedo_dmg_list_1[0] && UIW::Albedo_current_piece_name!=8)
{UIW::Albedo_HP_percent_counter++;Albedo_update_all_functions_now(); continue;}
else if (UIW::Albedo_flat_HP_ratio==UIW::Albedo_dmg_list_1[0] && UIW::Albedo_current_piece_name!=7)
{UIW::Albedo_flat_HP_counter++;Albedo_update_all_functions_now();continue;}
else if (UIW::Albedo_def_percent_ratio==UIW::Albedo_dmg_list_1[0] && UIW::Albedo_current_piece_name!=9)
{UIW::Albedo_def_percent_counter++;Albedo_update_all_functions_now();continue;}
else if (UIW::Albedo_flat_def_ratio==UIW::Albedo_dmg_list_1[0])
{UIW::Albedo_flat_def_counter++;Albedo_update_all_functions_now();continue;}
else if (UIW::Albedo_elemental_mastery_ratio==UIW::Albedo_dmg_list_1[0] && UIW::Albedo_current_piece_name!=2)
{UIW::Albedo_elemental_mastery_counter++;Albedo_update_all_functions_now();continue;}
else if (UIW::Albedo_crit_rate_ratio==UIW::Albedo_dmg_list_1[0] && UIW::Albedo_current_piece_name!=3)
{UIW::Albedo_crit_rate_counter++;Albedo_update_all_functions_now();continue;}
else if (UIW::Albedo_crit_dmg_ratio==UIW::Albedo_dmg_list_1[0] && UIW::Albedo_current_piece_name!=4)
{UIW::Albedo_crit_dmg_counter++;Albedo_update_all_functions_now();continue;}
else if (UIW::Albedo_energy_recharge_ratio==UIW::Albedo_dmg_list_1[0] && UIW::Albedo_current_piece_name!=5)
{UIW::Albedo_energy_recharge_counter++;Albedo_update_all_functions_now();continue;};}
;}
;}
public: void Albedo_Wipe_Values() {
UIW::Albedo_Additive_Reaction_Flag = 0,
UIW::Albedo_Multiplicative_Reaction_Flag = 0,
UIW::Albedo_HP_scaling_Flag = 0,
UIW::Albedo_def_scaling_Flag = 0,
UIW::Albedo_atk_scaling_Flag = 0,
UIW::Albedo_Physical_DMG_Flag = 0,
UIW::Albedo_Elemental_DMG_Flag = 0,
UIW::Albedo_Swirlable_Type_DMG_Flag = 0,
UIW::Albedo_emblem_of_severed_fate_artifact_set_4pc_effect_Flag = 0,
UIW::Albedo_elemental_mastery_before_Flag = 0,
UIW::Albedo_dmg_bonus_before_Flag = 0,
UIW::Albedo_Aggravate_TF_Flag = 0,
UIW::Albedo_NA_CA_Flag = 0,
UIW::Albedo_NA_CA_PA_Flag = 0;
UIW::Albedo_Character_Level = 1,
UIW::Albedo_Enemy_Level = 1,
UIW::Albedo_Wpn_Stacks_Count = 0,
UIW::Albedo_Artifact_Stacks_Count = 0,
UIW::Albedo_C2_index = 0,
UIW::Albedo_C3_index = 0,
UIW::Albedo_C4_index = 0,
UIW::Albedo_Pyro_Resonance = 0,
UIW::Albedo_Cryo_Resonance = 0,
UIW::Albedo_Hydro_Resonance = 0,
UIW::Albedo_Electro_Resonance = 0,
UIW::Albedo_Dendro_Resonance = 0,
UIW::Albedo_Geo_Resonance = 0,
UIW::Albedo_Anemo_Resonance = 0;
UIW::Albedo_Talent_Multiplier = 1,
UIW::Albedo_Extra_Unique_Multiplier = 1,
UIW::Albedo_constellation_lvl = -1,
UIW::Albedo_emblem_of_severed_fate_artifact_set_dmg_bonus = 0,
UIW::Albedo_energy_recharge_requirement = 0,
UIW::Albedo_current_piece_name,
UIW::Albedo_base_atk_1 = 0,
UIW::Albedo_base_atk_2 = 0,
UIW::Albedo_base_atk = 0,
UIW::Albedo_flat_atk = 311,
UIW::Albedo_atk_percent = 0,
UIW::Albedo_total_atk = 0,
UIW::Albedo_total_atk_before = 0,
UIW::Albedo_base_def = 0,
UIW::Albedo_flat_def = 0,
UIW::Albedo_def_percent = 0,
UIW::Albedo_total_def = 0,
UIW::Albedo_total_def_before = 0,
UIW::Albedo_base_HP = 0,
UIW::Albedo_flat_HP = 4780,
UIW::Albedo_HP_percent = 0,
UIW::Albedo_total_HP = 0,
UIW::Albedo_total_HP_before = 0,
UIW::Albedo_total_stat_scaling = 0,
UIW::Albedo_total_stat_scaling_before = 0,
UIW::Albedo_dmg_bonus = 0,
UIW::Albedo_total_dmg_bonus = 0,
UIW::Albedo_total_dmg_bonus_before = 0,
UIW::Albedo_EM_scaling_stat_addition = 0,
UIW::Albedo_EM_base = 0,
UIW::Albedo_Def_Multiplier = 0,
UIW::Albedo_Def_Ignored = 0,
UIW::Albedo_Def_Reduction = 0,
UIW::Albedo_Base_Res = 0.10,
UIW::Albedo_Res_Reduction = 0,
UIW::Albedo_Enemy_Res = 0,
UIW::Albedo_EM_Reaction_Coefficient = 1.00,
UIW::Albedo_EM_Additive_Coefficient = 1.00,
UIW::Albedo_EM_Multiplier = 0,
UIW::Albedo_EM_Additive = 0,
UIW::Albedo_reaction_bonus_percent = 0,
UIW::Albedo_Elemental_Mastery = 0,
UIW::Albedo_total_elemental_mastery = 0,
UIW::Albedo_total_elemental_mastery_before = 0,
UIW::Albedo_flat_dmg = 0,
UIW::Albedo_Level_Multiplier = 0,
UIW::Albedo_crit_rate = 0.01 * (5),
UIW::Albedo_total_Crit_Rate = 0,
UIW::Albedo_total_crit_rate_before = 0,
UIW::Albedo_crit_dmg = 0.01 * (50),
UIW::Albedo_total_Crit_DMG = 0,
UIW::Albedo_total_crit_dmg_before = 0,
UIW::Albedo_energy_recharge = 0.01 * (100),
UIW::Albedo_total_Energy_Recharge = 0,
UIW::Albedo_total_energy_recharge_before = 0,
UIW::Albedo_Healing_Bonus = 0,
UIW::Albedo_total_Healing_Bonus = 0,
UIW::Albedo_total_Healing_Bonus_before = 0,
UIW::Albedo_Flat_DMG_buff = 0,
UIW::Albedo_Flat_ATK_buff = 0,
UIW::Albedo_ATK_Percent_buff = 0,
UIW::Albedo_Flat_DEF_buff = 0,
UIW::Albedo_DEF_Percent_buff = 0,
UIW::Albedo_Flat_HP_buff = 0,
UIW::Albedo_HP_Percent_buff = 0,
UIW::Albedo_DMG_Percent_buff = 0,
UIW::Albedo_Elemental_Mastery_buff = 0,
UIW::Albedo_Reaction_Bonus_Percent_buff = 0,
UIW::Albedo_CRIT_DMG_Percent_buff = 0,
UIW::Albedo_CRIT_Rate_Percent_buff = 0,
UIW::Albedo_atk_percent_ratio = 0,
UIW::Albedo_flat_atk_ratio = 0,
UIW::Albedo_HP_percent_ratio = 0,
UIW::Albedo_flat_HP_ratio = 0,
UIW::Albedo_def_percent_ratio = 0,
UIW::Albedo_flat_def_ratio = 0,
UIW::Albedo_elemental_mastery_ratio = 0,
UIW::Albedo_crit_rate_ratio = 0,
UIW::Albedo_crit_dmg_ratio = 0,
UIW::Albedo_energy_recharge_ratio = 0,
UIW::Albedo_atk_percent_MS_ratio = 0,
UIW::Albedo_def_percent_MS_ratio = 0,
UIW::Albedo_HP_percent_MS_ratio = 0,
UIW::Albedo_dmg_percent_MS_ratio = 0,
UIW::Albedo_elemental_mastery_MS_ratio = 0,
UIW::Albedo_crit_rate_MS_ratio = 0,
UIW::Albedo_crit_dmg_MS_ratio = 0,
UIW::Albedo_Healing_Bonus_MS_ratio = 0,
UIW::Albedo_energy_recharge_MS_ratio = 0,
UIW::Albedo_atk_percent_counter = 0,
UIW::Albedo_atk_percent_MS_counter = 0,
UIW::Albedo_flat_atk_counter = 0,
UIW::Albedo_HP_percent_counter = 0,
UIW::Albedo_HP_percent_MS_counter = 0,
UIW::Albedo_flat_HP_counter = 0,
UIW::Albedo_Healing_Bonus_MS_counter = 0,
UIW::Albedo_def_percent_counter = 0,
UIW::Albedo_def_percent_MS_counter = 0,
UIW::Albedo_flat_def_counter = 0,
UIW::Albedo_dmg_percent_MS_counter = 0,
UIW::Albedo_dmg_percent_physical_MS_counter = 0,
UIW::Albedo_elemental_mastery_counter = 0,
UIW::Albedo_elemental_mastery_MS_counter = 0,
UIW::Albedo_crit_rate_counter = 0,
UIW::Albedo_crit_rate_MS_counter = 0,
UIW::Albedo_crit_dmg_counter = 0,
UIW::Albedo_crit_dmg_MS_counter = 0,
UIW::Albedo_energy_recharge_counter = 0,
UIW::Albedo_energy_recharge_MS_counter = 0,
UIW::Albedo_atk_percent_MS_calc_counter = 0,
UIW::Albedo_HP_percent_MS_calc_counter = 0,
UIW::Albedo_Healing_Bonus_MS_calc_counter = 0,
UIW::Albedo_def_percent_MS_calc_counter = 0,
UIW::Albedo_dmg_percent_MS_calc_counter = 0,
UIW::Albedo_dmg_percent_physical_MS_calc_counter = 0,
UIW::Albedo_elemental_mastery_MS_calc_counter = 0,
UIW::Albedo_crit_rate_MS_calc_counter = 0,
UIW::Albedo_crit_dmg_MS_calc_counter = 0,
UIW::Albedo_energy_recharge_MS_calc_counter = 0,
UIW::Albedo_Temp_Flat_DMG_buff = 0,
UIW::Albedo_Temp_Flat_ATK_buff = 0,
UIW::Albedo_Temp_ATK_Percent_buff = 0,
UIW::Albedo_Temp_Flat_DEF_buff = 0,
UIW::Albedo_Temp_DEF_Percent_buff = 0,
UIW::Albedo_Temp_Flat_HP_buff = 0,
UIW::Albedo_Temp_HP_Percent_buff = 0,
UIW::Albedo_Temp_DMG_Percent_buff = 0,
UIW::Albedo_Temp_Elemental_Mastery_buff = 0,
UIW::Albedo_Temp_Reaction_Bonus_Percent_buff = 0,
UIW::Albedo_Temp_CRIT_DMG_Percent_buff = 0,
UIW::Albedo_Temp_CRIT_Rate_Percent_buff = 0,
UIW::Albedo_Temp_Def_Reduction = 0,
UIW::Albedo_Temp_Res_Reduction = 0;
}
public: void Albedo_Save_Settings() {
StreamWriter^ Albedo_Settings = gcnew StreamWriter("Albedo.txt",false);
Albedo_Settings->WriteLine(this->Albedo_Character_Level->Text);
Albedo_Settings->WriteLine(this->Albedo_Constellations->Text);
Albedo_Settings->WriteLine(this->Albedo_Weapons->Text);
Albedo_Settings->WriteLine(this->Albedo_Artifact_Set->Text);
Albedo_Settings->WriteLine(this->Albedo_Motion_Value->Value);
Albedo_Settings->WriteLine(this->Albedo_ATK_Type->Text);
Albedo_Settings->WriteLine(this->Albedo_ATK_Element->Text);
Albedo_Settings->WriteLine(this->Albedo_Team_Member_1->Text);
Albedo_Settings->WriteLine(this->Albedo_Team_Member_2->Text);
Albedo_Settings->WriteLine(this->Albedo_Team_Member_3->Text);
Albedo_Settings->WriteLine(this->Albedo_Enemy_Elemental_Aura->Text);
Albedo_Settings->WriteLine(this->Albedo_Enemy_Level->Text);
Albedo_Settings->WriteLine(this->Albedo_Enemy_Res->Value);
Albedo_Settings->WriteLine(this->Albedo_ICD_Active->Text);
Albedo_Settings->WriteLine(this->Albedo_TotalATK_Before->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalATK_After->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalBASE_DMG_Before->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalBASE_DMG_After->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalCritDMG_Before->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalCRITDMG_After->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalRatePercent_Before->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalRatePercent_After->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalEM_Before->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalEM_After->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalDMGPercent_Before->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalDMGPercent_After->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalHP_Before->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalHP_After->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalDEF_Before->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalDEF_After->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalER_Before->Value);
Albedo_Settings->WriteLine(this->Albedo_TotalER_After->Value);
Albedo_Settings->WriteLine(this->Albedo_ATKPercent_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_ATKPercent_MS_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_HPPercent_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_HPPercent_MS_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_DEFPercent_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_DEFPercent_MS_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_FLATATK_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_FLATHP_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_FLATDEF_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_DMGPercent_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_CRITDMG_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_CRITDMG_MS_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_RatePercent_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_RatePercent_MS_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_EM_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_EM_MS_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_ERPercent_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_ERPercent_MS_Rolls->Value);
Albedo_Settings->WriteLine(this->Albedo_ATKPercent_Value->Value);
Albedo_Settings->WriteLine(this->Albedo_HPPercent_Value->Value);
Albedo_Settings->WriteLine(this->Albedo_DEFPercent_Value->Value);
Albedo_Settings->WriteLine(this->Albedo_FLATATK_Value->Value);
Albedo_Settings->WriteLine(this->Albedo_FLATHP_Value->Value);
Albedo_Settings->WriteLine(this->Albedo_FLATDEF_Value->Value);
Albedo_Settings->WriteLine(this->Albedo_DMG_Percent_Value->Value);
Albedo_Settings->WriteLine(this->Albedo_CRITDMG_Value->Value);
Albedo_Settings->WriteLine(this->Albedo_RatePercent_Value->Value);
Albedo_Settings->WriteLine(this->Albedo_EM_Value->Value);
Albedo_Settings->WriteLine(this->Albedo_ER_Value->Value);
Albedo_Settings->Close();}
public: void Albedo_Load_Settings() {
StreamReader^ Albedo_Settings = gcnew StreamReader("Albedo.txt",false);
if (Albedo_Settings != nullptr) {
this->Albedo_Character_Level->Text = Albedo_Settings->ReadLine();
this->Albedo_Constellations->Text = Albedo_Settings->ReadLine();
this->Albedo_Weapons->Text = Albedo_Settings->ReadLine();
this->Albedo_Artifact_Set->Text = Albedo_Settings->ReadLine();
this->Albedo_Motion_Value->Text = Albedo_Settings->ReadLine();
this->Albedo_ATK_Type->Text = Albedo_Settings->ReadLine();
this->Albedo_ATK_Element->Text = Albedo_Settings->ReadLine();
this->Albedo_Team_Member_1->Text = Albedo_Settings->ReadLine();
this->Albedo_Team_Member_2->Text = Albedo_Settings->ReadLine();
this->Albedo_Team_Member_3->Text = Albedo_Settings->ReadLine();
this->Albedo_Enemy_Elemental_Aura->Text = Albedo_Settings->ReadLine();
this->Albedo_Enemy_Level->Text = Albedo_Settings->ReadLine();
this->Albedo_Enemy_Res->Text = Albedo_Settings->ReadLine();
this->Albedo_ICD_Active->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalATK_Before->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalATK_After->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalBASE_DMG_Before->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalBASE_DMG_After->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalCritDMG_Before->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalCRITDMG_After->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalRatePercent_Before->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalRatePercent_After->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalEM_Before->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalEM_After->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalDMGPercent_Before->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalDMGPercent_After->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalHP_Before->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalHP_After->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalDEF_Before->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalDEF_After->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalER_Before->Text = Albedo_Settings->ReadLine();
this->Albedo_TotalER_After->Text = Albedo_Settings->ReadLine();
this->Albedo_ATKPercent_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_ATKPercent_MS_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_HPPercent_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_HPPercent_MS_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_DEFPercent_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_DEFPercent_MS_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_FLATATK_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_FLATHP_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_FLATDEF_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_DMGPercent_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_CRITDMG_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_CRITDMG_MS_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_RatePercent_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_RatePercent_MS_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_EM_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_EM_MS_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_ERPercent_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_ERPercent_MS_Rolls->Text = Albedo_Settings->ReadLine();
this->Albedo_ATKPercent_Value->Text = Albedo_Settings->ReadLine();
this->Albedo_HPPercent_Value->Text = Albedo_Settings->ReadLine();
this->Albedo_DEFPercent_Value->Text = Albedo_Settings->ReadLine();
this->Albedo_FLATATK_Value->Text = Albedo_Settings->ReadLine();
this->Albedo_FLATHP_Value->Text = Albedo_Settings->ReadLine();
this->Albedo_FLATDEF_Value->Text = Albedo_Settings->ReadLine();
this->Albedo_DMG_Percent_Value->Text = Albedo_Settings->ReadLine();
this->Albedo_CRITDMG_Value->Text = Albedo_Settings->ReadLine();
this->Albedo_RatePercent_Value->Text = Albedo_Settings->ReadLine();
this->Albedo_EM_Value->Text = Albedo_Settings->ReadLine();
this->Albedo_ER_Value->Text = Albedo_Settings->ReadLine();}
Albedo_Settings->Close();}
public: void Albedo_Team_Member_Assign() {
Team_Member_1 = this->Albedo_Team_Member_1->Text;
Team_Member_2 = this->Albedo_Team_Member_2->Text;
Team_Member_3 = this->Albedo_Team_Member_3->Text;
}

public: System::Void Albedo_Page_Leave(System::Object^ sender, System::EventArgs^ e) {
Albedo_Save_Settings();}
public: System::Void Albedo_Page_Enter(System::Object^ sender, System::EventArgs^ e) {
Albedo_Load_Settings();
Albedo_Team_Member_Assign();
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
if (this->tabControl1->SelectedIndex == 1) {
Albedo_Save_Settings();} 
}
private: System::Void Albedo_Team_Member_1_Leave(System::Object^ sender, System::EventArgs^ e) {
Albedo_Team_Member_Assign();
}


};
}