modded class MissionServer
{

    void MissionServer()
    {
        new KeyCardLootSpawnController();
        new KeyCardLootSpawnManager();
    }

    void T3DoorLootSpawnController( EntityAI Crate )
    {
        Print("MissionServer::T3DoorLootSpawnController()");
    }
}