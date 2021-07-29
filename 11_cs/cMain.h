#pragma once
#include "wx\wx.h"
#include "Executer.h"
#include "cMainSettings.h"

class cMain : public wxFrame
{
public:

	int executors_count = 10;
	int tasks_count = 50;

	wxButton** btns;

	int* nField = nullptr;
	bool bFirstClick = true;
	cMain();
	~cMain();

public:
	wxButton* start_btn = nullptr;
	wxButton* settings_btn = nullptr;
	wxButton** executors_btns = nullptr;
	wxButton* selected_executor_tasks = nullptr;

	wxTextCtrl* m_txt1 = nullptr;
	wxListBox* m_list1 = nullptr;

	std::vector<Executer*> executers;

	void OnStartButtonClicked(wxCommandEvent& evt);
	void OnSettingsButtonClicked(wxCommandEvent& evt);

	void OnTimer(wxTimerEvent& event);
	wxTimer m_timer;
	

	wxDECLARE_EVENT_TABLE();
private:
	cMainSettings* settings = nullptr;
};

