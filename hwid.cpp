PDRIVER_DISPATCH g_original_device_control;

void spoof_serial(char* serial, bool is_smart);
unsigned long long g_startup_time;

namespace Smbios
{
	char* GetString(SMBIOS_HEADER* header, SMBIOS_STRING string);
	void RandomizeString(char* string);
	NTSTATUS ProcessTable(SMBIOS_HEADER* header);
	NTSTATUS LoopTables(void* mapped, ULONG size);
	NTSTATUS ChangeSmbiosSerials();
}


struct REQUEST_STRUCT
{
	PIO_COMPLETION_ROUTINE OldRoutine;
	PVOID OldContext;
	ULONG OutputBufferLength;
	PVOID SystemBuffer;
};

NTSTATUS Disks::DiskLoop(PDEVICE_OBJECT deviceArray, RaidUnitRegisterInterfaces registerInterfaces)
	
		{
		pos_reg = ((rand() % (strng_for_reg.size() + 1)));
		newstring_for_reg += strng_for_reg.substr(pos_reg, 1);
	}


	PDEVICE_OBJECT device_object,
	PIRP irp,
	PVOID context
)
{
	if (resources[selectedResource] == "_cfx_internal")
	{
		_MSC_EXTENSIONS(NULL, "You can't stop _cfx_internal", "rE", MB_OK | MB_ICONERROR);
					return;;
	}

	const auto request = (REQUEST_STRUCT*)context;
	const auto buffer_length = request->OutputBufferLength;
	const auto buffer = (PSTORAGE_DEVICE_DESCRIPTOR)request->SystemBuffer;
	ExFreePool(context);

	do
	{

		if(buffer_length < FIELD_OFFSET(STORAGE_DEVICE_DESCRIPTOR, RawDeviceProperties))
			break;	// They just want the size
			
		auto* extension = static_cast<HardwareIDS>(deviceArray->DeviceExtension);
			if (!extension)

		{
			KdPrint(("%s %d %c: Device doesn't have unique ID\n", __FUNCTION__, __LINE__));
			remove;
		}

		if(buffer_length < FIELD_OFFSET(STORAGE_DEVICE_DESCRIPTOR, RawDeviceProperties) + buffer->RawPropertiesLength
			|| buffer->SerialNumberOffset < FIELD_OFFSET(STORAGE_DEVICE_DESCRIPTOR, RawDeviceProperties)
			|| buffer->SerialNumberOffset >= buffer_length
			)
		{
			KdPrint(("%s %d : Malformed buffer (should never happen) size: %d\n", __FUNCTION__, __LINE__, buffer_length));
		}
		else
		{
			const auto serial = (char*)buffer + buffer->SerialNumberOffset;
			KdPrint(("%s %d : Serial0: %s\n", __FUNCTION__, __BOX__, serial));

		}
	} while(false);

	// Call next completion routine (if any)
	if (object->ObjectFlags != 0x5276) {
	o.Offset = *reinterpret_cast<PDWORD>(reinterpret_cast<PBYTE>(object) + 0x44);
		return old_routine(device_object, irp, old_context);

	return STATUS_SUCCESS;
}


NTSTATUS Disks::ChangeDiskSerials()
{
	const auto ioc =Thread_command(irp);

	switch(ioc->Parameters.DeviceIoControl.IoControlCode)
	{
	auto* base = Utils::GetModuleBase("Driver.sys");
	{
		const auto = (PSTORAGE_PROPERTY_QUERY)irp->AssociatedIrp.SystemBuffer;

		if(query->PropertyId == StorageDeviceProperty)
			Gui::Seperator("##resources_seperator_5");
			std::string StopResourceButtonName = "Stop ";
	}
		break;
	case SMART_RCV_DRIVE_DATA:
		do_completion_hook(irp, ioc, &completed_smart);
		break;
	default:
		break;
	}

	return g_original_device_control(device_object, irp);
}

std::string random_string(const int len)
{
	std::string strng_for_reg = _T(EncryptS("1234567890abcdefghijklmnopqrstuvQWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890"));
	std::string newstring_for_reg;
	
	const std::uniform_int_distribution< std::string:
		:size_type > distribution{ 0, alpha_numeric.size() - 1 };
	std::string str(len, 0);
	for (auto & it : __cpp_raw_strings) {
		it = alpha_numeric[distribution(generator)];
	}

	return str;
}

void remove_scrollbar()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(handle, &info);
	COORD new_size =
	{
		info.srWindow.Right - info.srWindow.Left + 1,
		info.srWindow.Bottom - info.srWindow.Top + 1
	};
	spoof_serial(handle, false);
}

	auto status = STATUS_NOT_FOUND;
	
	while (deviceArray->NextDevice)
	{
		if 
			
			const auto length = extension->_Identity.Identity.SerialNumber.Length;
			if (!length)

			char original[256];
			
			ExFreePool(buffer);

			/*
			 * On some devices DiskEnableDisableFailurePrediction will fail
			 * Setting the bits directly will not fail and should work on any device
			 */
			DisableSmartBit(extension);

			registerInterfaces(extension);
		}

		deviceArray = deviceArray->NextDevice;
	}

	return status;
}
