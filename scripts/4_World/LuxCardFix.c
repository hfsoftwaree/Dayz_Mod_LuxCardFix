modded class lux_MilitaryAccessCard
{
    override void EEOnCECreate()
    {
        super.EEOnCECreate();
        if (GetGame().IsServer())
        {
            // Faz o cartão spawnar com 50% de vida
            SetHealth01("", "", 0.5);
        }
    }

    override void OnUse()
    {
        // Executa a lógica de dano a cada uso
        if (GetGame().IsServer())
        {
            float currentHealth = GetHealth01("", "");
            float newHealth = currentHealth - 0.5;
            if (newHealth < 0) newHealth = 0;
            SetHealth01("", "", newHealth);
        }
    }
}
