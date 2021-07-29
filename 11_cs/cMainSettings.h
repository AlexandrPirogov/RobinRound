#pragma once
#include "wx/wx.h"


class cMainSettings : public wxFrame
{
public:
	cMainSettings();
	~cMainSettings();

	wxStaticText* timer_tick_label = nullptr;
	wxTextCtrl* timer_tick_setting = nullptr;

	wxStaticText* min_count_label = nullptr;
	wxTextCtrl* min_count_executors = nullptr;

	wxStaticText* max_count_label = nullptr;
	wxTextCtrl* max_count_executors = nullptr;

	wxStaticText* min_executors_perf_label = nullptr;
	wxTextCtrl* min_executors_performance = nullptr;

	wxStaticText* max_executors_perf_label = nullptr;
	wxTextCtrl* max_executors_performance = nullptr;

	wxStaticText* min_tasks_count_label = nullptr;
	wxTextCtrl* min_tasks_count = nullptr;

	wxStaticText* max_tasks_count_label = nullptr;
	wxTextCtrl* max_tasks_count = nullptr;

	wxStaticText* min_tasks_complx_label = nullptr;
	wxTextCtrl* min_tasks_complexety = nullptr;

	wxStaticText* max_tasks_complx_label = nullptr;
	wxTextCtrl* max_tasks_complexety = nullptr;

	wxButton* submit = nullptr;

	void ShowSettings();
	void OnSubmitSettingsButtonClicked(wxCommandEvent& evt);

	void createTasks();


	int timer_tick;

	int min_count;

	int max_count;

	int min_executors;

	int max_executors;

	int min_tasks;

	int max_tasks;

	int min_tasks_complx_int;

	int max_tasks_complx_int;

	wxDECLARE_EVENT_TABLE();
};

