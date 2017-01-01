#pragma once
#include<process.h>
#include<Windows.h>
#include<stdio.h>


namespace XConnect {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::Win32;
	using namespace VIBlend::WinForms::Controls;
	using namespace System::Diagnostics;
    using namespace System::ComponentModel;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
        public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  MenuStrip;
	protected: 
	private: System::Windows::Forms::ToolStrip^  AccessStrip;
	private: System::Windows::Forms::StatusStrip^  StatusStrip;
	private: System::Windows::Forms::SplitContainer^  VertSplitContainer;
	private: System::Windows::Forms::SplitContainer^  HorzSplitContainer;
	private: System::Windows::Forms::TabControl^  BrowserTab;
	private: System::Windows::Forms::TabPage^  ChatRoom;
	private: System::Windows::Forms::TabPage^  BuzzTab;
	private: System::Windows::Forms::ImageList^  TabIcons;
	private: System::Windows::Forms::TabControl^  ToolControl;
	private: System::Windows::Forms::TabPage^  LauncherTab;
	private: System::Windows::Forms::TabPage^  ChatBoxTab;
	private: System::Windows::Forms::TabControl^  MessageBoard;
	private: System::Windows::Forms::TabPage^  AdminMsg;
	private: System::Windows::Forms::TabPage^  ServerMsg;
	private: System::Windows::Forms::ToolStripMenuItem^  FileMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  ExitFileMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ChatMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  ConnectChatRoomMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  LaunchMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  CommandsMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  ConfigMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  HelpMenu;
	private: System::Windows::Forms::WebBrowser^  ChatBrowser;
	private: System::Windows::Forms::Label^  ChatRoom_ID_Provider;
	private: System::Windows::Forms::TextBox^  ChatRoom_Title;
	private: System::Windows::Forms::TextBox^  ChatRoom_Info;
	private: VIBlend::WinForms::Controls::vButton^  ChatRoom_Create;
	private: System::Windows::Forms::TabPage^  LauncherConfigTab;
	private: System::Windows::Forms::Label^  LauncherConfigGameLabel3;

	private: System::Windows::Forms::Label^  LauncherConfigGameLabel2;

	private: System::Windows::Forms::Label^  LauncherConfigGameLabel1;
	private: System::Windows::Forms::Label^  LauncherConfigFields;
	private: System::Windows::Forms::Label^  LauncherConfigIntro;
	private: System::Windows::Forms::Label^  LauncherConfigGameLabel4;
	private: VIBlend::WinForms::Controls::vButton^  LauncherConfigApply;
	private: VIBlend::WinForms::Controls::vButton^  LauncherConfigBrowse4;
	private: VIBlend::WinForms::Controls::vButton^  LauncherConfigBrowse3;
	private: VIBlend::WinForms::Controls::vButton^  LauncherConfigBrowse2;
	private: VIBlend::WinForms::Controls::vButton^  LauncherConfigBrowse1;
	private: System::Windows::Forms::TextBox^  LauncherConfigLoc2;
	private: System::Windows::Forms::TextBox^  LauncherConfigLoc3;
	private: System::Windows::Forms::TextBox^  LauncherConfigLoc4;
	private: System::Windows::Forms::TextBox^  LauncherConfigLoc1;
	private: System::Windows::Forms::TextBox^  LauncherConfigGameTitle2;
	private: System::Windows::Forms::TextBox^  LauncherConfigGameTitle4;
	private: System::Windows::Forms::TextBox^  LauncherConfigGameTitle3;
	private: System::Windows::Forms::TextBox^  LauncherConfigGameTitle1;
	private: System::Windows::Forms::TabPage^  AboutTabPage;
	private: System::Windows::Forms::Label^  AboutTabText;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  ConnectTemp;

	private: VIBlend::WinForms::Controls::vButton^  ConnectConnect;
	private: VIBlend::WinForms::Controls::vButton^  LauncherBtn4;
	private: VIBlend::WinForms::Controls::vButton^  LauncherBtn3;
	private: VIBlend::WinForms::Controls::vButton^  LauncherBtn2;
	private: VIBlend::WinForms::Controls::vButton^  LauncherBtn1;
	private: System::Windows::Forms::TextBox^  ConnectRoomID;
	private: System::Windows::Forms::ToolStripMenuItem^  LauncherConfigMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  AboutHelpMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  LaunchMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  LaunchMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  LaunchMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  LaunchMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  AppConfigBtn;
	private: System::Windows::Forms::ToolStripMenuItem^  RefreshRoom;
	private: System::Windows::Forms::ToolStripMenuItem^  RefreshBuzz;
	private: System::Windows::Forms::ToolStripMenuItem^  RefreshMessages;
	private: System::Windows::Forms::Timer^  BrowserUptate;
	private: System::Windows::Forms::WebBrowser^  AdminMsgB;
	private: System::Windows::Forms::WebBrowser^  ServerMsgB;
	private: System::Windows::Forms::WebBrowser^  BuzzBrowser;
	private: System::Windows::Forms::TabPage^  AppConfig;
private: VIBlend::WinForms::Controls::vCheckBox^  AppConfigEnNotify;


private: VIBlend::WinForms::Controls::vCheckBox^  AppConfigRefreshAuto;

private: VIBlend::WinForms::Controls::vCheckBox^  AppConfigAutoLoad;


private: VIBlend::WinForms::Controls::vButton^  DefaultAppConfig;

private: VIBlend::WinForms::Controls::vButton^  SaveAppConfig;
private: System::Windows::Forms::NotifyIcon^  NotifyTray;
private: System::Windows::Forms::ContextMenuStrip^  TrayMenu;
private: System::Windows::Forms::ToolStripMenuItem^  ExitTrayIcon;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
private: System::Windows::Forms::ContextMenuStrip^  TabMenu;
private: System::Windows::Forms::ToolStripMenuItem^  CloseTab;
private: VIBlend::WinForms::Controls::vStripsRenderer^  StripRender;














	private: System::ComponentModel::IContainer^  components;


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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			VIBlend::WinForms::Controls::vToolStripProfessionalRenderer^  vToolStripProfessionalRenderer1 = (gcnew VIBlend::WinForms::Controls::vToolStripProfessionalRenderer());
			this->MenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->FileMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitFileMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ChatMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ConnectChatRoomMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LaunchMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LaunchMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LaunchMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LaunchMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LaunchMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CommandsMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RefreshRoom = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RefreshBuzz = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RefreshMessages = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ConfigMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LauncherConfigMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AppConfigBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HelpMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutHelpMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AccessStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->StatusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->VertSplitContainer = (gcnew System::Windows::Forms::SplitContainer());
			this->HorzSplitContainer = (gcnew System::Windows::Forms::SplitContainer());
			this->BrowserTab = (gcnew System::Windows::Forms::TabControl());
			this->TabMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->CloseTab = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ChatRoom = (gcnew System::Windows::Forms::TabPage());
			this->ChatBrowser = (gcnew System::Windows::Forms::WebBrowser());
			this->BuzzTab = (gcnew System::Windows::Forms::TabPage());
			this->BuzzBrowser = (gcnew System::Windows::Forms::WebBrowser());
			this->TabIcons = (gcnew System::Windows::Forms::ImageList(this->components));
			this->ToolControl = (gcnew System::Windows::Forms::TabControl());
			this->LauncherTab = (gcnew System::Windows::Forms::TabPage());
			this->LauncherBtn4 = (gcnew VIBlend::WinForms::Controls::vButton());
			this->LauncherBtn3 = (gcnew VIBlend::WinForms::Controls::vButton());
			this->LauncherBtn2 = (gcnew VIBlend::WinForms::Controls::vButton());
			this->LauncherBtn1 = (gcnew VIBlend::WinForms::Controls::vButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ChatBoxTab = (gcnew System::Windows::Forms::TabPage());
			this->ChatRoom_ID_Provider = (gcnew System::Windows::Forms::Label());
			this->ChatRoom_Title = (gcnew System::Windows::Forms::TextBox());
			this->ChatRoom_Info = (gcnew System::Windows::Forms::TextBox());
			this->ChatRoom_Create = (gcnew VIBlend::WinForms::Controls::vButton());
			this->MessageBoard = (gcnew System::Windows::Forms::TabControl());
			this->AdminMsg = (gcnew System::Windows::Forms::TabPage());
			this->AdminMsgB = (gcnew System::Windows::Forms::WebBrowser());
			this->ServerMsg = (gcnew System::Windows::Forms::TabPage());
			this->ServerMsgB = (gcnew System::Windows::Forms::WebBrowser());
			this->AppConfig = (gcnew System::Windows::Forms::TabPage());
			this->SaveAppConfig = (gcnew VIBlend::WinForms::Controls::vButton());
			this->AppConfigEnNotify = (gcnew VIBlend::WinForms::Controls::vCheckBox());
			this->AppConfigRefreshAuto = (gcnew VIBlend::WinForms::Controls::vCheckBox());
			this->AppConfigAutoLoad = (gcnew VIBlend::WinForms::Controls::vCheckBox());
			this->DefaultAppConfig = (gcnew VIBlend::WinForms::Controls::vButton());
			this->AboutTabPage = (gcnew System::Windows::Forms::TabPage());
			this->AboutTabText = (gcnew System::Windows::Forms::Label());
			this->LauncherConfigTab = (gcnew System::Windows::Forms::TabPage());
			this->LauncherConfigApply = (gcnew VIBlend::WinForms::Controls::vButton());
			this->LauncherConfigBrowse4 = (gcnew VIBlend::WinForms::Controls::vButton());
			this->LauncherConfigBrowse3 = (gcnew VIBlend::WinForms::Controls::vButton());
			this->LauncherConfigBrowse2 = (gcnew VIBlend::WinForms::Controls::vButton());
			this->LauncherConfigBrowse1 = (gcnew VIBlend::WinForms::Controls::vButton());
			this->LauncherConfigLoc2 = (gcnew System::Windows::Forms::TextBox());
			this->LauncherConfigLoc3 = (gcnew System::Windows::Forms::TextBox());
			this->LauncherConfigLoc4 = (gcnew System::Windows::Forms::TextBox());
			this->LauncherConfigLoc1 = (gcnew System::Windows::Forms::TextBox());
			this->LauncherConfigGameTitle2 = (gcnew System::Windows::Forms::TextBox());
			this->LauncherConfigGameTitle4 = (gcnew System::Windows::Forms::TextBox());
			this->LauncherConfigGameTitle3 = (gcnew System::Windows::Forms::TextBox());
			this->LauncherConfigGameTitle1 = (gcnew System::Windows::Forms::TextBox());
			this->LauncherConfigGameLabel4 = (gcnew System::Windows::Forms::Label());
			this->LauncherConfigGameLabel3 = (gcnew System::Windows::Forms::Label());
			this->LauncherConfigGameLabel2 = (gcnew System::Windows::Forms::Label());
			this->LauncherConfigGameLabel1 = (gcnew System::Windows::Forms::Label());
			this->LauncherConfigFields = (gcnew System::Windows::Forms::Label());
			this->LauncherConfigIntro = (gcnew System::Windows::Forms::Label());
			this->ConnectTemp = (gcnew System::Windows::Forms::TabPage());
			this->ConnectRoomID = (gcnew System::Windows::Forms::TextBox());
			this->ConnectConnect = (gcnew VIBlend::WinForms::Controls::vButton());
			this->BrowserUptate = (gcnew System::Windows::Forms::Timer(this->components));
			this->NotifyTray = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->TrayMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ExitTrayIcon = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->StripRender = (gcnew VIBlend::WinForms::Controls::vStripsRenderer(this->components));
			this->MenuStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->VertSplitContainer))->BeginInit();
			this->VertSplitContainer->Panel1->SuspendLayout();
			this->VertSplitContainer->Panel2->SuspendLayout();
			this->VertSplitContainer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HorzSplitContainer))->BeginInit();
			this->HorzSplitContainer->Panel1->SuspendLayout();
			this->HorzSplitContainer->Panel2->SuspendLayout();
			this->HorzSplitContainer->SuspendLayout();
			this->BrowserTab->SuspendLayout();
			this->TabMenu->SuspendLayout();
			this->ChatRoom->SuspendLayout();
			this->BuzzTab->SuspendLayout();
			this->ToolControl->SuspendLayout();
			this->LauncherTab->SuspendLayout();
			this->ChatBoxTab->SuspendLayout();
			this->MessageBoard->SuspendLayout();
			this->AdminMsg->SuspendLayout();
			this->ServerMsg->SuspendLayout();
			this->AppConfig->SuspendLayout();
			this->AboutTabPage->SuspendLayout();
			this->LauncherConfigTab->SuspendLayout();
			this->ConnectTemp->SuspendLayout();
			this->TrayMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// MenuStrip
			// 
			this->MenuStrip->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"MenuStrip.BackgroundImage")));
			this->MenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->FileMenu, this->ChatMenu, 
				this->LaunchMenu, this->CommandsMenu, this->ConfigMenu, this->HelpMenu});
			this->MenuStrip->Location = System::Drawing::Point(0, 0);
			this->MenuStrip->Name = L"MenuStrip";
			this->MenuStrip->Size = System::Drawing::Size(1141, 24);
			this->MenuStrip->TabIndex = 0;
			this->MenuStrip->Text = L"MenuStrip";
			// 
			// FileMenu
			// 
			this->FileMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->ExitFileMenuItem});
			this->FileMenu->Name = L"FileMenu";
			this->FileMenu->Size = System::Drawing::Size(37, 20);
			this->FileMenu->Text = L"File";
			// 
			// ExitFileMenuItem
			// 
			this->ExitFileMenuItem->Name = L"ExitFileMenuItem";
			this->ExitFileMenuItem->Size = System::Drawing::Size(92, 22);
			this->ExitFileMenuItem->Text = L"Exit";
			this->ExitFileMenuItem->Click += gcnew System::EventHandler(this, &Form1::ExitFileMenuItem_Click);
			// 
			// ChatMenu
			// 
			this->ChatMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->ConnectChatRoomMenuItem});
			this->ChatMenu->Name = L"ChatMenu";
			this->ChatMenu->Size = System::Drawing::Size(76, 20);
			this->ChatMenu->Text = L"ChatRoom";
			// 
			// ConnectChatRoomMenuItem
			// 
			this->ConnectChatRoomMenuItem->Name = L"ConnectChatRoomMenuItem";
			this->ConnectChatRoomMenuItem->Size = System::Drawing::Size(168, 22);
			this->ConnectChatRoomMenuItem->Text = L"Connect to Room";
			this->ConnectChatRoomMenuItem->Click += gcnew System::EventHandler(this, &Form1::ConnectChatRoomMenuItem_Click);
			// 
			// LaunchMenu
			// 
			this->LaunchMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->LaunchMenuItem1, 
				this->LaunchMenuItem2, this->LaunchMenuItem3, this->LaunchMenuItem4});
			this->LaunchMenu->Name = L"LaunchMenu";
			this->LaunchMenu->Size = System::Drawing::Size(58, 20);
			this->LaunchMenu->Text = L"Launch";
			// 
			// LaunchMenuItem1
			// 
			this->LaunchMenuItem1->Name = L"LaunchMenuItem1";
			this->LaunchMenuItem1->ShortcutKeys = System::Windows::Forms::Keys::F6;
			this->LaunchMenuItem1->Size = System::Drawing::Size(132, 22);
			this->LaunchMenuItem1->Text = L"Launch";
			this->LaunchMenuItem1->Click += gcnew System::EventHandler(this, &Form1::LaunchMenuItem1_Click);
			// 
			// LaunchMenuItem2
			// 
			this->LaunchMenuItem2->Name = L"LaunchMenuItem2";
			this->LaunchMenuItem2->ShortcutKeys = System::Windows::Forms::Keys::F7;
			this->LaunchMenuItem2->Size = System::Drawing::Size(132, 22);
			this->LaunchMenuItem2->Text = L"Launch";
			this->LaunchMenuItem2->Click += gcnew System::EventHandler(this, &Form1::LaunchMenuItem2_Click);
			// 
			// LaunchMenuItem3
			// 
			this->LaunchMenuItem3->Name = L"LaunchMenuItem3";
			this->LaunchMenuItem3->ShortcutKeys = System::Windows::Forms::Keys::F8;
			this->LaunchMenuItem3->Size = System::Drawing::Size(132, 22);
			this->LaunchMenuItem3->Text = L"Launch";
			this->LaunchMenuItem3->Click += gcnew System::EventHandler(this, &Form1::LaunchMenuItem3_Click);
			// 
			// LaunchMenuItem4
			// 
			this->LaunchMenuItem4->Name = L"LaunchMenuItem4";
			this->LaunchMenuItem4->ShortcutKeys = System::Windows::Forms::Keys::F9;
			this->LaunchMenuItem4->Size = System::Drawing::Size(132, 22);
			this->LaunchMenuItem4->Text = L"Launch";
			this->LaunchMenuItem4->Click += gcnew System::EventHandler(this, &Form1::LaunchMenuItem4_Click);
			// 
			// CommandsMenu
			// 
			this->CommandsMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->RefreshRoom, 
				this->RefreshBuzz, this->RefreshMessages});
			this->CommandsMenu->Name = L"CommandsMenu";
			this->CommandsMenu->Size = System::Drawing::Size(81, 20);
			this->CommandsMenu->Text = L"Commands";
			// 
			// RefreshRoom
			// 
			this->RefreshRoom->Name = L"RefreshRoom";
			this->RefreshRoom->Size = System::Drawing::Size(212, 22);
			this->RefreshRoom->Text = L"Refresh XStrike ChatRoom";
			this->RefreshRoom->Click += gcnew System::EventHandler(this, &Form1::RefreshRoom_Click);
			// 
			// RefreshBuzz
			// 
			this->RefreshBuzz->Name = L"RefreshBuzz";
			this->RefreshBuzz->Size = System::Drawing::Size(212, 22);
			this->RefreshBuzz->Text = L"Refresh Buzz";
			this->RefreshBuzz->Click += gcnew System::EventHandler(this, &Form1::RefreshBuzz_Click);
			// 
			// RefreshMessages
			// 
			this->RefreshMessages->Name = L"RefreshMessages";
			this->RefreshMessages->Size = System::Drawing::Size(212, 22);
			this->RefreshMessages->Text = L"Refresh Messages";
			this->RefreshMessages->Click += gcnew System::EventHandler(this, &Form1::RefreshMessages_Click);
			// 
			// ConfigMenu
			// 
			this->ConfigMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->LauncherConfigMenuItem, 
				this->AppConfigBtn});
			this->ConfigMenu->Name = L"ConfigMenu";
			this->ConfigMenu->Size = System::Drawing::Size(93, 20);
			this->ConfigMenu->Text = L"Configuration";
			// 
			// LauncherConfigMenuItem
			// 
			this->LauncherConfigMenuItem->Name = L"LauncherConfigMenuItem";
			this->LauncherConfigMenuItem->Size = System::Drawing::Size(212, 22);
			this->LauncherConfigMenuItem->Text = L"Launcher Configuration";
			this->LauncherConfigMenuItem->Click += gcnew System::EventHandler(this, &Form1::LauncherConfigMenuItem_Click);
			// 
			// AppConfigBtn
			// 
			this->AppConfigBtn->Name = L"AppConfigBtn";
			this->AppConfigBtn->Size = System::Drawing::Size(212, 22);
			this->AppConfigBtn->Text = L"Application Configuration";
			this->AppConfigBtn->Click += gcnew System::EventHandler(this, &Form1::AppConfigBtn_Click);
			// 
			// HelpMenu
			// 
			this->HelpMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->AboutHelpMenuItem});
			this->HelpMenu->Name = L"HelpMenu";
			this->HelpMenu->Size = System::Drawing::Size(44, 20);
			this->HelpMenu->Text = L"Help";
			// 
			// AboutHelpMenuItem
			// 
			this->AboutHelpMenuItem->Name = L"AboutHelpMenuItem";
			this->AboutHelpMenuItem->Size = System::Drawing::Size(107, 22);
			this->AboutHelpMenuItem->Text = L"About";
			this->AboutHelpMenuItem->Click += gcnew System::EventHandler(this, &Form1::AboutHelpMenuItem_Click);
			// 
			// AccessStrip
			// 
			this->AccessStrip->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"AccessStrip.BackgroundImage")));
			this->AccessStrip->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->AccessStrip->Location = System::Drawing::Point(0, 24);
			this->AccessStrip->Name = L"AccessStrip";
			this->AccessStrip->Size = System::Drawing::Size(1141, 25);
			this->AccessStrip->TabIndex = 1;
			this->AccessStrip->Text = L"AccessStrip";
			// 
			// StatusStrip
			// 
			this->StatusStrip->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"StatusStrip.BackgroundImage")));
			this->StatusStrip->Location = System::Drawing::Point(0, 486);
			this->StatusStrip->Name = L"StatusStrip";
			this->StatusStrip->Size = System::Drawing::Size(1141, 22);
			this->StatusStrip->TabIndex = 2;
			this->StatusStrip->Text = L"StatusStrip";
			// 
			// VertSplitContainer
			// 
			this->VertSplitContainer->BackColor = System::Drawing::Color::Transparent;
			this->VertSplitContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->VertSplitContainer->Location = System::Drawing::Point(0, 49);
			this->VertSplitContainer->Name = L"VertSplitContainer";
			this->VertSplitContainer->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// VertSplitContainer.Panel1
			// 
			this->VertSplitContainer->Panel1->Controls->Add(this->HorzSplitContainer);
			// 
			// VertSplitContainer.Panel2
			// 
			this->VertSplitContainer->Panel2->Controls->Add(this->MessageBoard);
			this->VertSplitContainer->Size = System::Drawing::Size(1141, 437);
			this->VertSplitContainer->SplitterDistance = 318;
			this->VertSplitContainer->TabIndex = 3;
			// 
			// HorzSplitContainer
			// 
			this->HorzSplitContainer->BackColor = System::Drawing::Color::Transparent;
			this->HorzSplitContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->HorzSplitContainer->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->HorzSplitContainer->IsSplitterFixed = true;
			this->HorzSplitContainer->Location = System::Drawing::Point(0, 0);
			this->HorzSplitContainer->Name = L"HorzSplitContainer";
			// 
			// HorzSplitContainer.Panel1
			// 
			this->HorzSplitContainer->Panel1->Controls->Add(this->BrowserTab);
			// 
			// HorzSplitContainer.Panel2
			// 
			this->HorzSplitContainer->Panel2->Controls->Add(this->ToolControl);
			this->HorzSplitContainer->Size = System::Drawing::Size(1141, 318);
			this->HorzSplitContainer->SplitterDistance = 926;
			this->HorzSplitContainer->TabIndex = 0;
			// 
			// BrowserTab
			// 
			this->BrowserTab->ContextMenuStrip = this->TabMenu;
			this->BrowserTab->Controls->Add(this->ChatRoom);
			this->BrowserTab->Controls->Add(this->BuzzTab);
			this->BrowserTab->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BrowserTab->ImageList = this->TabIcons;
			this->BrowserTab->Location = System::Drawing::Point(0, 0);
			this->BrowserTab->Name = L"BrowserTab";
			this->BrowserTab->SelectedIndex = 0;
			this->BrowserTab->Size = System::Drawing::Size(926, 318);
			this->BrowserTab->TabIndex = 0;
			// 
			// TabMenu
			// 
			this->TabMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"TabMenu.BackgroundImage")));
			this->TabMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->CloseTab});
			this->TabMenu->Name = L"TabMenu";
			this->TabMenu->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->TabMenu->Size = System::Drawing::Size(104, 26);
			// 
			// CloseTab
			// 
			this->CloseTab->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->CloseTab->Name = L"CloseTab";
			this->CloseTab->Size = System::Drawing::Size(103, 22);
			this->CloseTab->Text = L"Close";
			this->CloseTab->Click += gcnew System::EventHandler(this, &Form1::CloseTab_Click);
			// 
			// ChatRoom
			// 
			this->ChatRoom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ChatRoom->Controls->Add(this->ChatBrowser);
			this->ChatRoom->ImageKey = L"1475_Text Balloon_256x256.gif";
			this->ChatRoom->Location = System::Drawing::Point(4, 23);
			this->ChatRoom->Name = L"ChatRoom";
			this->ChatRoom->Padding = System::Windows::Forms::Padding(3);
			this->ChatRoom->Size = System::Drawing::Size(918, 291);
			this->ChatRoom->TabIndex = 0;
			this->ChatRoom->Text = L"XStrike Chat Room";
			this->ChatRoom->UseVisualStyleBackColor = true;
			// 
			// ChatBrowser
			// 
			this->ChatBrowser->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ChatBrowser->Location = System::Drawing::Point(3, 3);
			this->ChatBrowser->MinimumSize = System::Drawing::Size(20, 20);
			this->ChatBrowser->Name = L"ChatBrowser";
			this->ChatBrowser->Size = System::Drawing::Size(910, 283);
			this->ChatBrowser->TabIndex = 0;
			// 
			// BuzzTab
			// 
			this->BuzzTab->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BuzzTab->Controls->Add(this->BuzzBrowser);
			this->BuzzTab->ImageKey = L"1403_Globe.png";
			this->BuzzTab->Location = System::Drawing::Point(4, 23);
			this->BuzzTab->Name = L"BuzzTab";
			this->BuzzTab->Padding = System::Windows::Forms::Padding(3);
			this->BuzzTab->Size = System::Drawing::Size(918, 291);
			this->BuzzTab->TabIndex = 1;
			this->BuzzTab->Text = L"Global Buzz";
			this->BuzzTab->UseVisualStyleBackColor = true;
			// 
			// BuzzBrowser
			// 
			this->BuzzBrowser->AllowWebBrowserDrop = false;
			this->BuzzBrowser->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BuzzBrowser->IsWebBrowserContextMenuEnabled = false;
			this->BuzzBrowser->Location = System::Drawing::Point(3, 3);
			this->BuzzBrowser->MinimumSize = System::Drawing::Size(20, 20);
			this->BuzzBrowser->Name = L"BuzzBrowser";
			this->BuzzBrowser->Size = System::Drawing::Size(910, 283);
			this->BuzzBrowser->TabIndex = 0;
			this->BuzzBrowser->WebBrowserShortcutsEnabled = false;
			// 
			// TabIcons
			// 
			this->TabIcons->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"TabIcons.ImageStream")));
			this->TabIcons->TransparentColor = System::Drawing::Color::Transparent;
			this->TabIcons->Images->SetKeyName(0, L"305_Close_48x48_72.png");
			this->TabIcons->Images->SetKeyName(1, L"041_Sort_48x48_72.png");
			this->TabIcons->Images->SetKeyName(2, L"109_AllAnnotations_Help_256x256.png");
			this->TabIcons->Images->SetKeyName(3, L"010_LowPriority_128x128_72.png");
			this->TabIcons->Images->SetKeyName(4, L"VPN.png");
			this->TabIcons->Images->SetKeyName(5, L"Gear.png");
			this->TabIcons->Images->SetKeyName(6, L"023_Tip_128x128_72.png");
			this->TabIcons->Images->SetKeyName(7, L"112_DownArrowLong_Blue_48x48_72.png");
			this->TabIcons->Images->SetKeyName(8, L"1532_Flag_system_Blue.png");
			this->TabIcons->Images->SetKeyName(9, L"1403_Globe.png");
			this->TabIcons->Images->SetKeyName(10, L"1475_Text Balloon_256x256.gif");
			// 
			// ToolControl
			// 
			this->ToolControl->Controls->Add(this->LauncherTab);
			this->ToolControl->Controls->Add(this->ChatBoxTab);
			this->ToolControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ToolControl->ImageList = this->TabIcons;
			this->ToolControl->Location = System::Drawing::Point(0, 0);
			this->ToolControl->Name = L"ToolControl";
			this->ToolControl->SelectedIndex = 0;
			this->ToolControl->Size = System::Drawing::Size(211, 318);
			this->ToolControl->TabIndex = 0;
			// 
			// LauncherTab
			// 
			this->LauncherTab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"LauncherTab.BackgroundImage")));
			this->LauncherTab->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LauncherTab->Controls->Add(this->LauncherBtn4);
			this->LauncherTab->Controls->Add(this->LauncherBtn3);
			this->LauncherTab->Controls->Add(this->LauncherBtn2);
			this->LauncherTab->Controls->Add(this->LauncherBtn1);
			this->LauncherTab->Controls->Add(this->label1);
			this->LauncherTab->ImageKey = L"1532_Flag_system_Blue.png";
			this->LauncherTab->Location = System::Drawing::Point(4, 23);
			this->LauncherTab->Name = L"LauncherTab";
			this->LauncherTab->Padding = System::Windows::Forms::Padding(3);
			this->LauncherTab->Size = System::Drawing::Size(203, 291);
			this->LauncherTab->TabIndex = 0;
			this->LauncherTab->Text = L"Launcher";
			this->LauncherTab->UseVisualStyleBackColor = true;
			// 
			// LauncherBtn4
			// 
			this->LauncherBtn4->AllowAnimations = true;
			this->LauncherBtn4->BackColor = System::Drawing::Color::Transparent;
			this->LauncherBtn4->Enabled = false;
			this->LauncherBtn4->Location = System::Drawing::Point(13, 208);
			this->LauncherBtn4->Name = L"LauncherBtn4";
			this->LauncherBtn4->RoundedCornersMask = static_cast<System::Byte>(15);
			this->LauncherBtn4->Size = System::Drawing::Size(182, 30);
			this->LauncherBtn4->TabIndex = 3;
			this->LauncherBtn4->Text = L"unconfigured";
			this->LauncherBtn4->UseVisualStyleBackColor = false;
			this->LauncherBtn4->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			this->LauncherBtn4->Click += gcnew System::EventHandler(this, &Form1::LauncherBtn4_Click);
			// 
			// LauncherBtn3
			// 
			this->LauncherBtn3->AllowAnimations = true;
			this->LauncherBtn3->BackColor = System::Drawing::Color::Transparent;
			this->LauncherBtn3->Enabled = false;
			this->LauncherBtn3->Location = System::Drawing::Point(12, 151);
			this->LauncherBtn3->Name = L"LauncherBtn3";
			this->LauncherBtn3->RoundedCornersMask = static_cast<System::Byte>(15);
			this->LauncherBtn3->Size = System::Drawing::Size(182, 30);
			this->LauncherBtn3->TabIndex = 3;
			this->LauncherBtn3->Text = L"unconfigured";
			this->LauncherBtn3->UseVisualStyleBackColor = false;
			this->LauncherBtn3->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			this->LauncherBtn3->Click += gcnew System::EventHandler(this, &Form1::LauncherBtn3_Click);
			// 
			// LauncherBtn2
			// 
			this->LauncherBtn2->AllowAnimations = true;
			this->LauncherBtn2->BackColor = System::Drawing::Color::Transparent;
			this->LauncherBtn2->Enabled = false;
			this->LauncherBtn2->Location = System::Drawing::Point(12, 90);
			this->LauncherBtn2->Name = L"LauncherBtn2";
			this->LauncherBtn2->RoundedCornersMask = static_cast<System::Byte>(15);
			this->LauncherBtn2->Size = System::Drawing::Size(182, 30);
			this->LauncherBtn2->TabIndex = 3;
			this->LauncherBtn2->Text = L"unconfigured";
			this->LauncherBtn2->UseVisualStyleBackColor = false;
			this->LauncherBtn2->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			this->LauncherBtn2->Click += gcnew System::EventHandler(this, &Form1::LauncherBtn2_Click);
			// 
			// LauncherBtn1
			// 
			this->LauncherBtn1->AllowAnimations = true;
			this->LauncherBtn1->BackColor = System::Drawing::Color::Transparent;
			this->LauncherBtn1->Enabled = false;
			this->LauncherBtn1->Location = System::Drawing::Point(13, 36);
			this->LauncherBtn1->Name = L"LauncherBtn1";
			this->LauncherBtn1->RoundedCornersMask = static_cast<System::Byte>(15);
			this->LauncherBtn1->Size = System::Drawing::Size(182, 30);
			this->LauncherBtn1->TabIndex = 2;
			this->LauncherBtn1->Text = L"unconfigured";
			this->LauncherBtn1->UseVisualStyleBackColor = false;
			this->LauncherBtn1->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			this->LauncherBtn1->Click += gcnew System::EventHandler(this, &Form1::LauncherBtn1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(6, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Click on the Game you wish to launch";
			// 
			// ChatBoxTab
			// 
			this->ChatBoxTab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ChatBoxTab.BackgroundImage")));
			this->ChatBoxTab->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ChatBoxTab->Controls->Add(this->ChatRoom_ID_Provider);
			this->ChatBoxTab->Controls->Add(this->ChatRoom_Title);
			this->ChatBoxTab->Controls->Add(this->ChatRoom_Info);
			this->ChatBoxTab->Controls->Add(this->ChatRoom_Create);
			this->ChatBoxTab->ImageKey = L"041_Sort_48x48_72.png";
			this->ChatBoxTab->Location = System::Drawing::Point(4, 23);
			this->ChatBoxTab->Name = L"ChatBoxTab";
			this->ChatBoxTab->Padding = System::Windows::Forms::Padding(3);
			this->ChatBoxTab->Size = System::Drawing::Size(203, 291);
			this->ChatBoxTab->TabIndex = 1;
			this->ChatBoxTab->Text = L"ChatBox";
			this->ChatBoxTab->UseVisualStyleBackColor = true;
			// 
			// ChatRoom_ID_Provider
			// 
			this->ChatRoom_ID_Provider->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ChatRoom_ID_Provider->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ChatRoom_ID_Provider->Location = System::Drawing::Point(7, 209);
			this->ChatRoom_ID_Provider->Name = L"ChatRoom_ID_Provider";
			this->ChatRoom_ID_Provider->Size = System::Drawing::Size(187, 23);
			this->ChatRoom_ID_Provider->TabIndex = 3;
			this->ChatRoom_ID_Provider->Text = L"Click on Create to get ID";
			// 
			// ChatRoom_Title
			// 
			this->ChatRoom_Title->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ChatRoom_Title->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ChatRoom_Title->Location = System::Drawing::Point(6, 170);
			this->ChatRoom_Title->Name = L"ChatRoom_Title";
			this->ChatRoom_Title->Size = System::Drawing::Size(188, 20);
			this->ChatRoom_Title->TabIndex = 2;
			// 
			// ChatRoom_Info
			// 
			this->ChatRoom_Info->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ChatRoom_Info->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ChatRoom_Info->Location = System::Drawing::Point(6, 6);
			this->ChatRoom_Info->Multiline = true;
			this->ChatRoom_Info->Name = L"ChatRoom_Info";
			this->ChatRoom_Info->Size = System::Drawing::Size(188, 158);
			this->ChatRoom_Info->TabIndex = 1;
			this->ChatRoom_Info->Text = resources->GetString(L"ChatRoom_Info.Text");
			// 
			// ChatRoom_Create
			// 
			this->ChatRoom_Create->AllowAnimations = true;
			this->ChatRoom_Create->BackColor = System::Drawing::Color::Transparent;
			this->ChatRoom_Create->Location = System::Drawing::Point(6, 247);
			this->ChatRoom_Create->Name = L"ChatRoom_Create";
			this->ChatRoom_Create->RoundedCornersMask = static_cast<System::Byte>(15);
			this->ChatRoom_Create->Size = System::Drawing::Size(188, 30);
			this->ChatRoom_Create->TabIndex = 0;
			this->ChatRoom_Create->Text = L"Create Room";
			this->ChatRoom_Create->UseVisualStyleBackColor = false;
			this->ChatRoom_Create->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			this->ChatRoom_Create->Click += gcnew System::EventHandler(this, &Form1::ChatRoom_Create_Click);
			// 
			// MessageBoard
			// 
			this->MessageBoard->Controls->Add(this->AdminMsg);
			this->MessageBoard->Controls->Add(this->ServerMsg);
			this->MessageBoard->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MessageBoard->ImageList = this->TabIcons;
			this->MessageBoard->Location = System::Drawing::Point(0, 0);
			this->MessageBoard->Name = L"MessageBoard";
			this->MessageBoard->SelectedIndex = 0;
			this->MessageBoard->Size = System::Drawing::Size(1141, 115);
			this->MessageBoard->TabIndex = 0;
			// 
			// AdminMsg
			// 
			this->AdminMsg->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AdminMsg->Controls->Add(this->AdminMsgB);
			this->AdminMsg->ImageKey = L"023_Tip_128x128_72.png";
			this->AdminMsg->Location = System::Drawing::Point(4, 23);
			this->AdminMsg->Name = L"AdminMsg";
			this->AdminMsg->Padding = System::Windows::Forms::Padding(3);
			this->AdminMsg->Size = System::Drawing::Size(1133, 88);
			this->AdminMsg->TabIndex = 0;
			this->AdminMsg->Text = L"Adminstrator/Moderator Messages";
			this->AdminMsg->UseVisualStyleBackColor = true;
			// 
			// AdminMsgB
			// 
			this->AdminMsgB->AllowWebBrowserDrop = false;
			this->AdminMsgB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AdminMsgB->IsWebBrowserContextMenuEnabled = false;
			this->AdminMsgB->Location = System::Drawing::Point(3, 3);
			this->AdminMsgB->MinimumSize = System::Drawing::Size(20, 20);
			this->AdminMsgB->Name = L"AdminMsgB";
			this->AdminMsgB->Size = System::Drawing::Size(1125, 80);
			this->AdminMsgB->TabIndex = 0;
			this->AdminMsgB->Url = (gcnew System::Uri(L"http://yashas.byethost15.com/adminmsg.html", System::UriKind::Absolute));
			this->AdminMsgB->WebBrowserShortcutsEnabled = false;
			// 
			// ServerMsg
			// 
			this->ServerMsg->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ServerMsg->Controls->Add(this->ServerMsgB);
			this->ServerMsg->ImageKey = L"VPN.png";
			this->ServerMsg->Location = System::Drawing::Point(4, 23);
			this->ServerMsg->Name = L"ServerMsg";
			this->ServerMsg->Padding = System::Windows::Forms::Padding(3);
			this->ServerMsg->Size = System::Drawing::Size(1133, 88);
			this->ServerMsg->TabIndex = 1;
			this->ServerMsg->Text = L"Server Status/Messages";
			this->ServerMsg->UseVisualStyleBackColor = true;
			// 
			// ServerMsgB
			// 
			this->ServerMsgB->AllowNavigation = false;
			this->ServerMsgB->AllowWebBrowserDrop = false;
			this->ServerMsgB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ServerMsgB->IsWebBrowserContextMenuEnabled = false;
			this->ServerMsgB->Location = System::Drawing::Point(3, 3);
			this->ServerMsgB->MinimumSize = System::Drawing::Size(20, 20);
			this->ServerMsgB->Name = L"ServerMsgB";
			this->ServerMsgB->Size = System::Drawing::Size(1125, 80);
			this->ServerMsgB->TabIndex = 0;
			this->ServerMsgB->Url = (gcnew System::Uri(L"http://yashas.byethost15.com/servermsg.html", System::UriKind::Absolute));
			this->ServerMsgB->WebBrowserShortcutsEnabled = false;
			// 
			// AppConfig
			// 
			this->AppConfig->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"AppConfig.BackgroundImage")));
			this->AppConfig->Controls->Add(this->SaveAppConfig);
			this->AppConfig->Controls->Add(this->AppConfigEnNotify);
			this->AppConfig->Controls->Add(this->AppConfigRefreshAuto);
			this->AppConfig->Controls->Add(this->AppConfigAutoLoad);
			this->AppConfig->ImageKey = L"Gear.png";
			this->AppConfig->Location = System::Drawing::Point(4, 23);
			this->AppConfig->Name = L"AppConfig";
			this->AppConfig->Padding = System::Windows::Forms::Padding(3);
			this->AppConfig->Size = System::Drawing::Size(918, 291);
			this->AppConfig->TabIndex = 2;
			this->AppConfig->Text = L"Application Settings";
			this->AppConfig->UseVisualStyleBackColor = true;
			// 
			// SaveAppConfig
			// 
			this->SaveAppConfig->AllowAnimations = true;
			this->SaveAppConfig->BackColor = System::Drawing::Color::Transparent;
			this->SaveAppConfig->Location = System::Drawing::Point(8, 182);
			this->SaveAppConfig->Name = L"SaveAppConfig";
			this->SaveAppConfig->RoundedCornersMask = static_cast<System::Byte>(15);
			this->SaveAppConfig->Size = System::Drawing::Size(191, 30);
			this->SaveAppConfig->TabIndex = 2;
			this->SaveAppConfig->Text = L"Save & Apply New Settings";
			this->SaveAppConfig->UseVisualStyleBackColor = false;
			this->SaveAppConfig->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			this->SaveAppConfig->Click += gcnew System::EventHandler(this, &Form1::SaveAppConfig_Click);
			// 
			// AppConfigEnNotify
			// 
			this->AppConfigEnNotify->BackColor = System::Drawing::Color::Transparent;
			this->AppConfigEnNotify->CheckMarkColorIntermidiate = System::Drawing::Color::BlanchedAlmond;
			this->AppConfigEnNotify->FocusColor = System::Drawing::SystemColors::Control;
			this->AppConfigEnNotify->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->AppConfigEnNotify->Location = System::Drawing::Point(8, 101);
			this->AppConfigEnNotify->Name = L"AppConfigEnNotify";
			this->AppConfigEnNotify->Size = System::Drawing::Size(361, 24);
			this->AppConfigEnNotify->TabIndex = 1;
			this->AppConfigEnNotify->Text = L"Enabled Notify Icon(Enabled the XConnect Icon the Taskbar)";
			this->AppConfigEnNotify->UseVisualStyleBackColor = false;
			this->AppConfigEnNotify->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			// 
			// AppConfigRefreshAuto
			// 
			this->AppConfigRefreshAuto->BackColor = System::Drawing::Color::Transparent;
			this->AppConfigRefreshAuto->CheckMarkColorIntermidiate = System::Drawing::Color::BlanchedAlmond;
			this->AppConfigRefreshAuto->FocusColor = System::Drawing::SystemColors::Control;
			this->AppConfigRefreshAuto->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->AppConfigRefreshAuto->Location = System::Drawing::Point(8, 71);
			this->AppConfigRefreshAuto->Name = L"AppConfigRefreshAuto";
			this->AppConfigRefreshAuto->Size = System::Drawing::Size(361, 24);
			this->AppConfigRefreshAuto->TabIndex = 1;
			this->AppConfigRefreshAuto->Text = L"Refresh MessageBoard Automatically from time to time";
			this->AppConfigRefreshAuto->UseVisualStyleBackColor = false;
			this->AppConfigRefreshAuto->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			// 
			// AppConfigAutoLoad
			// 
			this->AppConfigAutoLoad->BackColor = System::Drawing::Color::Transparent;
			this->AppConfigAutoLoad->CheckMarkColorIntermidiate = System::Drawing::Color::BlanchedAlmond;
			this->AppConfigAutoLoad->FocusColor = System::Drawing::SystemColors::Control;
			this->AppConfigAutoLoad->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->AppConfigAutoLoad->Location = System::Drawing::Point(8, 41);
			this->AppConfigAutoLoad->Name = L"AppConfigAutoLoad";
			this->AppConfigAutoLoad->Size = System::Drawing::Size(453, 24);
			this->AppConfigAutoLoad->TabIndex = 1;
			this->AppConfigAutoLoad->Text = L"Auto-Load Pages(Load the WebPages directly when the application is executed)";
			this->AppConfigAutoLoad->UseVisualStyleBackColor = false;
			this->AppConfigAutoLoad->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			// 
			// DefaultAppConfig
			// 
			this->DefaultAppConfig->AllowAnimations = true;
			this->DefaultAppConfig->BackColor = System::Drawing::Color::Transparent;
			this->DefaultAppConfig->Location = System::Drawing::Point(0, 0);
			this->DefaultAppConfig->Name = L"DefaultAppConfig";
			this->DefaultAppConfig->RoundedCornersMask = static_cast<System::Byte>(15);
			this->DefaultAppConfig->Size = System::Drawing::Size(100, 30);
			this->DefaultAppConfig->TabIndex = 0;
			this->DefaultAppConfig->UseVisualStyleBackColor = false;
			this->DefaultAppConfig->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::VISTABLUE;
			// 
			// AboutTabPage
			// 
			this->AboutTabPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"AboutTabPage.BackgroundImage")));
			this->AboutTabPage->Controls->Add(this->AboutTabText);
			this->AboutTabPage->ImageKey = L"305_Close_48x48_72.png";
			this->AboutTabPage->Location = System::Drawing::Point(4, 23);
			this->AboutTabPage->Name = L"AboutTabPage";
			this->AboutTabPage->Padding = System::Windows::Forms::Padding(3);
			this->AboutTabPage->Size = System::Drawing::Size(918, 291);
			this->AboutTabPage->TabIndex = 3;
			this->AboutTabPage->Text = L"About";
			this->AboutTabPage->UseVisualStyleBackColor = true;
			// 
			// AboutTabText
			// 
			this->AboutTabText->AutoSize = true;
			this->AboutTabText->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AboutTabText->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AboutTabText->Location = System::Drawing::Point(3, 3);
			this->AboutTabText->Name = L"AboutTabText";
			this->AboutTabText->Size = System::Drawing::Size(738, 240);
			this->AboutTabText->TabIndex = 0;
			this->AboutTabText->Text = resources->GetString(L"AboutTabText.Text");
			// 
			// LauncherConfigTab
			// 
			this->LauncherConfigTab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"LauncherConfigTab.BackgroundImage")));
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigApply);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigBrowse4);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigBrowse3);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigBrowse2);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigBrowse1);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigLoc2);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigLoc3);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigLoc4);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigLoc1);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigGameTitle2);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigGameTitle4);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigGameTitle3);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigGameTitle1);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigGameLabel4);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigGameLabel3);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigGameLabel2);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigGameLabel1);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigFields);
			this->LauncherConfigTab->Controls->Add(this->LauncherConfigIntro);
			this->LauncherConfigTab->ImageKey = L"Gear.png";
			this->LauncherConfigTab->Location = System::Drawing::Point(4, 23);
			this->LauncherConfigTab->Name = L"LauncherConfigTab";
			this->LauncherConfigTab->Padding = System::Windows::Forms::Padding(3);
			this->LauncherConfigTab->Size = System::Drawing::Size(918, 291);
			this->LauncherConfigTab->TabIndex = 2;
			this->LauncherConfigTab->Text = L"Launcher Configuration";
			this->LauncherConfigTab->UseVisualStyleBackColor = true;
			// 
			// LauncherConfigApply
			// 
			this->LauncherConfigApply->AllowAnimations = true;
			this->LauncherConfigApply->BackColor = System::Drawing::Color::Transparent;
			this->LauncherConfigApply->Location = System::Drawing::Point(168, 231);
			this->LauncherConfigApply->Name = L"LauncherConfigApply";
			this->LauncherConfigApply->RoundedCornersMask = static_cast<System::Byte>(15);
			this->LauncherConfigApply->Size = System::Drawing::Size(743, 25);
			this->LauncherConfigApply->TabIndex = 16;
			this->LauncherConfigApply->Text = L"Save and apply the new configuration";
			this->LauncherConfigApply->UseVisualStyleBackColor = false;
			this->LauncherConfigApply->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			this->LauncherConfigApply->Click += gcnew System::EventHandler(this, &Form1::LauncherConfigApply_Click);
			// 
			// LauncherConfigBrowse4
			// 
			this->LauncherConfigBrowse4->AllowAnimations = true;
			this->LauncherConfigBrowse4->BackColor = System::Drawing::Color::Transparent;
			this->LauncherConfigBrowse4->Location = System::Drawing::Point(808, 171);
			this->LauncherConfigBrowse4->Name = L"LauncherConfigBrowse4";
			this->LauncherConfigBrowse4->RoundedCornersMask = static_cast<System::Byte>(15);
			this->LauncherConfigBrowse4->Size = System::Drawing::Size(103, 25);
			this->LauncherConfigBrowse4->TabIndex = 15;
			this->LauncherConfigBrowse4->Text = L"Browse";
			this->LauncherConfigBrowse4->UseVisualStyleBackColor = false;
			this->LauncherConfigBrowse4->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			this->LauncherConfigBrowse4->Click += gcnew System::EventHandler(this, &Form1::LauncherConfigBrowse4_Click);
			// 
			// LauncherConfigBrowse3
			// 
			this->LauncherConfigBrowse3->AllowAnimations = true;
			this->LauncherConfigBrowse3->BackColor = System::Drawing::Color::Transparent;
			this->LauncherConfigBrowse3->Location = System::Drawing::Point(808, 127);
			this->LauncherConfigBrowse3->Name = L"LauncherConfigBrowse3";
			this->LauncherConfigBrowse3->RoundedCornersMask = static_cast<System::Byte>(15);
			this->LauncherConfigBrowse3->Size = System::Drawing::Size(103, 25);
			this->LauncherConfigBrowse3->TabIndex = 15;
			this->LauncherConfigBrowse3->Text = L"Browse";
			this->LauncherConfigBrowse3->UseVisualStyleBackColor = false;
			this->LauncherConfigBrowse3->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			this->LauncherConfigBrowse3->Click += gcnew System::EventHandler(this, &Form1::LauncherConfigBrowse3_Click);
			// 
			// LauncherConfigBrowse2
			// 
			this->LauncherConfigBrowse2->AllowAnimations = true;
			this->LauncherConfigBrowse2->BackColor = System::Drawing::Color::Transparent;
			this->LauncherConfigBrowse2->Location = System::Drawing::Point(808, 82);
			this->LauncherConfigBrowse2->Name = L"LauncherConfigBrowse2";
			this->LauncherConfigBrowse2->RoundedCornersMask = static_cast<System::Byte>(15);
			this->LauncherConfigBrowse2->Size = System::Drawing::Size(103, 25);
			this->LauncherConfigBrowse2->TabIndex = 15;
			this->LauncherConfigBrowse2->Text = L"Browse";
			this->LauncherConfigBrowse2->UseVisualStyleBackColor = false;
			this->LauncherConfigBrowse2->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			this->LauncherConfigBrowse2->Click += gcnew System::EventHandler(this, &Form1::LauncherConfigBrowse2_Click);
			// 
			// LauncherConfigBrowse1
			// 
			this->LauncherConfigBrowse1->AllowAnimations = true;
			this->LauncherConfigBrowse1->BackColor = System::Drawing::Color::Transparent;
			this->LauncherConfigBrowse1->Location = System::Drawing::Point(808, 38);
			this->LauncherConfigBrowse1->Name = L"LauncherConfigBrowse1";
			this->LauncherConfigBrowse1->RoundedCornersMask = static_cast<System::Byte>(15);
			this->LauncherConfigBrowse1->Size = System::Drawing::Size(103, 25);
			this->LauncherConfigBrowse1->TabIndex = 14;
			this->LauncherConfigBrowse1->Text = L"Browse";
			this->LauncherConfigBrowse1->UseVisualStyleBackColor = false;
			this->LauncherConfigBrowse1->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::BLACKPEARL;
			this->LauncherConfigBrowse1->Click += gcnew System::EventHandler(this, &Form1::LauncherConfigBrowse1_Click);
			// 
			// LauncherConfigLoc2
			// 
			this->LauncherConfigLoc2->BackColor = System::Drawing::Color::White;
			this->LauncherConfigLoc2->Location = System::Drawing::Point(568, 87);
			this->LauncherConfigLoc2->Name = L"LauncherConfigLoc2";
			this->LauncherConfigLoc2->ReadOnly = true;
			this->LauncherConfigLoc2->Size = System::Drawing::Size(208, 20);
			this->LauncherConfigLoc2->TabIndex = 13;
			// 
			// LauncherConfigLoc3
			// 
			this->LauncherConfigLoc3->BackColor = System::Drawing::Color::White;
			this->LauncherConfigLoc3->Location = System::Drawing::Point(568, 132);
			this->LauncherConfigLoc3->Name = L"LauncherConfigLoc3";
			this->LauncherConfigLoc3->ReadOnly = true;
			this->LauncherConfigLoc3->Size = System::Drawing::Size(208, 20);
			this->LauncherConfigLoc3->TabIndex = 12;
			// 
			// LauncherConfigLoc4
			// 
			this->LauncherConfigLoc4->BackColor = System::Drawing::Color::White;
			this->LauncherConfigLoc4->Location = System::Drawing::Point(568, 176);
			this->LauncherConfigLoc4->Name = L"LauncherConfigLoc4";
			this->LauncherConfigLoc4->ReadOnly = true;
			this->LauncherConfigLoc4->Size = System::Drawing::Size(208, 20);
			this->LauncherConfigLoc4->TabIndex = 11;
			// 
			// LauncherConfigLoc1
			// 
			this->LauncherConfigLoc1->BackColor = System::Drawing::Color::White;
			this->LauncherConfigLoc1->Location = System::Drawing::Point(568, 43);
			this->LauncherConfigLoc1->Name = L"LauncherConfigLoc1";
			this->LauncherConfigLoc1->ReadOnly = true;
			this->LauncherConfigLoc1->Size = System::Drawing::Size(208, 20);
			this->LauncherConfigLoc1->TabIndex = 10;
			// 
			// LauncherConfigGameTitle2
			// 
			this->LauncherConfigGameTitle2->Location = System::Drawing::Point(346, 87);
			this->LauncherConfigGameTitle2->Name = L"LauncherConfigGameTitle2";
			this->LauncherConfigGameTitle2->Size = System::Drawing::Size(196, 20);
			this->LauncherConfigGameTitle2->TabIndex = 9;
			// 
			// LauncherConfigGameTitle4
			// 
			this->LauncherConfigGameTitle4->Location = System::Drawing::Point(346, 176);
			this->LauncherConfigGameTitle4->Name = L"LauncherConfigGameTitle4";
			this->LauncherConfigGameTitle4->Size = System::Drawing::Size(196, 20);
			this->LauncherConfigGameTitle4->TabIndex = 8;
			// 
			// LauncherConfigGameTitle3
			// 
			this->LauncherConfigGameTitle3->Location = System::Drawing::Point(346, 132);
			this->LauncherConfigGameTitle3->Name = L"LauncherConfigGameTitle3";
			this->LauncherConfigGameTitle3->Size = System::Drawing::Size(196, 20);
			this->LauncherConfigGameTitle3->TabIndex = 7;
			// 
			// LauncherConfigGameTitle1
			// 
			this->LauncherConfigGameTitle1->Location = System::Drawing::Point(346, 43);
			this->LauncherConfigGameTitle1->Name = L"LauncherConfigGameTitle1";
			this->LauncherConfigGameTitle1->Size = System::Drawing::Size(196, 20);
			this->LauncherConfigGameTitle1->TabIndex = 6;
			// 
			// LauncherConfigGameLabel4
			// 
			this->LauncherConfigGameLabel4->AutoSize = true;
			this->LauncherConfigGameLabel4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LauncherConfigGameLabel4->Location = System::Drawing::Point(165, 183);
			this->LauncherConfigGameLabel4->Name = L"LauncherConfigGameLabel4";
			this->LauncherConfigGameLabel4->Size = System::Drawing::Size(139, 13);
			this->LauncherConfigGameLabel4->TabIndex = 5;
			this->LauncherConfigGameLabel4->Text = L"Game Executable 1(Key:F9)";
			// 
			// LauncherConfigGameLabel3
			// 
			this->LauncherConfigGameLabel3->AutoSize = true;
			this->LauncherConfigGameLabel3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LauncherConfigGameLabel3->Location = System::Drawing::Point(165, 139);
			this->LauncherConfigGameLabel3->Name = L"LauncherConfigGameLabel3";
			this->LauncherConfigGameLabel3->Size = System::Drawing::Size(139, 13);
			this->LauncherConfigGameLabel3->TabIndex = 4;
			this->LauncherConfigGameLabel3->Text = L"Game Executable 1(Key:F8)";
			// 
			// LauncherConfigGameLabel2
			// 
			this->LauncherConfigGameLabel2->AutoSize = true;
			this->LauncherConfigGameLabel2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LauncherConfigGameLabel2->Location = System::Drawing::Point(165, 94);
			this->LauncherConfigGameLabel2->Name = L"LauncherConfigGameLabel2";
			this->LauncherConfigGameLabel2->Size = System::Drawing::Size(139, 13);
			this->LauncherConfigGameLabel2->TabIndex = 3;
			this->LauncherConfigGameLabel2->Text = L"Game Executable 1(Key:F7)";
			// 
			// LauncherConfigGameLabel1
			// 
			this->LauncherConfigGameLabel1->AutoSize = true;
			this->LauncherConfigGameLabel1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LauncherConfigGameLabel1->Location = System::Drawing::Point(165, 50);
			this->LauncherConfigGameLabel1->Name = L"LauncherConfigGameLabel1";
			this->LauncherConfigGameLabel1->Size = System::Drawing::Size(139, 13);
			this->LauncherConfigGameLabel1->TabIndex = 2;
			this->LauncherConfigGameLabel1->Text = L"Game Executable 1(Key:F6)";
			// 
			// LauncherConfigFields
			// 
			this->LauncherConfigFields->AutoSize = true;
			this->LauncherConfigFields->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LauncherConfigFields->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LauncherConfigFields->Location = System::Drawing::Point(161, 9);
			this->LauncherConfigFields->Name = L"LauncherConfigFields";
			this->LauncherConfigFields->Size = System::Drawing::Size(732, 20);
			this->LauncherConfigFields->TabIndex = 1;
			this->LauncherConfigFields->Text = L"Game Number                                Game Title(*)                         " 
				L"            Loaction(*)                              Browse";
			// 
			// LauncherConfigIntro
			// 
			this->LauncherConfigIntro->AutoSize = true;
			this->LauncherConfigIntro->BackColor = System::Drawing::SystemColors::Control;
			this->LauncherConfigIntro->Location = System::Drawing::Point(8, 9);
			this->LauncherConfigIntro->Name = L"LauncherConfigIntro";
			this->LauncherConfigIntro->Size = System::Drawing::Size(122, 247);
			this->LauncherConfigIntro->TabIndex = 0;
			this->LauncherConfigIntro->Text = resources->GetString(L"LauncherConfigIntro.Text");
			// 
			// ConnectTemp
			// 
			this->ConnectTemp->BackColor = System::Drawing::Color::PowderBlue;
			this->ConnectTemp->Controls->Add(this->ConnectRoomID);
			this->ConnectTemp->Controls->Add(this->ConnectConnect);
			this->ConnectTemp->ImageKey = L"023_Tip_128x128_72.png";
			this->ConnectTemp->Location = System::Drawing::Point(4, 23);
			this->ConnectTemp->Name = L"ConnectTemp";
			this->ConnectTemp->Padding = System::Windows::Forms::Padding(3);
			this->ConnectTemp->Size = System::Drawing::Size(918, 291);
			this->ConnectTemp->TabIndex = 4;
			this->ConnectTemp->Text = L"Connect Room";
			// 
			// ConnectRoomID
			// 
			this->ConnectRoomID->Location = System::Drawing::Point(7, 46);
			this->ConnectRoomID->Name = L"ConnectRoomID";
			this->ConnectRoomID->Size = System::Drawing::Size(279, 20);
			this->ConnectRoomID->TabIndex = 1;
			this->ConnectRoomID->Text = L"Enter the ID";
			// 
			// ConnectConnect
			// 
			this->ConnectConnect->AllowAnimations = true;
			this->ConnectConnect->BackColor = System::Drawing::Color::Transparent;
			this->ConnectConnect->Location = System::Drawing::Point(6, 9);
			this->ConnectConnect->Name = L"ConnectConnect";
			this->ConnectConnect->RoundedCornersMask = static_cast<System::Byte>(15);
			this->ConnectConnect->Size = System::Drawing::Size(280, 30);
			this->ConnectConnect->TabIndex = 0;
			this->ConnectConnect->Text = L"Connect";
			this->ConnectConnect->UseVisualStyleBackColor = false;
			this->ConnectConnect->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::ULTRABLUE;
			this->ConnectConnect->Click += gcnew System::EventHandler(this, &Form1::ConnectConnect_Click);
			// 
			// BrowserUptate
			// 
			this->BrowserUptate->Enabled = true;
			this->BrowserUptate->Interval = 1;
			this->BrowserUptate->Tick += gcnew System::EventHandler(this, &Form1::BrowserUptate_Tick);
			// 
			// NotifyTray
			// 
			this->NotifyTray->ContextMenuStrip = this->TrayMenu;
			this->NotifyTray->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"NotifyTray.Icon")));
			this->NotifyTray->Text = L"NotifyIcon";
			this->NotifyTray->Visible = true;
			// 
			// TrayMenu
			// 
			this->TrayMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"TrayMenu.BackgroundImage")));
			this->TrayMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ExitTrayIcon, this->toolStripMenuItem1});
			this->TrayMenu->Name = L"TrayMenu";
			this->TrayMenu->Size = System::Drawing::Size(145, 48);
			// 
			// ExitTrayIcon
			// 
			this->ExitTrayIcon->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->ExitTrayIcon->Name = L"ExitTrayIcon";
			this->ExitTrayIcon->Size = System::Drawing::Size(144, 22);
			this->ExitTrayIcon->Text = L"Exit";
			this->ExitTrayIcon->Click += gcnew System::EventHandler(this, &Form1::ExitTrayIcon_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem1->Text = L"Go XConnect";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// StripRender
			// 
			this->StripRender->RenderedContextMenuStrip = this->TrayMenu;
			this->StripRender->RenderedMenuStrip = this->MenuStrip;
			vToolStripProfessionalRenderer1->RoundedEdges = true;
			vToolStripProfessionalRenderer1->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::OFFICEBLACK;
			this->StripRender->Renderer = vToolStripProfessionalRenderer1;
			this->StripRender->VIBlendTheme = VIBlend::Utilities::VIBLEND_THEME::OFFICE2010BLACK;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1141, 508);
			this->Controls->Add(this->VertSplitContainer);
			this->Controls->Add(this->StatusStrip);
			this->Controls->Add(this->AccessStrip);
			this->Controls->Add(this->MenuStrip);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->MenuStrip;
			this->Name = L"Form1";
			this->Text = L"XConnect";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->MenuStrip->ResumeLayout(false);
			this->MenuStrip->PerformLayout();
			this->VertSplitContainer->Panel1->ResumeLayout(false);
			this->VertSplitContainer->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->VertSplitContainer))->EndInit();
			this->VertSplitContainer->ResumeLayout(false);
			this->HorzSplitContainer->Panel1->ResumeLayout(false);
			this->HorzSplitContainer->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HorzSplitContainer))->EndInit();
			this->HorzSplitContainer->ResumeLayout(false);
			this->BrowserTab->ResumeLayout(false);
			this->TabMenu->ResumeLayout(false);
			this->ChatRoom->ResumeLayout(false);
			this->BuzzTab->ResumeLayout(false);
			this->ToolControl->ResumeLayout(false);
			this->LauncherTab->ResumeLayout(false);
			this->LauncherTab->PerformLayout();
			this->ChatBoxTab->ResumeLayout(false);
			this->ChatBoxTab->PerformLayout();
			this->MessageBoard->ResumeLayout(false);
			this->AdminMsg->ResumeLayout(false);
			this->ServerMsg->ResumeLayout(false);
			this->AppConfig->ResumeLayout(false);
			this->AboutTabPage->ResumeLayout(false);
			this->AboutTabPage->PerformLayout();
			this->LauncherConfigTab->ResumeLayout(false);
			this->LauncherConfigTab->PerformLayout();
			this->ConnectTemp->ResumeLayout(false);
			this->ConnectTemp->PerformLayout();
			this->TrayMenu->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static bool launcher_present = false;
		static bool about_present = false;
		static int count;
		static bool appconfig = false;
		private: void execute_game(String^ gameid,String ^ args)
				 {
					 
					 RegistryKey^ rk = Registry::CurrentUser->OpenSubKey("Software\\LindusLabs\\XConnect");
					 Process::Start((String^) rk->GetValue(gameid));
				 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				try
				{
					 RegistryKey^ rk = Registry::CurrentUser->OpenSubKey("Software\\LindusLabs\\XConnect");
				     if(rk == nullptr)
					 { 
						RegistryKey^ rk = Registry::CurrentUser->CreateSubKey("Software\\LindusLabs\\XConnect");
						rk->SetValue("GameTitle1","null");
						rk->SetValue("GameTitle2","null");
						rk->SetValue("GameTitle3","null");
						rk->SetValue("GameTitle4","null");
						rk->SetValue("GameLoc1","null");
						rk->SetValue("GameLoc2","null");
						rk->SetValue("GameLoc3","null");
						rk->SetValue("GameLoc4","null");

						rk->SetValue("LoadPageAuto",(int)(1));
						rk->SetValue("AutoRefresh",(int)(1));
						rk->SetValue("TB_Notify",(int)(1));
						rk->Close();
						
						MessageBox::Show("XConnect 2.1\nTerms and Conditions\n\nThis application is developed by Yashas Samaga and all rights are reserved.\n\nYou must not pass this software to anyone without the permission of the adminstrators.\n\nYou are not supposed to extract any information,data,etc from the executable.\n\nTo get the permissions ask the Adminstrators at the XStrike Chat for passing this application to your friend.\n","Conditions before using");
					 }
					 else
					 {
						 
						 if((String^)rk->GetValue("GameTitle1") != "null")
						 {
							 LauncherBtn1->Text = ("Launch " + (String^)rk->GetValue("GameTitle1"));
							 LaunchMenuItem1->Text = ("Launch " + (String^)rk->GetValue("GameTitle1"));;
							 LaunchMenuItem1->Enabled = true;
							 LauncherBtn1->Enabled = true;
							 LauncherConfigGameTitle1->Text = (String^)rk->GetValue("GameTitle1");
							 LauncherConfigLoc1->Text = (String^)rk->GetValue("GameLoc1");
						 }
						 else
						 {
							 LauncherBtn1->Text = ("unconfigured");
							 LauncherBtn1->Enabled = false;
							 LaunchMenuItem1->Enabled = false;
						 }

						 if((String^)rk->GetValue("GameTitle2") != "null")
						 {
							 LauncherBtn2->Text = ("Launch " + (String^)rk->GetValue("GameTitle2"));
							 LauncherBtn2->Enabled = true;
							 LaunchMenuItem2->Text = ("Launch " + (String^)rk->GetValue("GameTitle2"));;
							 LaunchMenuItem2->Enabled = true;
							 LauncherConfigGameTitle2->Text = (String^)rk->GetValue("GameTitle2");
							 LauncherConfigLoc2->Text = (String^)rk->GetValue("GameLoc2");
						 }
						 else
						 {
							 LauncherBtn2->Text = ("unconfigured");
							 LauncherBtn2->Enabled = false;
							 LaunchMenuItem2->Enabled = false;
						 }

						 if((String^)rk->GetValue("GameTitle3") != "null")
						 {
							 LauncherBtn3->Text = ("Launch " + (String^)rk->GetValue("GameTitle3"));
							 LauncherBtn3->Enabled = true;
							 LaunchMenuItem3->Text = ("Launch " + (String^)rk->GetValue("GameTitle3"));;
							 LaunchMenuItem3->Enabled = true;
							 LauncherConfigGameTitle3->Text = (String^)rk->GetValue("GameTitle3");
							 LauncherConfigLoc3->Text = (String^)rk->GetValue("GameLoc3");
						 }
						 else
						 {
							 LauncherBtn3->Text = ("unconfigured");
							 LauncherBtn3->Enabled = false;
							 LaunchMenuItem3->Enabled = false;
						 }

						 if((String^)rk->GetValue("GameTitle4") != "null")
						 {
							 LauncherBtn4->Text = ("Launch " + (String^)rk->GetValue("GameTitle4"));
							 LauncherBtn4->Enabled = true;
							 LaunchMenuItem4->Text = ("Launch " + (String^)rk->GetValue("GameTitle4"));;
							 LaunchMenuItem4->Enabled = true;
							 LauncherConfigGameTitle4->Text = (String^)rk->GetValue("GameTitle4");
							 LauncherConfigLoc4->Text = (String^)rk->GetValue("GameLoc4");
						 }
						 else
						 {
							 LauncherBtn4->Text = ("unconfigured");
							 LauncherBtn4->Enabled = false;
							 LaunchMenuItem4->Enabled = false;
						 }
						 AppConfigAutoLoad->Checked = false;
						 if((int)(rk->GetValue("LoadPageAuto")) == 1)
						 {
							 ChatBrowser->Navigate("http://irc.wyldryde.org/?uio=d4&channels=XStrike");
							 BuzzBrowser->Navigate("yashas.byethost15.com/buzz/index.htm");
							 AppConfigAutoLoad->Checked = true;
						 }
						 
					     NotifyTray->Visible = (int)(rk->GetValue("TB_Notify"));
						 BrowserUptate->Enabled = (int)rk->GetValue("AutoRefresh");

						AppConfigRefreshAuto->Checked = (int)rk->GetValue("AutoRefresh");
						AppConfigEnNotify->Checked = (int)(rk->GetValue("TB_Notify"));
					 }

				}
				catch(Exception ^ex){}	

			 }
private: System::Void ChatRoom_Create_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(ChatRoom_Title->Text != "" || ChatRoom_Title->Text != " ")
			 {
				ChatRoom_ID_Provider->Text = (ChatRoom_Title->Text);
			 }
			 else
			 {
				 MessageBox::Show("Invalid Room Name : Enter another name");
			 }
		 }
private: System::Void ConnectConnect_Click(System::Object^  sender, System::EventArgs^  e) {

			TabPage^ tmppg = BrowserTab->SelectedTab;
		    Control^ ctl;
			TextBox^ RoomIDTxtBx = gcnew TextBox();
			String^ IRCChat_Server = "http://irc.wyldryde.org/?uio=d4&channels=XStrike";
		    RoomIDTxtBx = nullptr;

		    for(int i = 0; i < tmppg->Controls->Count; i++)
		    {
			   ctl = tmppg->Controls[i];
			   if(ctl->GetType() == TextBox::typeid)
			   {
					RoomIDTxtBx = safe_cast<TextBox^>(ctl);	
					TabPage^ chatroom_connect = gcnew TabPage();
					WebBrowser^ chatroom_brs = gcnew WebBrowser();
					chatroom_connect->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					chatroom_connect->Controls->Add(chatroom_brs);
					chatroom_connect->ImageKey = "1475_Text Balloon_256x256.gif";
					chatroom_connect->Location = System::Drawing::Point(4, 23);
					chatroom_connect->Name = "ChatRoom";
					chatroom_connect->Padding = System::Windows::Forms::Padding(3);
					chatroom_connect->Size = System::Drawing::Size(918, 291);
					chatroom_connect->TabIndex = 0;
					chatroom_connect->Text = ("XStrike-" + RoomIDTxtBx->Text);
					chatroom_connect->UseVisualStyleBackColor = true;

					chatroom_brs->Dock = System::Windows::Forms::DockStyle::Fill;
					chatroom_brs->Location = System::Drawing::Point(3, 3);
					chatroom_brs->MinimumSize = System::Drawing::Size(20, 20);
					chatroom_brs->Name = "ChatBrowser";
					chatroom_brs->Size = System::Drawing::Size(910, 283);
					chatroom_brs->TabIndex = 0;
					chatroom_brs->Navigate(IRCChat_Server + "-" + RoomIDTxtBx->Text); 

					BrowserTab->TabPages->Remove(BrowserTab->SelectedTab);
					BrowserTab->TabPages->Add(chatroom_connect);
					BrowserTab->SelectTab(chatroom_connect);
			   }
		    }
		    }
private: System::Void ExitFileMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void ConnectChatRoomMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 BrowserTab->Controls->Add(this->ConnectTemp);
		 }
private: System::Void LauncherConfigBrowse1_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ dlg = gcnew OpenFileDialog();
			 dlg->Title = "Select the executable";
			 dlg->Filter = "Executables|*.exe";
			 try
			 {
				 if(dlg->ShowDialog() == Windows::Forms::DialogResult::OK)
				 {
					 if(System::IO::Path::GetExtension(dlg->FileName) == ".exe")
					 {
					      LauncherConfigLoc1->Text = dlg->FileName;
					 }
					 else
					 {
						 MessageBox::Show("Select an Executable Only(A File with extension 'exe')");
					 }
				 }
			 }
			 catch(Exception ^ ex)
			 {

			 }
		 }
private: System::Void LauncherConfigBrowse2_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ dlg = gcnew OpenFileDialog();
			 dlg->Title = "Select the executable";
			 dlg->Filter = "Executables|*.exe";
			 try
			 {
				 if(dlg->ShowDialog() == Windows::Forms::DialogResult::OK)
				 {
					 if(System::IO::Path::GetExtension(dlg->FileName) == ".exe")
					 {
					      LauncherConfigLoc2->Text = dlg->FileName;
					 }
					 else
					 {
						 MessageBox::Show("Select an Executable Only(A File with extension 'exe')");
					 }
				 }
			 }
			 catch(Exception ^ ex)
			 {

			 }
		 }
private: System::Void LauncherConfigBrowse3_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ dlg = gcnew OpenFileDialog();
			 dlg->Title = "Select the executable";
			 dlg->Filter = "Executables|*.exe";
			 try
			 {
				 if(dlg->ShowDialog() == Windows::Forms::DialogResult::OK)
				 {
					 if(System::IO::Path::GetExtension(dlg->FileName) == ".exe")
					 {
					      LauncherConfigLoc3->Text = dlg->FileName;
					 }
					 else
					 {
						 MessageBox::Show("Select an Executable Only(A File with extension 'exe')");
					 }
				 }
			 }
			 catch(Exception ^ ex)
			 {

			 }
		 }
private: System::Void LauncherConfigBrowse4_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ dlg = gcnew OpenFileDialog();
			 dlg->Title = "Select the executable";
			 dlg->Filter = "Executables|*.exe";
			 try
			 {
				 if(dlg->ShowDialog() == Windows::Forms::DialogResult::OK)
				 {
					 if(System::IO::Path::GetExtension(dlg->FileName) == ".exe")
					 {
					      LauncherConfigLoc4->Text = dlg->FileName;
					 }
					 else
					 {
						 MessageBox::Show("Select an Executable Only(A File with extension 'exe')");
					 }
				 }
			 }
			 catch(Exception ^ ex)
			 {

			 }
		 }
private: System::Void LauncherConfigApply_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
				 RegistryKey^ rk = Registry::CurrentUser->OpenSubKey("Software\\LindusLabs\\XConnect",true);
				 if(rk != nullptr)
				 {
					 if(LauncherConfigGameTitle1->Text != "" && LauncherConfigLoc1->Text != "")
					 {
						 rk->SetValue("GameTitle1",LauncherConfigGameTitle1->Text);
						 rk->SetValue("GameLoc1",LauncherConfigLoc1->Text);
						 LaunchMenuItem1->Text = LauncherConfigGameTitle1->Text;
						 LaunchMenuItem1->Enabled = true;
						 LauncherBtn1->Text = ("Launch " + LauncherConfigGameTitle1->Text) ;
						 LauncherBtn1->Enabled = true;
					 }
					 else if(LauncherConfigLoc1->Text != "" || LauncherConfigGameTitle1->Text != "")
					 {
						 MessageBox::Show("Enter the correct details(Entry:1)");
					 }
					 else
					 {
						 rk->SetValue("GameTitle1","null");
						 rk->SetValue("GameLoc1","null");
					 }

					 if(LauncherConfigGameTitle2->Text != "" && LauncherConfigLoc2->Text != "")
					 {
						 rk->SetValue("GameTitle2",LauncherConfigGameTitle2->Text);
						 rk->SetValue("GameLoc2",LauncherConfigLoc2->Text);
						 LaunchMenuItem2->Text = LauncherConfigGameTitle2->Text;
						 LaunchMenuItem2->Enabled = true;
						 LauncherBtn2->Text = ("Launch " + LauncherConfigGameTitle2->Text) ;
						 LauncherBtn2->Enabled = true;
					 }
					 else if(LauncherConfigLoc2->Text != "" || LauncherConfigGameTitle2->Text != "")
					 {
						 MessageBox::Show("Enter the correct details(Entry:2)");
					 }
					 else
					 {
						 rk->SetValue("GameTitle2","null");
						 rk->SetValue("GameLoc2","null");
					 }

					 if(LauncherConfigGameTitle3->Text != "" && LauncherConfigLoc3->Text != "")
					 {
						 rk->SetValue("GameTitle3",LauncherConfigGameTitle3->Text);
						 rk->SetValue("GameLoc3",LauncherConfigLoc3->Text);
						 LauncherBtn3->Text = ("Launch " + LauncherConfigGameTitle3->Text) ;
						 LauncherBtn3->Enabled = true;
						 LaunchMenuItem3->Text = LauncherConfigGameTitle3->Text;
						 LaunchMenuItem3->Enabled = true;
					 }
					 else if(LauncherConfigLoc3->Text != "" || LauncherConfigGameTitle3->Text != "")
					 {
						 MessageBox::Show("Enter the correct details(Entry:3)");
					 }
					 else
					 {
						 rk->SetValue("GameTitle3","null");
						 rk->SetValue("GameLoc3","null");
					 }

					 if(LauncherConfigGameTitle4->Text != "" && LauncherConfigLoc4->Text != "")
					 {
						 rk->SetValue("GameTitle4",LauncherConfigGameTitle4->Text);
						 rk->SetValue("GameLoc4",LauncherConfigLoc4->Text);
						 LauncherBtn4->Text = ("Launch " + LauncherConfigGameTitle4->Text) ;
						 LauncherBtn4->Enabled = true;
						 LaunchMenuItem4->Text = LauncherConfigGameTitle4->Text;
						 LaunchMenuItem4->Enabled = true;
					 }
					 else if(LauncherConfigLoc4->Text != "" || LauncherConfigGameTitle4->Text != "")
					 {
						 MessageBox::Show("Enter the correct details(Entry:4)");
					 }
					 else
					 {
						 rk->SetValue("GameTitle4","null");
						 rk->SetValue("GameLoc4","null");
					 }
				 }
				 else 
				 {
					 MessageBox::Show("Invalid Registry Entries:Restarting the application may fix this problem");
				 }

			 }
			 catch(Exception ^ ex)
			 {
				 MessageBox::Show((String^)ex->Message);
			 }
		 }
private: System::Void LauncherConfigMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(launcher_present == false)
			 {
				 launcher_present = true;
				 BrowserTab->Controls->Add(LauncherConfigTab);
				 BrowserTab->SelectTab(LauncherConfigTab);
			 }
			 else
			 {
				 BrowserTab->SelectTab(LauncherConfigTab);
			 }
		 }
private: System::Void AboutHelpMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(about_present == false)
			 {
				 about_present = true;
				 BrowserTab->Controls->Add(AboutTabPage);
				 BrowserTab->SelectTab(AboutTabPage);
			 }
			 else
			 {
				 BrowserTab->SelectTab(AboutTabPage);
			 }
		 }
private: System::Void LaunchMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 execute_game("GameLoc1","");
		 }
private: System::Void LaunchMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
			 execute_game("GameLoc2","");
		 }
private: System::Void LaunchMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
			 execute_game("GameLoc3","");
		 }
private: System::Void LaunchMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
			 execute_game("GameLoc4","");
		 }
private: System::Void LauncherBtn1_Click(System::Object^  sender, System::EventArgs^  e) {
			 execute_game("GameLoc1","");
		 }
private: System::Void LauncherBtn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 execute_game("GameLoc2","");
		 }
private: System::Void LauncherBtn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 execute_game("GameLoc3","");
		 }
private: System::Void LauncherBtn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 execute_game("GameLoc4","");
		 }
private: System::Void BrowserUptate_Tick(System::Object^  sender, System::EventArgs^  e) {
			 count++;
			 if(count % 1000 == 0)
			 {
				 count = 0;
			 ServerMsgB->Refresh();
			 AdminMsgB->Refresh();
			 }

		 }
private: System::Void RefreshRoom_Click(System::Object^  sender, System::EventArgs^  e) {
			 ChatBrowser->Refresh();
		 }
private: System::Void RefreshBuzz_Click(System::Object^  sender, System::EventArgs^  e) {
			 BuzzBrowser->Refresh();
		 }
private: System::Void RefreshMessages_Click(System::Object^  sender, System::EventArgs^  e) {
			 AdminMsgB->Refresh();
			 ServerMsgB->Refresh();
		 }
private: System::Void SaveAppConfig_Click(System::Object^  sender, System::EventArgs^  e) {
			 RegistryKey^ settings = Registry::CurrentUser->OpenSubKey("Software\\LindusLabs\\XConnect",true);
			 settings->SetValue("LoadPageAuto",(int)(AppConfigAutoLoad->Checked));
			 settings->SetValue("AutoRefresh",(int)(AppConfigRefreshAuto->Checked));
			 settings->SetValue("TB_Notify",(int)(AppConfigEnNotify->Checked));
			 NotifyTray->Visible = (int)(settings->GetValue("TB_Notify"));
			 BrowserUptate->Enabled = (int)settings->GetValue("AutoRefresh");
			 settings->Close();


		 }
private: System::Void ExitTrayIcon_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->WindowState = FormWindowState::Maximized;
		 }
private: System::Void AppConfigBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(appconfig == false)
			 {
				 appconfig = true;
				 BrowserTab->Controls->Add(AppConfig);
				 BrowserTab->SelectTab(AppConfig);
			 }
			 else
			 {
				 BrowserTab->SelectTab(AppConfig);
			 }
		 }
private: System::Void CloseTab_Click(System::Object^  sender, System::EventArgs^  e) {
			 TabPage^ tbpg = gcnew TabPage();
			 tbpg = BrowserTab->SelectedTab;
			 if(tbpg == ChatRoom)
			 {
				 MessageBox::Show("You can't close Chat Room","Chat Room Exit");
			 }
			 else if(tbpg == BuzzTab)
			 {
				 MessageBox::Show("You can't close Buz Tab","BuzzTab Exit");
			 }
			 else
			 {
				 BrowserTab->Controls->Remove(BrowserTab->SelectedTab);
			 }
		 }
};
}

