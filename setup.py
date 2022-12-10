_INFO = {
	"MAIL": "abdelmathinhabachi@gmail.com",
	"README": """
# 42piscine-c
In one month, the Pool of 42 allows you to discover all the learning methods of the training: learning between peers, group work, evaluation by peers or pedagogy by project. Diving into the work methods of 42 students.

# WHAT IS THE PISCINE AT 42?
The highlight of the selection at 42 is the Piscine.

You don’t have to know how to code to apply to the Piscine at 42. Whatever your starting level is, the idea is to test the candidates’ involvement capacity during the Piscine at 42. Rather than offering a straight computer initiation, the Piscine at 42 lets you start the curriculum with intensive training in C, the first language you have to use during the training course. For one month, the Piscine at 42 lets you tackle the teaching methods of the school: peer-to-peer learning, group work, peer-evaluation and project pedagogy.

# Abdelmathin Habachi (ranked third)

![Maximum level](ScreenShot.png)

# Contents
{{Contents}}
"""
};

# #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  # 
import os;
import sys;

def find(dirname, callback, parametres):
	arr = [];
	for basename in os.listdir(dirname):
		filename = (dirname + "/" + basename);
		while ("//" in filename):
			filename = filename.replace("//", "/");
		if (not os.path.isdir(filename)):
			arr.append(filename);
			if (callback(filename, parametres)):
				return (arr);
		else:
			arr += find(filename, callback, parametres);
	return (arr);

def get_exercises(filename, all_exercises):
	if (not (("/C" in filename) and ("/ex" in filename))):
		return
	if ("README.md" in filename):
		return
	[day, ex, basename] = filename.split("/")[-3:]
	basename = basename.split(".")[0]
	_ex = ex[2:]

	title = ("C Piscine " + day + " Exercise " + _ex +" : " + basename)

	link = "https://github.com/Abdelmathin/42piscine-c/tree/main/"+day+"/"+ex

	line = "$~~~~~~~~$[" + title + "](" + link + ")\n"

	i = title.split(" Exercise ")[0]
	if not(i in all_exercises):
		all_exercises[i] = {}
	key = title.split(" : ")[0]
	all_exercises[i][key] = line

def generate_main_readme(dirname = "."):
	readme_file = dirname + "/README.md";
	while ("//" in readme_file):
		readme_file = readme_file.replace("//", "/");
	Contents = ""
	all_exercises = {}
	find(
		dirname,
		get_exercises,
		all_exercises);
	keys = list(all_exercises.keys())
	keys.sort()
	for key in keys:
		Contents += (key.replace("C Piscine C", "\n* Day ") + ":\n") + "\n"
		keys2 = list(all_exercises[key])
		keys2.sort()
		for key2 in keys2:
			Contents +=  (all_exercises[key][key2]) + "\n"
	_INFO["README"] = _INFO["README"].replace("{{Contents}}", Contents)
	with open(readme_file, "w") as fp:
		fp.write(_INFO["README"])


def generate_readme_exercise(filename, unused):
	if (".git/" in filename):
		return (0);
	readme = filename[:-len(filename.split("/")[-1])] + "README.md";
	content = ""
	try:
		content = open(filename, "r").read();
	except:
		return (0);
	while (("\n\n\n" in content)):
		content = content.replace("\n\n\n", "\n\n")
	t = "/* **************************************";
	t+= "************************************ */\n\n/*";
	if (not(t in content)):
		return (0);
	exercise = "";
	__exercise__  = (content.split(t)[1].split("\n*/\n")[0]);
	_exercise = __exercise__.strip();
	for line in _exercise.split("\n"):
		l = line.lower().replace("_", " ").replace("-", " ").strip();
		if not l:
			continue
		while ("  " in l):
			l = l.strip().replace("  ", " ")
		k = 0;
		while (l and l[0] in "#["):
			k = k + 1
			l = l[1:].strip()
		while (l and l[-1] in "#]:"):
			l = l[:-1].strip()
		if (l in ["by", "abdelmathin habachi", "abdelmathin", "habachi"]):
			continue
		if (k):
			l = l.replace("exercice", "exercise")
			if ("exercise" in l):
				exXX = filename.split("/")[-2].lower()
				if (not ("ex"in exXX)):
					raise
				line  = ("# Exercise " + exXX[2:] + ":")
			elif ("subject" in l):
				line  = "# Subject:";
			elif ("help" in l):
				line  = "# Help:";
			elif ("algorithm" in l):
				line  = "# Algorithm:";
		exercise += line + "\n"
	exercise = exercise.strip()
	content = content.replace(_exercise, exercise)
	with open(filename, "w") as fp:
		fp.write(content)
	# README.md
	readme_content = ""
	try:
		readme_content = open(readme, "r").read();
		if ("\n\n\n" in readme_content):
			readme_content = readme_content[readme_content.index("\n\n\n"):]
		else:
			readme_content = ""
	except:
		pass
	readme_content = readme_content.strip()
	readme_content = exercise + "\n\n\n" + readme_content
	readme_content = readme_content.strip() + "\n"
	with open(readme, "w") as fp:
		fp.write(readme_content)
	return (0);

def main(argc, argv):
	find(
		".",
		generate_readme_exercise,
		None);
	generate_main_readme()

if (__name__ == '__main__'):
	main(len(sys.argv), sys.argv)
