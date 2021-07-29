#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(10001, OnStartButtonClicked)
	EVT_BUTTON(10002, OnSettingsButtonClicked)
	EVT_TIMER(10005, OnTimer)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "test1", wxPoint(30,30), wxSize(600,600)), m_timer(this, 10005)
{
	settings = new cMainSettings();
	start_btn = new wxButton(this, 10001, "NEW", wxPoint(10,10), wxSize(100,50));
	settings_btn = new wxButton(this, 10002, "SETTINGS", wxPoint(130,10), wxSize(100,50));
	/*btns = new wxButton * [nFieldWidth * nFieldHeight];
	wxGridSizer* grid = new wxGridSizer(nFieldWidth, nFieldHeight, 0, 0);

	nField = new int[nFieldWidth * nFieldHeight];

	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	for (int x = 0; x < nFieldWidth; x++) {
		for (int y = 0; y < nFieldHeight; y++) {
			btns[y * nFieldWidth + x] = new wxButton(this, 10000 + (y * nFieldWidth + x));
			btns[y * nFieldWidth + x]->SetFont(font);

			grid->Add(btns[y * nFieldWidth + x], 1, wxEXPAND | wxALL);

			btns[y * nFieldWidth + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
			nField[y * nFieldWidth + x] = 0;
		}
	}

	this->SetSizer(grid);
	grid->Layout();*/
}


cMain::~cMain()
{
	/*delete[] btns;*/
}

void cMain::OnStartButtonClicked(wxCommandEvent& evt)
{
	int min_exec_count = this->settings->min_count;
	int max_exec_count = this->settings->max_count;
	int final_executors = rand() % max_exec_count + min_exec_count;
	executors_btns = new wxButton*[final_executors];
	wxGridSizer* grid = new wxGridSizer(final_executors, 1, 0, 0);

	for (int x = 0; x < final_executors; x++) {
			executors_btns[x] = new wxButton(this, wxID_ANY, "Executor", wxPoint(150, x*50+150), wxSize(100, 50));
			executers.push_back(new Executer(std::to_string(x)));
			//executors_btns[x]->SetFont(font);

		//	grid->Add(btns[y * nFieldWidth + x], 1, wxEXPAND | wxALL);

			//btns[y * nFieldWidth + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
			//nField[y * nFieldWidth + x] = 0;
	}

	int tick = this->settings->timer_tick;
	m_timer.Start(tick*1000);
	evt.Skip();
}

void cMain::OnSettingsButtonClicked(wxCommandEvent& evt)
{
	this->settings->ShowSettings();
}



void cMain::OnTimer(wxTimerEvent& event)
{
	
}
