#include "cMainSettings.h"

wxBEGIN_EVENT_TABLE(cMainSettings, wxFrame)
	EVT_BUTTON(10011, OnSubmitSettingsButtonClicked)
wxEND_EVENT_TABLE()

cMainSettings::cMainSettings() : wxFrame(nullptr, 10008, "sett", wxPoint(30, 30), wxSize(600, 600))
{
	
}

cMainSettings::~cMainSettings()
{
}

void cMainSettings::ShowSettings()
{
	timer_tick_label = new wxStaticText(this, wxID_ANY, "Timer tick: ", wxPoint(50, 50), wxSize(100, 20));
	timer_tick_setting = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150,50), wxSize(100,20));

	min_count_label = new wxStaticText(this, wxID_ANY, "Min count executors", wxPoint(50, 100), wxSize(100, 20));
	min_count_executors = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150, 100), wxSize(100, 20));

	max_count_label = new wxStaticText(this, wxID_ANY, "Max count executors", wxPoint(50, 150), wxSize(100, 20));
	max_count_executors = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150, 150), wxSize(100, 20));

	min_executors_perf_label = new wxStaticText(this, wxID_ANY, "Min executor perfomance", wxPoint(50, 200), wxSize(100, 20));
	min_executors_performance = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150, 200), wxSize(100, 20));

	max_executors_perf_label = new wxStaticText(this, wxID_ANY, "Max executor perfomance", wxPoint(50, 250), wxSize(100, 20));
	max_executors_performance = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150, 250), wxSize(100, 20));

	min_tasks_count_label = new wxStaticText(this, wxID_ANY, "Min tasks count", wxPoint(50, 300), wxSize(100, 20));
	min_tasks_count = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150, 300), wxSize(100, 20));

	max_tasks_count_label = new wxStaticText(this, wxID_ANY, "Max tasks count", wxPoint(50, 350), wxSize(100, 20));
	max_tasks_count = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150, 350), wxSize(100, 20));

	min_tasks_complx_label = new wxStaticText(this, wxID_ANY, "Min tasks complexety", wxPoint(50, 400), wxSize(100, 20));
	min_tasks_complexety = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150, 400), wxSize(100, 20));

	max_tasks_complx_label = new wxStaticText(this, wxID_ANY, "Max tasks complexety", wxPoint(50, 450), wxSize(100, 20));
	max_tasks_complexety = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150, 450), wxSize(100, 20));

	submit = new wxButton(this, 10011, "Submit", wxPoint(500, 500), wxSize(100, 50));
	this->Show();
}

void cMainSettings::OnSubmitSettingsButtonClicked(wxCommandEvent& evt)
{
	this->timer_tick = atoi(timer_tick_setting->GetValue());
	this->min_count = atoi(min_count_executors->GetValue());
	this->max_count = atoi(max_count_executors->GetValue());
	this->min_executors = atoi(min_executors_performance->GetValue());
	this->max_executors = atoi(max_executors_performance->GetValue());
	this->min_tasks = atoi(min_tasks_count->GetValue());
	this->max_tasks = atoi(max_tasks_count->GetValue());
	this->min_tasks_complx_int = atoi(min_tasks_complexety->GetValue());
	this->max_tasks_complx_int = atoi(max_tasks_complexety->GetValue());
	this->Hide();
	evt.Skip();
}

void cMainSettings::createTasks()
{
	for(int i = 0; i < this->execu)
}
