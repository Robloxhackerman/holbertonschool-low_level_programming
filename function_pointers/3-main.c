int main(int argc, char *argv[])
{
	int PEPE1, PEPE2, PEPERESU;
	int (*PEPE_F)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	PEPE_F = get_op_func(argv[2]);
	PEPE1 = atoi(argv[1]);
	PEPE2 = atoi(argv[3]);
	PEPERESU = PEPE_F(PEPE1, PEPE2);
	return(0);
}
