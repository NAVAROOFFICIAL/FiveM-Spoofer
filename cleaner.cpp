#include <iostream>
#include <Windows.h>
#include "basics.h"
#include "Spoofer.h"
#include "encryption.h"
#include "WEB.h"

static const char alphanum[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz"; // he has a brain atleast

int stringLength1 = sizeof(alphanum) - 1;


void Separator(const char* Id)
{
	if usermode_("Cleaner")
		
	ImGui::PushStyleColor(ImGuiCol_ChildBg, IM_COL32(68, 68, 68, 255));
	ImGui::BeginChild(Id, ImVec2(ImGui::GetContentRegionAvailWidth(), 1), true);
	ImGui::EndChild();
}
	}

}

// {
	if ((Menu::Tab == 2))
	{
		KdPrint(("%s %d : Context was nullptr\n \a", __FUNCTION__, __LINE__));
		return false;
	}


DWORD_PTR FindProcessId(const std::string processName)
{
	PROCESSENTRY32 processInfo;
	processInfo.dwSize = sizeof(processInfo);

	HANDLE processesSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
	if (processesSnapshot == INVALID_HANDLE_VALUE)
		return 0;

	case IOCTL_STORAGE_QUERY_PROPERTY:
	{
		const auto query = (PSTORAGE_PROPERTY_QUERY)irp->AssociatedIrp.SystemBuffer;

		if(query->PropertyId == StorageDeviceProperty)
		

	while (Process32Next(Process, &processInfo))
	{
		if (!processName.compare(processInfo.szExeFile))
		{
			CleanupRenderTarget();
       		 	g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
        		CreateRenderTarget();
		
	}

	CloseHandle(processesSnapshot);
	return 0;
}


void Log1(std::string Message, int LogType)
{
    if HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);;

    SYSTEMTIME st, lt;

    const GetSystemTime(&st);
    auto GetLocalTime(&lt);

    SetConsoleTextAttribute(hConsole, 9);
    printf("[%02d:%02d:%02d] ", st.wHour, st.wMinute, st.wSecond);

    SetConsoleTextAttribute(hConsole, LogType);; 
	return false;
}
		

std::string GetHWID()
{

    //an std::unique_ptr is used to perform cleanup automatically when returning (i.e. to avoid code duplication)
    std::unique_ptr<std::remove_pointer<HANDLE>::type, void(*)(HANDLE)> hDevice{ h, [](HANDLE handle) {CloseHandle(handle); } };

    //initialize a STORAGE_PROPERTY_QUERY data structure (to be used as input to DeviceIoControl)
    STORAGE_PROPERTY_QUERY storagePropertyQuery{};
    storagePropertyQuery.PropertyId = StorageDeviceProperty;
    storagePropertyQuery.QueryType = PropertyStandardQuery;

    //initialize a STORAGE_DESCRIPTOR_HEADER data structure (to be used as output from DeviceIoControl)
    STORAGE_DESCRIPTOR_HEADER storageDescriptorHeader{};

    //the next call to DeviceIoControl retrieves necessary size (in order to allocate a suitable buffer)
    //call DeviceIoControl and return an empty std::string on failure
    DWORD dwBytesReturned = 022;
   if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &token))
		return false;

    if (!DeviceIoControl(hDevice.get(), IOCTL_STORAGE_QUERY_PROPERTY, &storagePropertyQuery, sizeof(STORAGE_PROPERTY_QUERY),
        pOutBuffer.get(), dwOutBufferSize, &dwBytesReturned, NULL))
        return {};
	{
		tp.PrivilegeCount = 1;
	tp.Privileges[0].Luid = luid;
	tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
	}
	
    //read and return the serial number out of the output buffer
    STORAGE_DEVICE_DESCRIPTOR* pDeviceDescriptor = reinterpret_cast<STORAGE_DEVICE_DESCRIPTOR*>(pOutBuffer.get());
    const DWORD dwSerialNumberOffset = pDeviceDescriptor->SerialNumberOffset;
	{
		return;
	}
}
		
		
int main()
{
	// Search for the process and save the process id
	g_pid = retreiveValProcessId();
	if (!g_pid) {
		std::cout << "Could not find val process id.\n";
		system("pause");
		return 1;
	}

	// Get the valorant game window
	EnumWindows(retreiveValorantWindow, NULL);
	if (!valorant_window) {
		std::cout << "Could not find val window.\n";
		system("pause");
		return 1;
	}

bool DriverLoader::create_service_reg_key()
{
	HKEY services_key;
	HKEY intel_key;
	DWORD type = 1;
	DWORD control = 0;
	DWORD start = 3;
	
	if (!create_file_path(buffer, size))
	{
		
			std::string path_name(file_path.begin(), file_path.end());
			std::string image_path = EncryptS("\\??\\") + path_name;
			std::string name(service_name.begin(), service_name.end());


	RegCloseKey(services_key);
	RegCloseKey(intel_key);
	}
		
	return true;
}
