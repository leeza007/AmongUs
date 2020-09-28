#pragma once

struct Settings
{
	bool cheat_switch; // hackar 1337
	bool always_be_imposter;
	bool no_cooldown_time;
	bool speed;
	bool kill_value;
	int kill_distance;
	int speed_value;
};

namespace menu
{
	/* shitty configuration system */
	extern Settings settings;

	static void load_settings()
	{
		CreateDirectory("configs", NULL);
		std::string chars;
		chars = "configs/";
		chars += "config";
		chars += ".dat";
		std::ifstream f(chars.c_str());
		if (!f.good()) return;

		FILE* fin = fopen(chars.c_str(), "r");
		fread(&settings, sizeof(Settings), 1, fin);
		fclose(fin);
	}

	static void save_settings()
	{
		CreateDirectory("configs", NULL);
		std::string chars;
		chars = "configs/";
		chars += "config";
		chars += ".dat";
		FILE* fout = fopen(chars.c_str(), "w");
		fwrite(&settings, sizeof(Settings), 1, fout);
		fclose(fout);
	}

	extern bool opened;
	void colors();
	void tabs();
	void draw();
	struct Info
	{
		int tab_value = 0;
	}; inline Info info;
};