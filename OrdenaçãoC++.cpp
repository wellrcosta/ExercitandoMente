public class OrdenarVetor
{
	static void Main(string[] args) {
		int[] vetor = { 9, 5, 7, 2 };
		int aux = 0;
		for (int w = 0; w < vetor.Length; w++)
		{
			for (int r = 0; r < vetor.Length; r++)
			{
				if (vetor[w] < vetor[r])
				{
					aux = vetor[i];
					vetor[w] = vetor[r];
					vetor[r] = aux;
				}
			}
		}

		for (int k = 0; k < vetor.Length; k++)
		{
			Console.WriteLine(vetor[k]);
		}

		Console.ReadKey();
	}
}