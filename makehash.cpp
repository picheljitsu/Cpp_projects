std::string makehash(std::string procentry)
{
	std::stringstream sshash;
	hash<string> hasher;
	size_t hash = hasher(procentry);
	sshash << hash << endl;
	return (sshash.str()).substr(0,6);

}
